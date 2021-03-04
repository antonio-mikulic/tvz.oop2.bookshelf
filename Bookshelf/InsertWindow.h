//---------------------------------------------------------------------------

#ifndef InsertWindowH
#define InsertWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TInsertBookForm : public TForm
{
__published:	// IDE-managed Components
	TADOTable *TStatus;
	TDataSource *DStatus;
	TDataSource *DBooks;
	TADOTable *TBooks;
	TADOConnection *ADOConnection1;
	TAutoIncField *TBooksID;
	TWideStringField *TBooksauthorName;
	TWideStringField *TBooksbookName;
	TWideMemoField *TBooksdescription;
	TWideStringField *TBooksstatus;
	TIntegerField *TBookspages;
	TMainMenu *MainMenu1;
	TMenuItem *Books;
	TMenuItem *Showbooks1;
	TMenuItem *Insertbook1;
	TMenuItem *Transfer;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *ButtonAddBook;
	TEdit *EAuthor;
	TEdit *EBookName;
	TDBLookupComboBox *chooseStatus;
	TEdit *EPages;
	TEdit *EDescription;
	void __fastcall Showbooks1Click(TObject *Sender);
	void __fastcall Insertbook1Click(TObject *Sender);
	void __fastcall ButtonAddBookClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall TransferClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TInsertBookForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInsertBookForm *InsertBookForm;
//---------------------------------------------------------------------------
#endif
