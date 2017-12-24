//---------------------------------------------------------------------------

#ifndef ViewH
#define ViewH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include "trayicon.h"
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TOptionsForm : public TForm
{
__published:	// IDE-managed Components
        TCheckBox *ShortCheck;
        TComboBox *ShortTimeBox;
        TLabel *Label1;
        TTimer *ShortPeriodTimer;
        TButton *Button1;
        TTimer *ShortIntervalTimer;
        TTrayIcon *TrayIcon1;
        TPopupMenu *PopupMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TLabel *Label2;
        TCheckBox *LongCheck;
        TTimer *LongPeriodTimer;
        TTimer *LongIntervalTimer;
        TComboBox *LongTimeBox;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall ShortPeriodTimerTimer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ShortTimeBoxChange(TObject *Sender);
        void __fastcall ShortIntervalTimerTimer(TObject *Sender);
        void __fastcall LongPeriodTimerTimer(TObject *Sender);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall LongIntervalTimerTimer(TObject *Sender);
        void __fastcall LongTimeBoxChange(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TOptionsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOptionsForm *OptionsForm;
//---------------------------------------------------------------------------
#endif
