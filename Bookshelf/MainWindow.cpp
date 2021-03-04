//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainWindow.h"
#include "InsertWindow.h"
#include "TransferWindow.h"
#include "reinit.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainWindowForm *MainWindowForm;
//---------------------------------------------------------------------------
__fastcall TMainWindowForm::TMainWindowForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TMainWindowForm::Showbooks1Click(TObject *Sender)
{
	MainWindowForm->Show();
	TransferForm->Hide();
	InsertBookForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindowForm::Insertbook1Click(TObject *Sender)
{
	InsertBookForm->Show();
	TransferForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindowForm::Transfer1Click(TObject *Sender)
{
    TransferForm->Show();
	InsertBookForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindowForm::Button1Click(TObject *Sender)
{

	UnicodeString filter = "";
    int counter = 0;
	if (RadioGroup1->Items->Strings[RadioGroup1->ItemIndex] > 0) {
		filter = filter + "status = '" + RadioGroup1->Items->Strings[RadioGroup1->ItemIndex] + "'";
        counter++;
	}

	if (EAuthorSort->Text.Length() > 0){
		if (counter > 0) {
            filter = filter + " AND ";
		}
		filter = filter + "authorName = '" + EAuthorSort->Text + "'";
		counter++;
	}

	if (EBookNameSort->Text != "") {
		if (counter > 0) {
			filter = filter + " AND ";
		}
		filter = filter + "bookName = '" + EBookNameSort->Text + "'";
		counter++;
	}

	if (EPagesMinSort->Text != "") {
   		if (counter > 0) {
            filter = filter + " AND ";
		}
		filter = filter + "pages > " + EPagesMinSort->Text;
		counter++;
	}

	if (EPagesMaxSort->Text != "") {
   		if (counter > 0) {
            filter = filter + " AND ";
		}
		filter = filter + "pages < " + EPagesMaxSort->Text;
		counter++;
	}
	ShowMessage("Set new filter: " + filter);
	TBooksMain->Filter = filter;
}
//---------------------------------------------------------------------------

void __fastcall TMainWindowForm::ClearSortClick(TObject *Sender)
{
    TBooksMain->Filter = "";
}
//---------------------------------------------------------------------------


void __fastcall TMainWindowForm::Button2Click(TObject *Sender)
{
	const CROATIAN = (SUBLANG_CROATIAN_CROATIA <<10) | LANG_CROATIAN;
	if(LoadNewResourceModule(CROATIAN)){
		TBooksMain->Active = false;
        DBooks->Enabled = false;
		ADOConnection->Connected = false;
        InsertBookForm->ADOConnection1->Connected = false;
		ReinitializeForms();
        InsertBookForm->ADOConnection1->Connected = true;
		ADOConnection->Connected = true;
		TBooksMain->Active = true;
        DBooks->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TMainWindowForm::Button3Click(TObject *Sender)
{
	const ENGLISH = (SUBLANG_ENGLISH_US <<10) | LANG_ENGLISH;
	if(LoadNewResourceModule(ENGLISH)){
		TBooksMain->Active = false;
        DBooks->Enabled = false;
		ADOConnection->Connected = false;
        InsertBookForm->ADOConnection1->Connected = false;
		ReinitializeForms();
        InsertBookForm->ADOConnection1->Connected = true;
		ADOConnection->Connected = true;
		TBooksMain->Active = true;
        DBooks->Enabled = true;
	}
}
//---------------------------------------------------------------------------

