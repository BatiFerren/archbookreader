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
		fond = "�";
	}
	if (RadioButton2->Checked) {
		fond = "�";
	}
	if (RadioButton3->Checked) {
		fond = "�";
	}

	fPath = fond + " " + Edit1->Text + " �� " + Edit2->Text + " � " + Edit3->Text;

	if ((Edit1->Text.Length() != 0) && (Edit2->Text.Length() != 0) && (Edit3->Text.Length() != 0)) {
		Form4->Close();
	}
	else
		MessageDlg("������� ����� ���� (���� ������ ���� �� �������)", mtWarning, TMsgDlgButtons() << mbOK,0);

}
//---------------------------------------------------------------------------


void __fastcall TForm4::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
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

void __fastcall TForm4::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
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

void __fastcall TForm4::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
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
		Button1->SetFocus(); // ����������� ������ � ����
		return;
	}
	// ��������� ������� ���������
	Key = 0; // �� ���������� ������
}
//---------------------------------------------------------------------------

