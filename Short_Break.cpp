//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Short_Break.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShortBreak *ShortBreak;
//---------------------------------------------------------------------------
__fastcall TShortBreak::TShortBreak(TComponent* Owner)
        : TForm(Owner)
{
        ShowWindow(Application->Handle, SW_HIDE);
}
//---------------------------------------------------------------------------

void __fastcall TShortBreak::Image1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        if(Button==mbRight)
        ShortBreak->Close();        
}
//---------------------------------------------------------------------------

