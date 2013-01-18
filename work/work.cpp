// work.cpp: главный файл проекта.

#include "stdafx.h"
#include "Main.h"
#include "config.h"

using namespace work;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Main());
	Application::Run(gcnew config());
	return 0;
}
