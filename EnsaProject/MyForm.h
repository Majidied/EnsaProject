#pragma once

namespace EnsaProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
<<<<<<< HEAD





=======
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
>>>>>>> 94112e21b1a931bfffaf306cbe7f15bd5c4af5bb
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(241, 210);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(470, 113);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 18);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(224, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(450, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(604, 354);
=======
			this->ClientSize = System::Drawing::Size(680, 442);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
>>>>>>> 94112e21b1a931bfffaf306cbe7f15bd5c4af5bb
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void InitializeComponent() {
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(193, 85);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(19, 47);
	this->button2->TabIndex = 0;
	this->button2->Text = L"button2";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// MyForm
	// 
	this->ClientSize = System::Drawing::Size(282, 253);
	this->Controls->Add(this->button2);
	this->Name = L"MyForm";
	this->ResumeLayout(false);
}
private: System::Void InitializeComponent() {
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(43, 62);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(19, 47);
	this->button2->TabIndex = 0;
	this->button2->Text = L"button2";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// MyForm
	// 
	this->ClientSize = System::Drawing::Size(282, 253);
	this->Controls->Add(this->button2);
	this->Name = L"MyForm";
	this->ResumeLayout(false);
}
private: System::Void InitializeComponent() {
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(43, 62);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(19, 47);
	this->button2->TabIndex = 0;
	this->button2->Text = L"button2";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(160, 135);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(75, 23);
	this->button3->TabIndex = 1;
	this->button3->Text = L"button3";
	this->button3->UseVisualStyleBackColor = true;
	// 
	// MyForm
	// 
	this->ClientSize = System::Drawing::Size(282, 253);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button2);
	this->Name = L"MyForm";
	this->ResumeLayout(false);
}
private: System::Void InitializeComponent() {
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(43, 62);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(19, 47);
	this->button2->TabIndex = 0;
	this->button2->Text = L"button2";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(105, 43);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(75, 23);
	this->button3->TabIndex = 1;
	this->button3->Text = L"button3";
	this->button3->UseVisualStyleBackColor = true;
	// 
	// MyForm
	// 
	this->ClientSize = System::Drawing::Size(282, 253);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button2);
	this->Name = L"MyForm";
	this->ResumeLayout(false);
}
private: System::Void InitializeComponent() {
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(120, 111);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(75, 23);
	this->button4->TabIndex = 0;
	this->button4->Text = L"button4";
	this->button4->UseVisualStyleBackColor = true;
	// 
	// MyForm
	// 
	this->ClientSize = System::Drawing::Size(278, 244);
	this->Controls->Add(this->button4);
	this->Name = L"MyForm";
	this->ResumeLayout(false);
}
private: System::Void InitializeComponent() {
	this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
	this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
	this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
	this->SuspendLayout();
	// 
	// checkBox2
	// 
	this->checkBox2->AutoSize = true;
	this->checkBox2->Location = System::Drawing::Point(82, 99);
	this->checkBox2->Name = L"checkBox2";
	this->checkBox2->Size = System::Drawing::Size(95, 20);
	this->checkBox2->TabIndex = 0;
	this->checkBox2->Text = L"checkBox2";
	this->checkBox2->UseVisualStyleBackColor = true;
	// 
	// checkedListBox1
	// 
	this->checkedListBox1->FormattingEnabled = true;
	this->checkedListBox1->Location = System::Drawing::Point(82, 138);
	this->checkedListBox1->Name = L"checkedListBox1";
	this->checkedListBox1->Size = System::Drawing::Size(120, 89);
	this->checkedListBox1->TabIndex = 1;
	// 
	// domainUpDown1
	// 
	this->domainUpDown1->Location = System::Drawing::Point(82, 49);
	this->domainUpDown1->Name = L"domainUpDown1";
	this->domainUpDown1->Size = System::Drawing::Size(120, 22);
	this->domainUpDown1->TabIndex = 2;
	this->domainUpDown1->Text = L"domainUpDown1";
	// 
	// MyForm
	// 
	this->ClientSize = System::Drawing::Size(282, 253);
	this->Controls->Add(this->domainUpDown1);
	this->Controls->Add(this->checkedListBox1);
	this->Controls->Add(this->checkBox2);
	this->Name = L"MyForm";
	this->ResumeLayout(false);
	this->PerformLayout();
}
};
}
