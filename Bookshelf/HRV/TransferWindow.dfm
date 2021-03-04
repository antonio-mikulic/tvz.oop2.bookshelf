object TransferForm: TTransferForm
  Left = 0
  Top = 0
  Caption = 'Prenesi knjigu'
  ClientHeight = 304
  ClientWidth = 670
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 27
    Width = 41
    Height = 13
    Caption = 'Datoteka'
  end
  object Label2: TLabel
    Left = 8
    Top = 224
    Width = 22
    Height = 13
    Caption = 'Host'
  end
  object Label3: TLabel
    Left = 271
    Top = 224
    Width = 42
    Height = 13
    Caption = 'Primatelj'
  end
  object Label4: TLabel
    Left = 8
    Top = 142
    Width = 46
    Height = 13
    Caption = #352'ifra'
  end
  object Label5: TLabel
    Left = 8
    Top = 51
    Width = 72
    Height = 13
    Caption = 'Mjesto spremanja'
  end
  object Label6: TLabel
    Left = 8
    Top = 166
    Width = 24
    Height = 13
    Caption = 'Hash'
  end
  object connectionMessage: TLabel
    Left = 408
    Top = 264
    Width = 249
    Height = 32
    AutoSize = False
  end
  object Label7: TLabel
    Left = 8
    Top = 100
    Width = 67
    Height = 13
    Caption = 'Ime nove datoteke'
  end
  object Button1: TButton
    Left = 503
    Top = 219
    Width = 106
    Height = 25
    Caption = 'Po'#353'alji'
    TabOrder = 0
    OnClick = Button1Click
  end
  object EPath: TEdit
    Left = 55
    Top = 24
    Width = 434
    Height = 21
    TabOrder = 1
  end
  object EHost: TEdit
    Left = 57
    Top = 221
    Width = 160
    Height = 21
    TabOrder = 2
    Text = '127.0.0.1'
  end
  object EReceiver: TEdit
    Left = 319
    Top = 221
    Width = 170
    Height = 21
    TabOrder = 3
  end
  object EPassword: TEdit
    Left = 60
    Top = 139
    Width = 429
    Height = 21
    TabOrder = 4
  end
  object BSetPath: TButton
    Left = 503
    Top = 22
    Width = 106
    Height = 25
    Hint = 'Open|Opens an existing file'
    Caption = 'Prona'#273'i datoteku'
    ImageIndex = 7
    TabOrder = 5
    OnClick = BSetPathClick
  end
  object EDownloadPath: TEdit
    Left = 8
    Top = 70
    Width = 481
    Height = 21
    TabOrder = 6
  end
  object Button2: TButton
    Left = 503
    Top = 68
    Width = 106
    Height = 25
    Action = BrowseForFolder2
    Caption = 'Postavi mjesto preuzimanja'
    TabOrder = 7
    OnClick = Button2Click
  end
  object EHash: TEdit
    Left = 60
    Top = 166
    Width = 429
    Height = 21
    TabOrder = 8
  end
  object ENewFileName: TEdit
    Left = 81
    Top = 97
    Width = 408
    Height = 21
    TabOrder = 9
  end
  object MainMenu1: TMainMenu
    Left = 200
    Top = 65512
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
  object TCPTransferClient: TIdTCPClient
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 25585
    ReadTimeout = -1
    Left = 208
    Top = 237
  end
  object TCPTransferServer: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 25585
      end>
    DefaultPort = 25585
    OnExecute = TCPTransferServerExecute
    Left = 336
    Top = 240
  end
  object ActionList1: TActionList
    Left = 368
    object BrowseForFolder1: TBrowseForFolder
      Category = 'File'
      Caption = 'BrowseForFolder1'
      DialogCaption = 'BrowseForFolder1'
      BrowseOptions = []
      BrowseOptionsEx = []
    end
    object BrowseForFolder2: TBrowseForFolder
      Category = 'File'
      Caption = 'BrowseForFolder2'
      DialogCaption = 'BrowseForFolder2'
      BrowseOptions = []
      BrowseOptionsEx = []
    end
    object FileOpen2: TFileOpen
      Category = 'File'
      Caption = 'Otvori datoteku'
      Hint = 'Open|Opens an existing file'
      ImageIndex = 7
      ShortCut = 16463
    end
  end
end
