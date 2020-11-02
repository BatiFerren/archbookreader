//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Button1->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit1Change(TObject *Sender)
{
	if ( (Edit1->Text).Length() == 0)
		Button1->Enabled = false;
	else
		Button1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	AnsiString p;
	p = "\\\\" + Edit1->Text + "." + Edit3->Text + "." + Edit4->Text + "." + Edit5->Text + "\\" + Edit2->Text;
	// путь и им€ файла дл€ сохранени€ в каталоге, откуда запущен *.exe
	AnsiString file = ExtractFilePath(Application->ExeName) + "\\settings.dat";
	TStringList *list1 = new TStringList;  // 1й TStringLis
	list1->Add(p); // записываем переменную p
	list1->SaveToFile(file);
/*	if (FileExists(file) == false) // провер€ем наличие файла
		{
		list1->SaveToFile(file); // файл не найден, значит сохран€ем как есть
		}
	else
		{ // есть файл
		TStringList *list2 = new TStringList; // 2й TStringLis дл€ существующего файла
		list2->LoadFromFile(file); // загружаем существующий файл
		list2->Add("***************************************"); // вроде как разделить добавл€ем
		list2->Text = list2->Text + list1->Text; // к загруженному файлу добавл€ем новый записи
		list2->SaveToFile(file); // сохран€ем
		delete list2; // чистим за собой
		}*/
	delete list1; // чистим за собой

	Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактировани€ не по€витс€
	// Key Ч код нажатой клавиши (символа)
	// проверим, €вл€етс€ ли символ допустимым
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

void __fastcall TForm2::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактировани€ не по€витс€
	// Key Ч код нажатой клавиши (символа)
	// проверим, €вл€етс€ ли символ допустимым
	if ((Key >= '0') && (Key <= '9')) // цифра
		return;
	if (Key == VK_BACK) // клавиша <Backspace>
		return;
	if (Key == VK_RETURN) // клавиша <Enter>
	{
		Edit4->SetFocus(); // переместить курсор в поле
		return;
	}
	// остальные символы запрещены
	Key = 0; // не отображать символ
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактировани€ не по€витс€
	// Key Ч код нажатой клавиши (символа)
	// проверим, €вл€етс€ ли символ допустимым
	if ((Key >= '0') && (Key <= '9')) // цифра
		return;
	if (Key == VK_BACK) // клавиша <Backspace>
		return;
	if (Key == VK_RETURN) // клавиша <Enter>
	{
		Edit5->SetFocus(); // переместить курсор в поле
		return;
	}
	// остальные символы запрещены
	Key = 0; // не отображать символ
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit5KeyPress(TObject *Sender, System::WideChar &Key)
{
	// код запрещенного символа заменим нулем, в результате
	// символ в поле редактировани€ не по€витс€
	// Key Ч код нажатой клавиши (символа)
	// проверим, €вл€етс€ ли символ допустимым
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

void __fastcall TForm2::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == VK_BACK) // клавиша <Backspace>
		return;
	if (Key == VK_RETURN) // клавиша <Enter>
	{
		Button1->SetFocus(); // переместить курсор в поле
		return;
	}
}
//---------------------------------------------------------------------------

