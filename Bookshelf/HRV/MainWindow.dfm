object MainWindowForm: TMainWindowForm
  Left = 0
  Top = 0
  Caption = 'Glavni izbornik'
  ClientHeight = 405
  ClientWidth = 764
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu2
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 504
    Top = 128
    Width = 37
    Height = 13
    Caption = 'Autor:'
  end
  object Label2: TLabel
    Left = 503
    Top = 179
    Width = 56
    Height = 13
    Caption = 'Ime knjige:'
  end
  object Label3: TLabel
    Left = 503
    Top = 237
    Width = 29
    Height = 13
    Caption = 'Broj stranica'
  end
  object Label4: TLabel
    Left = 514
    Top = 256
    Width = 40
    Height = 13
    Caption = 'Minimum'
  end
  object Label5: TLabel
    Left = 514
    Top = 283
    Width = 44
    Height = 13
    Caption = 'Maximum'
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 489
    Height = 360
    DataSource = DBooks
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        ReadOnly = False
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'authorName'
        Title.Caption = 'Autor'
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'bookName'
        Title.Caption = 'Book name'
        Width = 200
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'opis'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'status'
        Title.Caption = 'Status'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pages'
        Title.Caption = 'Broj stranica'
        Width = 50
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 512
    Top = 343
    Width = 114
    Height = 25
    Caption = 'Sortiraj'
    TabOrder = 1
    OnClick = Button1Click
  end
  object DBNavigator1: TDBNavigator
    Left = 503
    Top = 8
    Width = 240
    Height = 25
    DataSource = DBooks
    TabOrder = 2
  end
  object RadioGroup1: TRadioGroup
    Left = 503
    Top = 39
    Width = 97
    Height = 82
    Caption = 'Status'
    Items.Strings = (
      'unread'
      'read'
      'reading')
    TabOrder = 3
  end
  object EAuthorSort: TEdit
    Left = 503
    Top = 144
    Width = 231
    Height = 21
    TabOrder = 4
  end
  object EBookNameSort: TEdit
    Left = 503
    Top = 198
    Width = 231
    Height = 21
    TabOrder = 5
  end
  object EPagesMinSort: TEdit
    Left = 576
    Top = 253
    Width = 81
    Height = 21
    NumbersOnly = True
    TabOrder = 6
  end
  object EPagesMaxSort: TEdit
    Left = 576
    Top = 280
    Width = 81
    Height = 21
    NumbersOnly = True
    TabOrder = 7
  end
  object ClearSort: TButton
    Left = 632
    Top = 343
    Width = 102
    Height = 25
    Caption = 'Poni'#353'ti sortiranje'
    TabOrder = 8
    OnClick = ClearSortClick
  end
  object Button2: TButton
    Left = 659
    Top = 48
    Width = 75
    Height = 25
    Caption = 'Hrvatski'
    TabOrder = 9
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 659
    Top = 79
    Width = 75
    Height = 25
    Caption = 'Engleski'
    TabOrder = 10
    OnClick = Button3Click
  end
  object ADOConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Antonio\Do' +
      'cuments\Embarcadero\Studio\Projects\Bookshelf\Bookshelf.mdb;Pers' +
      'ist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 144
    Top = 224
  end
  object TBooksMain: TADOTable
    Active = True
    Connection = ADOConnection
    CursorType = ctStatic
    Filtered = True
    TableDirect = True
    TableName = 'Books'
    Left = 280
    Top = 224
  end
  object DBooks: TDataSource
    DataSet = TBooksMain
    Left = 216
    Top = 224
  end
  object MainMenu2: TMainMenu
    Left = 352
    Top = 232
    object Books1: TMenuItem
      Caption = 'Knjige'
      object Showbooks1: TMenuItem
        Caption = 'Prika'#382'i knjige'
        OnClick = Showbooks1Click
      end
      object Insertbook1: TMenuItem
        Caption = 'Dodaj novu knjigu'
        OnClick = Insertbook1Click
      end
    end
    object Transfer1: TMenuItem
      Caption = 'Prijenos'
      OnClick = Transfer1Click
    end
  end
end
