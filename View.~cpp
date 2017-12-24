//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <IniFiles.hpp>
#include "Short_Break.h"
#include "Long_Break.h"

#include "View.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TOptionsForm *OptionsForm;

bool tray=false;
TIniFile* ini = new TIniFile (GetCurrentDir() + "//settings.ini");

//---------------------------------------------------------------------------
__fastcall TOptionsForm::TOptionsForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOptionsForm::FormCreate(TObject *Sender)
{
        Left = ini->ReadInteger("MainWindow", "Left", 0);
        Top = ini->ReadInteger("MainWindow", "Top", 0);
        ShortCheck->State = ini->ReadBool("Settings", "enabledShortCheck", false);
        LongCheck->State = ini->ReadBool("Settings", "enabledLongCheck", false);
        ShortTimeBox->ItemIndex = ini->ReadInteger("Settings", "indexShortTimeBox", 0);
        LongTimeBox->ItemIndex = ini->ReadInteger("Settings", "indexLongTimeBox", 0);
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::FormClose(TObject *Sender, TCloseAction &Action)
{
        ini->WriteInteger("MainWindow", "Left", Left);
        ini->WriteInteger("MainWindow", "Top", Top);
        delete ini;

}

//---------------------------------------------------------------------------

void __fastcall TOptionsForm::ShortPeriodTimerTimer(TObject *Sender)
{
        ShortPeriodTimer->Enabled=false;
        ShortIntervalTimer->Enabled=true;
        ShortBreak->Show();
        ShortBreak->BringToFront();
        SetWindowPos(ShortBreak->Handle,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::Button1Click(TObject *Sender)
{
        if (ShortCheck->State == cbChecked)
        {
                ShortPeriodTimer->Enabled=true;
        };

        if (LongCheck->State == cbChecked)
        {
                LongPeriodTimer->Enabled=true;
        };

        ini->WriteBool("Settings", "enabledShortCheck", ShortCheck->State);
        ini->WriteBool("Settings", "enabledLongCheck", LongCheck->State);
        ini->WriteInteger("Settings", "indexShortTimeBox", ShortTimeBox->ItemIndex);
        ini->WriteInteger("Settings", "indexLongTimeBox", LongTimeBox->ItemIndex);
        OptionsForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::ShortTimeBoxChange(TObject *Sender)
{
        ShortPeriodTimer->Interval=(ShortTimeBox->Text)*1000;
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::ShortIntervalTimerTimer(TObject *Sender)
{
        ShortBreak->Close();
        ShortIntervalTimer->Enabled=false;
        ShortPeriodTimer->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::FormCloseQuery(TObject *Sender, bool &CanClose)
{
        if(!tray){
        TrayIcon1->Minimize();
        CanClose=false;
        }
        else{
        CanClose=true;
        }

}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::N1Click(TObject *Sender)
{
        TrayIcon1->Restore();
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::LongTimeBoxChange(TObject *Sender)
{
        LongPeriodTimer->Interval=(LongTimeBox->Text)*1000;
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::LongPeriodTimerTimer(TObject *Sender)
{
        LongBreak->Show();
        LongPeriodTimer->Enabled=false;
        LongIntervalTimer->Enabled=true;
        LongBreak->Show();
        LongBreak->BringToFront();
        SetWindowPos(LongBreak->Handle,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE | SWP_NOSIZE);
}

//---------------------------------------------------------------------------

void __fastcall TOptionsForm::LongIntervalTimerTimer(TObject *Sender)
{
        LongBreak->Close();
        LongIntervalTimer->Enabled=false;
        LongPeriodTimer->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TOptionsForm::N2Click(TObject *Sender)
{
        tray=true;
        OptionsForm->Close();
}
//---------------------------------------------------------------------------


