object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1042#1099#1073#1088#1072#1090#1100' '#1076#1077#1083#1086
  ClientHeight = 237
  ClientWidth = 253
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 72
    Width = 67
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1092#1086#1085#1076#1072
  end
  object Label2: TLabel
    Left = 8
    Top = 112
    Width = 63
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1086#1087#1080#1089#1080
  end
  object Label3: TLabel
    Left = 8
    Top = 152
    Width = 59
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1076#1077#1083#1072
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 185
    Height = 49
    Caption = #1051#1080#1090#1077#1088#1072
    TabOrder = 0
    object RadioButton1: TRadioButton
      Left = 51
      Top = 16
      Width = 33
      Height = 17
      Caption = #1060
      Checked = True
      TabOrder = 0
      TabStop = True
    end
    object RadioButton2: TRadioButton
      Left = 104
      Top = 16
      Width = 33
      Height = 17
      Caption = #1056
      TabOrder = 1
    end
    object RadioButton3: TRadioButton
      Left = 149
      Top = 16
      Width = 33
      Height = 17
      Caption = #1055
      TabOrder = 2
    end
  end
  object Button1: TButton
    Left = 158
    Top = 195
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 112
    Top = 69
    Width = 121
    Height = 21
    TabOrder = 2
    OnKeyPress = Edit1KeyPress
  end
  object Edit2: TEdit
    Left = 112
    Top = 109
    Width = 121
    Height = 21
    TabOrder = 3
    OnKeyPress = Edit2KeyPress
  end
  object Edit3: TEdit
    Left = 112
    Top = 149
    Width = 121
    Height = 21
    TabOrder = 4
    OnKeyPress = Edit3KeyPress
  end
end
