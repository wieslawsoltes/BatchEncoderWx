#pragma once

#include "Headers.h"

class MainApp : public wxApp
{
public:
    config::CConfig m_Config;
public:
    virtual bool OnInit();
    virtual int OnExit();
public:
    void LoadConfig();
    void SaveConfig();
};
