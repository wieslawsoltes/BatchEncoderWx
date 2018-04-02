#ifndef __ItemsList__
#define __ItemsList__

#include <wx/listctrl.h>
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
        // Connect Events
        this->Connect(wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT, wxListEventHandler(ItemsList::m_listCtrlItemsOnListBeginLabelEdit), NULL, this);
        this->Connect(wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS, wxListEventHandler(ItemsList::m_listCtrlItemsOnListDeleteAllItems), NULL, this);
        this->Connect(wxEVT_COMMAND_LIST_DELETE_ITEM, wxListEventHandler(ItemsList::m_listCtrlItemsOnListDeleteItem), NULL, this);
        this->Connect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(ItemsList::m_listCtrlItemsOnListEndLabelEdit), NULL, this);
        this->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(ItemsList::m_listCtrlItemsOnListItemDeselected), NULL, this);
        this->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(ItemsList::m_listCtrlItemsOnListItemSelected), NULL, this);
    }
    ~ItemsList()
    {
        // Disconnect Events
        this->Disconnect(wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT, wxListEventHandler(ItemsList::m_listCtrlItemsOnListBeginLabelEdit), NULL, this);
        this->Disconnect(wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS, wxListEventHandler(ItemsList::m_listCtrlItemsOnListDeleteAllItems), NULL, this);
        this->Disconnect(wxEVT_COMMAND_LIST_DELETE_ITEM, wxListEventHandler(ItemsList::m_listCtrlItemsOnListDeleteItem), NULL, this);
        this->Disconnect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(ItemsList::m_listCtrlItemsOnListEndLabelEdit), NULL, this);
        this->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(ItemsList::m_listCtrlItemsOnListItemDeselected), NULL, this);
        this->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(ItemsList::m_listCtrlItemsOnListItemSelected), NULL, this);
    }
    wxString OnGetItemText(long item, long column) const
    {
        if (GetText != nullptr)
        {
            return GetText(item, column);
        }
        return L"??";
    }
    void m_listCtrlItemsOnListBeginLabelEdit(wxListEvent& event)
    {
    }
    void m_listCtrlItemsOnListDeleteAllItems(wxListEvent& event)
    {
    }
    void m_listCtrlItemsOnListDeleteItem(wxListEvent& event)
    {
    }
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
            }
        }
    }
    void m_listCtrlItemsOnListItemDeselected(wxListEvent& event)
    {
    }
    void m_listCtrlItemsOnListItemSelected(wxListEvent& event)
    {
    }
};

#endif // __ItemsList__
