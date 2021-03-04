//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainMenuFrame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainMenuFrameForm *MainMenuFrameForm;
//---------------------------------------------------------------------------
__fastcall TMainMenuFrameForm::TMainMenuFrameForm(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainMenuFrameForm::Showbooks1Click(TObject *Sender)
{
	MainWindowForm->Show();
	InsertBookForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TMainMenuFrameForm::Insertbook1Click(TObject *Sender)
{
	MainWindowForm->Hide();
	InsertBookForm->Show();
}
//---------------------------------------------------------------------------
