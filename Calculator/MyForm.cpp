#include "MyForm.h"

using namespace System; // ����������� ������������ ���
using namespace System::Windows::Forms;

[STAThreadAttribute] // main ����� ��������� � ���������� ������ ������
int main(array<String^>^ args) // ^ - �������� �������������� ������� ������ �� ������� delete
{
	Application::SetCompatibleTextRenderingDefault(false); // ���������� ��� ��������� ��������� ������
	Application::EnableVisualStyles(); // ���������� ��������� ���������� �����
	WinForms2::MyForm form; // ���������� � ������ MyForm. ������ ������ form
	Application::Run(% form); //������� �� ������ form
}