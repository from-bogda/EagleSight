//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("View.cpp", OptionsForm);
USEFORM("Short_Break.cpp", ShortBreak);
USEFORM("Long_Break.cpp", LongBreak);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TOptionsForm), &OptionsForm);
                 Application->CreateForm(__classid(TShortBreak), &ShortBreak);
                 Application->CreateForm(__classid(TLongBreak), &LongBreak);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
