#include "stdafx.h"
#include "Main.h"
#include "config.h"
using namespace System;
using namespace System::Xml;
using namespace System::Windows::Forms;

using namespace work ;
Void Main::adds_Click(System::Object^  sender, System::EventArgs^  e) {
	config^ myDailog = gcnew config();
	myDailog->Show();
}
Void Main::downloadBottom_Click(System::Object^  sender, System::EventArgs^  e) {

}

Void Main::loadConfig()
{
	//читаем файл настроек
	XmlDocument^ xmlDoc = gcnew XmlDocument();
	xmlDoc->Load("server.xml");
	XmlNodeList^ items = xmlDoc->GetElementsByTagName("server");
	XmlElement^ root = xmlDoc->DocumentElement;
	long numitems = items->Count;
	for (int i=0;i<numitems;i++)
	{
		XmlNode^ item = items->Item(i);
		String^ namegame  = item->ChildNodes->Item(0)->InnerText;
		String^ url  = item->ChildNodes->Item(1)->InnerText;
		String^ version  = item->ChildNodes->Item(2)->InnerText;
		Label^  labeladd;
		labeladd = (gcnew Label());
		// нвастраиваем вывод
		labeladd->AutoSize = true;
		labeladd->Location = System::Drawing::Point(62, 150+(i*30));
		labeladd->Name = L"label1"+i;
		labeladd->Size = System::Drawing::Size(85, 13);
		labeladd->TabIndex = 6;
		labeladd->Text = namegame;
		// добавляем элемент на форму
		this->Controls->Add(labeladd);
		//labeladd->Update;
		//labeladd->Dispose();
		labeladd = (gcnew Label());
		//this->labeladd = (gcnew Label());
		// нвастраиваем вывод
		labeladd->AutoSize = true;
		labeladd->Location = System::Drawing::Point(152, 150+(i*30));
		labeladd->Name = L"label3"+i;
		labeladd->Size = System::Drawing::Size(85, 13);
		labeladd->TabIndex = 6;
		labeladd->Text = url;
		// добавляем элемент на форму
		//this->Controls->Add(this->labeladd);
		//labeladd->Update;
		this->Controls->Add(labeladd);
		//labeladd->Update;
		//labeladd->Dispose();
		labeladd = (gcnew Label());

		// нвастраиваем вывод
		labeladd->AutoSize = true;
		labeladd->Location = System::Drawing::Point(352, 150+(i*30));
		labeladd->Name = L"label3"+i;
		labeladd->Size = System::Drawing::Size(85, 13);
		labeladd->TabIndex = 6;
		labeladd->Text = version;
		// добавляем элемент на форму
		this->Controls->Add(labeladd);

	}
	this->Controls->Add(labeladd);

}
	
