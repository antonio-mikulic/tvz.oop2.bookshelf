//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "TransferWindow.h"
#include "InsertWindow.h"
#include "MainWindow.h"
#include <idhashmessagedigest.hpp>
#include <idhashsha.hpp>
#include <iostream>
#include <fstream>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTransferForm *TransferForm;
//---------------------------------------------------------------------------
__fastcall TTransferForm::TTransferForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTransferForm::Showbooks1Click(TObject *Sender)
{
	MainWindowForm->Show();
	TransferForm->Hide();
	InsertBookForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TTransferForm::Insertbook1Click(TObject *Sender)
{
	InsertBookForm->Show();
	TransferForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TTransferForm::Transfer1Click(TObject *Sender)
{
	TransferForm->Show();
	InsertBookForm->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TTransferForm::Button1Click(TObject *Sender)
{
	TIdHashSHA1 *sha1 = new TIdHashSHA1;
	EHash->Text = sha1->HashStringAsHex(EPassword->Text);
	delete sha1;


	TCPTransferClient->Host = EHost->Text;
	TCPTransferClient->Connect();

	TCPTransferClient->Socket->Write(EHash->Text.Length());
	TCPTransferClient->Socket->Write(EHash->Text);

	TCPTransferClient->Socket->Write(EDownloadPath->Text.Length() + ENewFileName->Text.Length());
	TCPTransferClient->Socket->Write(EDownloadPath->Text + ENewFileName->Text);


	TCPTransferClient->Disconnect();

}
//---------------------------------------------------------------------------


void __fastcall TTransferForm::TCPTransferServerExecute(TIdContext *AContext)
{
	int lenghtPassword = AContext->Connection->Socket->ReadLongInt();
	UnicodeString passwordClientHash = AContext->Connection->Socket->ReadString(lenghtPassword);

	int lenghtSavePath = AContext->Connection->Socket->ReadLongInt();
	UnicodeString savePath = AContext->Connection->Socket->ReadString(lenghtSavePath);

	AContext->Connection->Disconnect();

	TIdHashSHA1 *sha1 = new TIdHashSHA1;
	UnicodeString passwordServerHash = sha1->HashStringAsHex(EPassword->Text);
	delete sha1;

	if(passwordClientHash == passwordServerHash){
		connectionMessage->Caption = "Succes! File transfer not supported";
	}else{
		connectionMessage->Caption = "wrong pass!";
    }
}
//---------------------------------------------------------------------------


void __fastcall TTransferForm::BSetPathClick(TObject *Sender)
{
	if (FileOpen2->Execute()) {
		if (FileExists(FileOpen2->Dialog->FileName)) {
			EPath->Text = FileOpen2->Dialog->FileName;
	  	}
	}
}
//---------------------------------------------------------------------------

void __fastcall TTransferForm::Button2Click(TObject *Sender)
{
	if(BrowseForFolder2->Execute() == true){
		EDownloadPath->Text = BrowseForFolder2->Folder;
	}
}




