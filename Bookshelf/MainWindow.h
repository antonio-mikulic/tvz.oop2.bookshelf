//---------------------------------------------------------------------------

#ifndef MainWindowH
#define MainWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.Menus.hpp>
#include "MainMenuFrame.h"
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TMainWindowForm : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection;
	TADOTable *TBooksMain;
	TDataSource *DBooks;
	TDBGrid *DBGrid1;
	TMainMenu *MainMenu2;
	TButton *Button1;
	TMenuItem *Books1;
	TMenuItem *Showbooks1;
	TMenuItem *Insertbook1;
	TMenuItem *Transfer1;
	TDBNavigator *DBNavigator1;
	TRadioGroup *RadioGroup1;
	TEdit *EAuthorSort;
	TEdit *EBookNameSort;
	TEdit *EPagesMinSort;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *EPagesMaxSort;
	TButton *ClearSort;
	TButton *Button2;
	TButton *Button3;
	void __fastcall Showbooks1Click(TObject *Sender);
	void __fastcall Insertbook1Click(TObject *Sender);
	void __fastcall Transfer1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ClearSortClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainWindowForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainWindowForm *MainWindowForm;
//---------------------------------------------------------------------------
#endif
