#pragma once

namespace work {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для config
	/// </summary>
	public ref class config : public System::Windows::Forms::Form
	{
	public:
		config(void)
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
		~config()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
		System::Windows::Forms::Button^  path;
		System::Windows::Forms::Button^  add;
		String^ pathSelect;
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	protected:
		System::Void save_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void path_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void loadCombobox();
		
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->path = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->add = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// path
			// 
			this->path->Location = System::Drawing::Point(180, 87);
			this->path->Name = L"path";
			this->path->Size = System::Drawing::Size(75, 23);
			this->path->TabIndex = 0;
			this->path->Text = L"Путь";
			this->path->UseVisualStyleBackColor = true;
			this->path->Click += gcnew System::EventHandler(this, &config::path_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"0;Test", L"1;test2"});
			this->comboBox1->Location = System::Drawing::Point(23, 89);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(23, 159);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(232, 27);
			this->add->TabIndex = 2;
			this->add->Text = L"Добавить";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &config::save_Click);
			// 
			// config
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->add);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->path);
			this->Name = L"config";
			this->Text = L"config";
			this->ResumeLayout(false);
			this->loadCombobox();

		}
#pragma endregion
	
	};
}
