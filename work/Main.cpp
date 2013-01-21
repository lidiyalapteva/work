#include "stdafx.h"
#include "Main.h"
#include "config.h"
namespace work {
	System::Void Main::adds_Click(System::Object^  sender, System::EventArgs^  e) {
				config^ myDailog = gcnew config();
				myDailog->Show();
			 }
	System::Void Main::downloadBottom_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
}