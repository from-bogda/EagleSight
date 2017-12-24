//---------------------------------------------------------------------------

#ifndef Short_BreakH
#define Short_BreakH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TShortBreak : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        void __fastcall Image1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
private:	// User declarations
//void __fastcall TForm2::CreateParams(TCreateParams &Params);
public:		// User declarations
        __fastcall TShortBreak(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShortBreak *ShortBreak;
//---------------------------------------------------------------------------
#endif
