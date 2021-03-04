//---------------------------------------------------------------------------

#ifndef MainMenuFrameH
#define MainMenuFrameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TMainMenuFrameForm : public TFrame
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Books;
	TMenuItem *Showbooks1;
	TMenuItem *Insertbook1;
	void __fastcall Showbooks1Click(TObject *Sender);
	void __fastcall Insertbook1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainMenuFrameForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainMenuFrameForm *MainMenuFrameForm;
//---------------------------------------------------------------------------
#endif
