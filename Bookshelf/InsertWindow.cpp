//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "InsertWindow.h"
#include "MainWindow.h"
#include "TransferWindow.h"
#include "BookInterface.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

extern "C" __declspec(dllexport) void* __stdcall CreateBook();

TInsertBookForm *InsertBookForm;
//---------------------------------------------------------------------------
__fastcall TInsertBookForm::TInsertBookForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TInsertBookForm::Showbooks1Click(TObject *Sender)
{
	MainWindowForm->Show();
	InsertBookForm->Free();
	TransferForm->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TInsertBookForm::Insertbook1Click(TObject *Sender)
{
	InsertBookForm->Show();
	TransferForm->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TInsertBookForm::ButtonAddBookClick(TObject *Sender)
{
    BookInterface* book;
	HINSTANCE load = LoadLibrary(L"Book.dll");
	if (load) {
			ShowMessage("Library loaded!");
			typedef void *(*VoidReturnFunc)();

			VoidReturnFunc newBook = (VoidReturnFunc)GetProcAddress(load, "CreateBook");
			book = (BookInterface*) newBook();

	}
	else {
			ShowMessage("Library not loaded!");
	}
	book->setBasicInfo(EBookName->Text, EAuthor->Text, chooseStatus->Text, EPages->Text.ToInt());
	book->setDescription(EDescription->Text);

	MainWindowForm->TBooksMain->Insert();
	MainWindowForm->TBooksMain->FieldByName("authorName")->AsString = book->getAuthorName();
	MainWindowForm->TBooksMain->FieldByName("bookName")->AsString = book->getName();
	MainWindowForm->TBooksMain->FieldByName("description")->AsString = book->getDescription();
	MainWindowForm->TBooksMain->FieldByName("status")->AsString = book->getStatus();
	MainWindowForm->TBooksMain->FieldByName("pages")->AsInteger = book->getPages();
	MainWindowForm->TBooksMain->Post();

	EAuthor->Text = "";
	EBookName->Text = "";
	EDescription->Text = "";
	EPages->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TInsertBookForm::FormCreate(TObject *Sender)
{
	EAuthor->Text = "";
	EBookName->Text = "";
	EDescription->Text = "";
	EPages->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TInsertBookForm::TransferClick(TObject *Sender)
{
	TransferForm->Show();
	InsertBookForm->Hide();
}
//---------------------------------------------------------------------------

