#include "StdAfx.h"
#include "config.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace work;
using namespace System::Xml;
//namespace work {
	System::Void config::path_Click(Object^  sender, EventArgs^  e) {
		FolderBrowserDialog^ fPath = gcnew FolderBrowserDialog;
		//System::Windows::Forms::DialogResult result = fPath->ShowDialog();
		if ( fPath->ShowDialog() == ::DialogResult::OK )
		{
			pathSelect = fPath->SelectedPath;
			MessageBox::Show(String::Concat( "OK ",pathSelect));
		}
		else if ( fPath->ShowDialog() == ::DialogResult::Cancel )
		{
			MessageBox::Show(String::Concat( "Cancel"));
			return;
		}
	}
	Void config::save_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show(String::Concat( "OK ",pathSelect));
		XmlDocument^ xmlDoc = gcnew XmlDocument();


	}
	Void config::loadCombobox(){
		XmlDocument^ xmlDoc = gcnew XmlDocument();
		xmlDoc->Load("server.xml");

		this->comboBox1->Items->Add("Игра 3");
	}
//}