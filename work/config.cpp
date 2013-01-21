#include "StdAfx.h"
#include "config.h"
#include "ticpp/ticpp.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace work;
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
		TiXmlDocument doc;  
	TiXmlElement* msg;
	TiXmlComment * comment;
	//string s;
 	TiXmlDeclaration* decl = new TiXmlDeclaration( "1.0", "", "" );  
	doc.LinkEndChild( decl ); 
 
	TiXmlElement * root = new TiXmlElement("test");  
	doc.LinkEndChild( root );  

	comment = new TiXmlComment();
	//s=" Settings for "+"ttt"+" ";
	//comment->SetValue('dd');  
	//root->LinkEndChild( comment );  

		//ticpp::Document phbook(phonebook_filename);
		//const char* phonebook_filename = "phonebook.xml";
		// actually load the information
		//phbook.LoadFile();

	}
	Void config::loadCombobox(){
		this->comboBox1->Items->Add("Игра 3");
	}
//}