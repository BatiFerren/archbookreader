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
	// ���� � ��� ����� ��� ���������� � ��������, ������ ������� *.exe
	AnsiString file = ExtractFilePath(Application->ExeName) + "\\settings.dat";
	TStringList *list1 = new TStringList;  // 1� TStringLis
	list1->Add(p); // ���������� ���������� p
	list1->SaveToFile(file);
/*	if (FileExists(file) == false) // ��������� ������� �����
		{
		list1->SaveToFile(file); // ���� �� ������, ������ ��������� ��� ����
		}
	else
		{ // ���� ����
		TStringList *list2 = new TStringList; // 2� TStringLis ��� ������������� �����
		list2->LoadFromFile(file); // ��������� ������������ ����
		list2->Add("***************************************"); // ����� ��� ��������� ���������
		list2->Text = list2->Text + list1->Text; // � ������������ ����� ��������� ����� ������
		list2->SaveToFile(file); // ���������
		delete list2; // ������ �� �����
		}*/
	delete list1; // ������ �� �����

	Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	// ��� ������������ ������� ������� �����, � ����������
	// ������ � ���� �������������� �� ��������
	// Key � ��� ������� ������� (�������)
	// ��������, �������� �� ������ ����������
	if ((Key >= '0') && (Key <= '9')) // �����
		return;
	if (Key == VK_BACK) // ������� <Backspace>
		return;
	if (Key == VK_RETURN) // ������� <Enter>
	{
		Edit3->SetFocus(); // ����������� ������ � ����
		return;
	}
	// ��������� ������� ���������
	Key = 0; // �� ���������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	// ��� ������������ ������� ������� �����, � ����������
	// ������ � ���� �������������� �� ��������
	// Key � ��� ������� ������� (�������)
	// ��������, �������� �� ������ ����������
	if ((Key >= '0') && (Key <= '9')) // �����
		return;
	if (Key == VK_BACK) // ������� <Backspace>
		return;
	if (Key == VK_RETURN) // ������� <Enter>
	{
		Edit4->SetFocus(); // ����������� ������ � ����
		return;
	}
	// ��������� ������� ���������
	Key = 0; // �� ���������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
	// ��� ������������ ������� ������� �����, � ����������
	// ������ � ���� �������������� �� ��������
	// Key � ��� ������� ������� (�������)
	// ��������, �������� �� ������ ����������
	if ((Key >= '0') && (Key <= '9')) // �����
		return;
	if (Key == VK_BACK) // ������� <Backspace>
		return;
	if (Key == VK_RETURN) // ������� <Enter>
	{
		Edit5->SetFocus(); // ����������� ������ � ����
		return;
	}
	// ��������� ������� ���������
	Key = 0; // �� ���������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit5KeyPress(TObject *Sender, System::WideChar &Key)
{
	// ��� ������������ ������� ������� �����, � ����������
	// ������ � ���� �������������� �� ��������
	// Key � ��� ������� ������� (�������)
	// ��������, �������� �� ������ ����������
	if ((Key >= '0') && (Key <= '9')) // �����
		return;
	if (Key == VK_BACK) // ������� <Backspace>
		return;
	if (Key == VK_RETURN) // ������� <Enter>
	{
		Edit2->SetFocus(); // ����������� ������ � ����
		return;
	}
	// ��������� ������� ���������
	Key = 0; // �� ���������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == VK_BACK) // ������� <Backspace>
		return;
	if (Key == VK_RETURN) // ������� <Enter>
	{
		Button1->SetFocus(); // ����������� ������ � ����
		return;
	}
}
//---------------------------------------------------------------------------

