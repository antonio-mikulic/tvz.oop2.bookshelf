object InsertBookForm: TInsertBookForm
  Left = 0
  Top = 0
  Caption = 'Insert book'
  ClientHeight = 366
  ClientWidth = 326
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 20
    Top = 13
    Width = 33
    Height = 13
    Caption = 'Author'
  end
  object Label3: TLabel
    Left = 20
    Top = 59
    Width = 52
    Height = 13
    Caption = 'Book name'
  end
  object Label4: TLabel
    Left = 20
    Top = 109
    Width = 53
    Height = 13
    Caption = 'Description'
  end
  object Label5: TLabel
    Left = 20
    Top = 223
    Width = 31
    Height = 13
    Caption = 'Status'
  end
  object Label6: TLabel
    Left = 20
    Top = 269
    Width = 29
    Height = 13
    Caption = 'Pages'
  end
  object ButtonAddBook: TButton
    Left = 20
    Top = 328
    Width = 245
    Height = 25
    Caption = 'Add book'
    TabOrder = 0
    OnClick = ButtonAddBookClick
  end
  object EAuthor: TEdit
    Left = 20
    Top = 32
    Width = 245
    Height = 21
    TabOrder = 1
  end
  object EBookName: TEdit
    Left = 20
    Top = 78
    Width = 245
    Height = 21
    TabOrder = 2
  end
  object EPages: TEdit
    Left = 20
    Top = 288
    Width = 245
    Height = 21
    NumbersOnly = True
    TabOrder = 3
  end
  object chooseStatus: TDBLookupComboBox
    Left = 20
    Top = 242
    Width = 145
    Height = 21
    DataField = 'status'
    DataSource = DBooks
    KeyField = 'state'
    ListField = 'state'
    ListSource = DStatus
    TabOrder = 4
  end
  object EDescription: TEdit
    Left = 20
    Top = 128
    Width = 245
    Height = 85
    AutoSize = False
    TabOrder = 5
  end
  object TStatus: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Status'
    Left = 280
    Top = 160
  end
  object DStatus: TDataSource
    DataSet = TStatus
    Left = 216
    Top = 96
  end
  object DBooks: TDataSource
    DataSet = TBooks
    Left = 216
    Top = 16
  end
  object TBooks: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableDirect = True
    TableName = 'Books'
    Left = 280
    Top = 104
    object TBooksID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TBooksauthorName: TWideStringField
      FieldName = 'authorName'
      Size = 255
    end
    object TBooksbookName: TWideStringField
      FieldName = 'bookName'
      Size = 255
    end
    object TBooksdescription: TWideMemoField
      FieldName = 'description'
      BlobType = ftWideMemo
    end
    object TBooksstatus: TWideStringField
      FieldName = 'status'
      Size = 255
    end
    object TBookspages: TIntegerField
      FieldName = 'pages'
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Antonio\Do' +
      'cuments\Embarcadero\Studio\Projects\Bookshelf\Bookshelf.mdb;Pers' +
      'ist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 280
    Top = 16
  end
  object MainMenu1: TMainMenu
    Left = 216
    Top = 160
    object Books: TMenuItem
      Caption = 'Books'
      object Showbooks1: TMenuItem
        Caption = 'Show books'
        OnClick = Showbooks1Click
      end
      object Insertbook1: TMenuItem
        Caption = 'Insert book'
        OnClick = Insertbook1Click
      end
    end
    object Transfer: TMenuItem
      Caption = 'Transfer'
      OnClick = TransferClick
    end
  end
end
