//---------------------------------------------------------------------------

#ifndef TransferWindowH
#define TransferWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdTCPServer.hpp>
#include <IdSASL.hpp>
#include <IdSASL_CRAM_SHA1.hpp>
#include <IdSASL_CRAMBase.hpp>
#include <IdSASLUserPass.hpp>
#include <IdContext.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <IdCmdTCPServer.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdFTP.hpp>
#include <IdFTPServer.hpp>
//---------------------------------------------------------------------------
class TTransferForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *EPath;
	TMainMenu *MainMenu1;
	TMenuItem *Books1;
	TMenuItem *Showbooks1;
	TMenuItem *Insertbook1;
	TMenuItem *Transfer1;
	TIdTCPClient *TCPTransferClient;
	TIdTCPServer *TCPTransferServer;
	TLabel *Label1;
	TEdit *EHost;
	TEdit *EReceiver;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *EPassword;
	TActionList *ActionList1;
	TButton *BSetPath;
	TBrowseForFolder *BrowseForFolder1;
	TEdit *EDownloadPath;
	TButton *Button2;
	TLabel *Label5;
	TBrowseForFolder *BrowseForFolder2;
	TEdit *EHash;
	TLabel *Label6;
	TLabel *connectionMessage;
	TFileOpen *FileOpen2;
	TLabel *Label7;
	TEdit *ENewFileName;
	void __fastcall Showbooks1Click(TObject *Sender);
	void __fastcall Insertbook1Click(TObject *Sender);
	void __fastcall Transfer1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall TCPTransferServerExecute(TIdContext *AContext);
	void __fastcall BSetPathClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTransferForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTransferForm *TransferForm;
//---------------------------------------------------------------------------
#endif
