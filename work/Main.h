#pragma once

namespace work {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
			: path(0)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  downloadAll;
	private: System::Windows::Forms::Button^  add;
	protected: 


	protected: 


	private: System::Windows::Forms::Button^  downloadBottom;
	private: System::Windows::Forms::DataGridView^  ptofile;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gamepath;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  version;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Del;





	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Void adds_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void downloadBottom_Click(System::Object^  sender, System::EventArgs^  e);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->downloadAll = (gcnew System::Windows::Forms::ProgressBar());
			this->add = (gcnew System::Windows::Forms::Button());
			this->downloadBottom = (gcnew System::Windows::Forms::Button());
			this->ptofile = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gamepath = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->version = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Del = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ptofile))->BeginInit();
			this->SuspendLayout();
			// 
			// downloadAll
			// 
			this->downloadAll->Location = System::Drawing::Point(12, 47);
			this->downloadAll->Name = L"downloadAll";
			this->downloadAll->Size = System::Drawing::Size(506, 32);
			this->downloadAll->TabIndex = 0;
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(12, 96);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(75, 23);
			this->add->TabIndex = 1;
			this->add->Text = L"Добавить";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &Main::adds_Click);
			// 
			// downloadBottom
			// 
			this->downloadBottom->Location = System::Drawing::Point(551, 47);
			this->downloadBottom->Name = L"downloadBottom";
			this->downloadBottom->Size = System::Drawing::Size(75, 32);
			this->downloadBottom->TabIndex = 2;
			this->downloadBottom->Text = L"Обновить";
			this->downloadBottom->UseVisualStyleBackColor = true;
			this->downloadBottom->Click += gcnew System::EventHandler(this, &Main::downloadBottom_Click);
			// 
			// ptofile
			// 
			this->ptofile->AllowUserToAddRows = false;
			this->ptofile->AllowUserToDeleteRows = false;
			this->ptofile->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ptofile->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ptofile->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->name, this->gamepath, 
				this->version, this->Del});
			this->ptofile->Location = System::Drawing::Point(12, 180);
			this->ptofile->Name = L"ptofile";
			this->ptofile->ReadOnly = true;
			this->ptofile->Size = System::Drawing::Size(603, 150);
			this->ptofile->TabIndex = 3;
			// 
			// name
			// 
			this->name->HeaderText = L"Название игры";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 150;
			// 
			// gamepath
			// 
			this->gamepath->HeaderText = L"Путь";
			this->gamepath->Name = L"gamepath";
			this->gamepath->ReadOnly = true;
			this->gamepath->Width = 250;
			// 
			// version
			// 
			this->version->HeaderText = L"Версия";
			this->version->Name = L"version";
			this->version->ReadOnly = true;
			this->version->Width = 50;
			// 
			// Del
			// 
			this->Del->HeaderText = L"Удалить";
			this->Del->Name = L"Del";
			this->Del->ReadOnly = true;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 438);
			this->Controls->Add(this->ptofile);
			this->Controls->Add(this->downloadBottom);
			this->Controls->Add(this->add);
			this->Controls->Add(this->downloadAll);
			this->Name = L"Main";
			this->Text = L"Главное окно";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ptofile))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	public:
		// Путь к папке игры
		char path;
};
}

