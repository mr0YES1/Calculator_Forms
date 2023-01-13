#include "MyForm.h"

using namespace System; // Подключение пространство имён
using namespace System::Windows::Forms;

[STAThreadAttribute] // main будем запускать в отдеольном потоке данных
int main(array<String^>^ args) // ^ - означает автоматическую очистку памяти на подобии delete
{
	Application::SetCompatibleTextRenderingDefault(false); // Необходимо для коректной обработки текста
	Application::EnableVisualStyles(); // Подключаем различные визуальные стили
	WinForms2::MyForm form; // Обращаемся к классу MyForm. Создаём объект form
	Application::Run(% form); //Передаю по ссылке form
}