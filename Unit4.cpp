//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
String fond;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{

	if (RadioButton1->Checked) {
		fond = "Ф";
	}
	if (RadioButton2->Checked) {
		fond = "Р";
	}
	if (RadioButton3->Checked) {
		fond = "П";
	}

	fPath = fond + " " + Edit1->Text + " оп " + Edit2->Text + " д " + Edit3->Text;

	if ((Edit1->Text.Length() != 0) && (Edit2->Text.Length() != 0) && (Edit3->Text.Length() != 0)) {
		Form4->Close();
	}
	else
		MessageDlg("Введите номер дела (поля должны быть не пустыми)", mtWarning, TMsgDlgButtons() << mbOK,0);

}
//---------------------------------------------------------------------------


void __fastcall TForm4::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактирования не появится
	// Key — код нажатой клавиши (символа)
	// проверим, является ли символ допустимым
	if ((Key >= '0') && (Key <= '9')) // цифра
		return;
	if (Key == VK_BACK) // клавиша <Backspace>
		return;
	if (Key == VK_RETURN) // клавиша <Enter>
	{
		Edit2->SetFocus(); // переместить курсор в поле
		return;
	}
	// остальные символы запрещены
	Key = 0; // не отображать символ
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактирования не появится
	// Key — код нажатой клавиши (символа)
	// проверим, является ли символ допустимым
	if ((Key >= '0') && (Key <= '9')) // цифра
		return;
	if (Key == VK_BACK) // клавиша <Backspace>
		return;
	if (Key == VK_RETURN) // клавиша <Enter>
	{
		Edit3->SetFocus(); // переместить курсор в поле
		return;
	}
	// остальные символы запрещены
	Key = 0; // не отображать символ
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактирования не появится
	// Key — код нажатой клавиши (символа)
	// проверим, является ли символ допустимым
	if ((Key >= '0') && (Key <= '9')) // цифра
		return;
	if (Key == VK_BACK) // клавиша <Backspace>
		return;
	if (Key == VK_RETURN) // клавиша <Enter>
	{
		Button1->SetFocus(); // переместить курсор в поле
		return;
	}
	// остальные символы запрещены
	Key = 0; // не отображать символ
}
//---------------------------------------------------------------------------

