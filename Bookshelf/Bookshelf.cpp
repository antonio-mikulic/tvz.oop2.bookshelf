//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("InsertWindow.cpp", InsertBookForm);
USEFORM("MainWindow.cpp", MainWindowForm);
USEFORM("TransferWindow.cpp", TransferForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Aqua Graphite");
		Application->CreateForm(__classid(TMainWindowForm), &MainWindowForm);
		Application->CreateForm(__classid(TInsertBookForm), &InsertBookForm);
		Application->CreateForm(__classid(TTransferForm), &TransferForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
