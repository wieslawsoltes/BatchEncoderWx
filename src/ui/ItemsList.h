#ifndef __ItemsList__
#define __ItemsList__

#include <wx/listctrl.h>
#include <wx/persist.h>
#include <functional>
#include <string>

class ItemColumn
{
public:
    long nIndex;
    std::wstring szHeading;
    int nWidth;
};

class ItemsList : public wxListCtrl
{
public:
    bool bTransfer = false;
    int nCurrentItem = -1;
public:
    std::function<std::wstring(int, int)> GetText = nullptr;
    std::function<void(int, int, wxString&)> SetText = nullptr;
public:
    ItemsList(wxWindow *parent,
        wxWindowID id = wxID_ANY,
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxDefaultSize,
        long style = wxLC_ICON,
        const wxValidator& validator = wxDefaultValidator,
        const wxString& name = wxListCtrlNameStr) :
        wxListCtrl(parent, id, pos, size, style, validator, name)
    {
        this->Connect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(ItemsList::m_listCtrlItemsOnListEndLabelEdit), NULL, this);
    }
    ~ItemsList()
    {
        this->Disconnect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(ItemsList::m_listCtrlItemsOnListEndLabelEdit), NULL, this);
    }
public:
    wxString OnGetItemText(long item, long column) const
    {
        if (GetText != nullptr)
        {
            return GetText(item, column);
        }
        return L"??";
    }
public:
    void m_listCtrlItemsOnListEndLabelEdit(wxListEvent& event)
    {
        if (!event.IsEditCancelled())
        {
            if (SetText != nullptr)
            {
                auto id = event.m_item.m_itemId;
                auto col = event.m_item.m_col;
                auto text = event.m_item.m_text;
                SetText(id, col, text);
                wxLogDebug(L"Edit Label");
            }
        }
    }
public:
    template<typename T>
    void UpdateProperties(wxWindowBase *parent, std::function<void(T&)> set, std::function<void()> reset, std::vector<T>& items)
    {
        if (this->GetSelectedItemCount() > 0)
        {
            int nSelected = this->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            if (nSelected >= 0 && nCurrentItem != nSelected)
            {
                bTransfer = true;
                auto& item = items[nSelected];
                set(item);
                nCurrentItem = nSelected;
                parent->TransferDataToWindow();
                bTransfer = false;
                wxLogDebug(L"Set Properties");
            }
        }
        else
        {
            if (nCurrentItem != -1)
            {
                bTransfer = true;
                reset();
                nCurrentItem = -1;
                parent->TransferDataToWindow();
                bTransfer = false;
                wxLogDebug(L"Reset Properties");
            }
        }
    }
public:
    template<typename T, typename U>
    void UpdateProperty(wxWindowBase *parent, std::function<void(T&, U&)> setter, U& property, std::vector<T>& items)
    {
        if (bTransfer == false)
        {
            bTransfer = true;
            int nSelected = this->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            if (nSelected >= 0)
            {
                auto& item = items[nSelected];
                parent->TransferDataFromWindow();
                setter(item, property);
                this->RefreshItem(nSelected);
                wxLogDebug(L"Update Property");
            }
            bTransfer = false;
        }
    }
};

class wxPersistentItemsList : public wxPersistentObject
{
public:
    wxPersistentItemsList(ItemsList* list) : wxPersistentObject(list)
    {
        list->Bind(wxEVT_DESTROY, &wxPersistentItemsList::HandleDestroy, this);
    }
    ~wxPersistentItemsList()
    {
    }
private:
    void HandleDestroy(wxWindowDestroyEvent& event)
    {
        event.Skip();
        if (event.GetEventObject() == GetObject())
        {
            wxPersistenceManager::Get().SaveAndUnregister(GetObject());
        }
    }
public:
    ItemsList *Get() const 
    {
        return static_cast<ItemsList *>(GetObject());
    }
public:
    virtual wxString GetKind() const wxOVERRIDE
    {
        return L"List";
    }
    virtual wxString GetName() const wxOVERRIDE
    {
        return Get()->GetName();
    }
    virtual void Save() const wxOVERRIDE
    {
        const ItemsList * const list = Get();

        // TODO: Save columns.
        // TODO: Save columns widths.
        // TODO: Save columns order.
    }
    virtual bool Restore() wxOVERRIDE
    {
        ItemsList * const list = Get();

        // TODO: Restore columns.
        // TODO: Restore columns widths.
        // TODO: Restore columns order.

        return true;
    }

    wxDECLARE_NO_COPY_CLASS(wxPersistentItemsList);
};

inline wxPersistentObject *wxCreatePersistentObject(ItemsList *list)
{
    return new wxPersistentItemsList(list);
}

#endif // __ItemsList__
