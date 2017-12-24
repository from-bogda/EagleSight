//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Long_Break.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLongBreak *LongBreak;
//---------------------------------------------------------------------------
__fastcall TLongBreak::TLongBreak(TComponent* Owner)
        : TForm(Owner)
{
        ShowWindow(Application->Handle, SW_HIDE);
}
//---------------------------------------------------------------------------
void __fastcall TLongBreak::Button1Click(TObject *Sender)
{
        LongBreak->Close();        
}
//---------------------------------------------------------------------------

