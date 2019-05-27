#pragma once

namespace Fensteranwendung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonTextAendern;

	private: System::Windows::Forms::Button^  buttonBeenden;
	private: System::Windows::Forms::GroupBox^  groupBox1;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonTextAendern = (gcnew System::Windows::Forms::Button());
			this->buttonBeenden = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Das ist ein Label";
			this->label1->Click += gcnew System::EventHandler(this, &Hauptfenster::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Das ist noch ein Label";
			this->label2->Click += gcnew System::EventHandler(this, &Hauptfenster::label2_Click);
			// 
			// buttonTextAendern
			// 
			this->buttonTextAendern->Location = System::Drawing::Point(91, 230);
			this->buttonTextAendern->Name = L"buttonTextAendern";
			this->buttonTextAendern->Size = System::Drawing::Size(83, 43);
			this->buttonTextAendern->TabIndex = 2;
			this->buttonTextAendern->Text = L"Toller Button";
			this->buttonTextAendern->UseVisualStyleBackColor = true;
			this->buttonTextAendern->Click += gcnew System::EventHandler(this, &Hauptfenster::button1_Click_1);
			// 
			// buttonBeenden
			// 
			this->buttonBeenden->Location = System::Drawing::Point(345, 230);
			this->buttonBeenden->Name = L"buttonBeenden";
			this->buttonBeenden->Size = System::Drawing::Size(62, 43);
			this->buttonBeenden->TabIndex = 3;
			this->buttonBeenden->Text = L"Quit";
			this->buttonBeenden->UseVisualStyleBackColor = true;
			this->buttonBeenden->Click += gcnew System::EventHandler(this, &Hauptfenster::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(91, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(316, 154);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"GruppenBox";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Hauptfenster::groupBox1_Enter);
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(436, 331);
			this->Controls->Add(this->buttonTextAendern);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonBeenden);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Window";
			this->Load += gcnew System::EventHandler(this, &Hauptfenster::Hauptfenster_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Hauptfenster_Load(System::Object^  sender, System::EventArgs^  e) {

		BackColor = Color::LawnGreen;
		//MessageBox::Show("Hallo du da");

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	buttonTextAendern->Text = "Super Button";
	label1->Text = "Super Label";
	label2->Text = "Super Label";
	Text = "Test Fenster";
	groupBox1->Hide();



}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	Close();

}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
