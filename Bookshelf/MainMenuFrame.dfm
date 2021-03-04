object MainMenuFrameForm: TMainMenuFrameForm
  Left = 0
  Top = 0
  Width = 66
  Height = 63
  TabOrder = 0
  object MainMenu1: TMainMenu
    Left = 16
    Top = 8
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
  end
end
