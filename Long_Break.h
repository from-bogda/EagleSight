//---------------------------------------------------------------------------

#ifndef Long_BreakH
#define Long_BreakH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TLongBreak : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TButton *Button1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TLongBreak(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLongBreak *LongBreak;
//---------------------------------------------------------------------------
#endif
