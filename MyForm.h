#pragma once
#include <string>

namespace CurrencyConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ AmountBox;
	protected:
	private: System::Windows::Forms::TextBox^ ConvertedAmountBox;
	private: System::Windows::Forms::Label^ Amount;

	private: System::Windows::Forms::Label^ ConvertedAmount;

	private: System::Windows::Forms::Button^ convertBtn;


	private: System::Windows::Forms::ComboBox^ ToBox;
	private: System::Windows::Forms::Label^ ConvertTo;

	private: System::Windows::Forms::Button^ Clear;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AmountBox = (gcnew System::Windows::Forms::TextBox());
			this->ConvertedAmountBox = (gcnew System::Windows::Forms::TextBox());
			this->Amount = (gcnew System::Windows::Forms::Label());
			this->ConvertedAmount = (gcnew System::Windows::Forms::Label());
			this->convertBtn = (gcnew System::Windows::Forms::Button());
			this->ToBox = (gcnew System::Windows::Forms::ComboBox());
			this->ConvertTo = (gcnew System::Windows::Forms::Label());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AmountBox
			// 
			this->AmountBox->Location = System::Drawing::Point(53, 149);
			this->AmountBox->Name = L"AmountBox";
			this->AmountBox->Size = System::Drawing::Size(475, 22);
			this->AmountBox->TabIndex = 0;
			this->AmountBox->TextChanged += gcnew System::EventHandler(this, &MyForm::AmountBox_TextChanged);
			// 
			// ConvertedAmountBox
			// 
			this->ConvertedAmountBox->Location = System::Drawing::Point(56, 289);
			this->ConvertedAmountBox->Name = L"ConvertedAmountBox";
			this->ConvertedAmountBox->ReadOnly = true;
			this->ConvertedAmountBox->Size = System::Drawing::Size(475, 22);
			this->ConvertedAmountBox->TabIndex = 1;
			this->ConvertedAmountBox->TextChanged += gcnew System::EventHandler(this, &MyForm::ConvertedAmountBox_TextChanged);
			// 
			// Amount
			// 
			this->Amount->AutoSize = true;
			this->Amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Amount->ForeColor = System::Drawing::Color::LawnGreen;
			this->Amount->Location = System::Drawing::Point(53, 116);
			this->Amount->Name = L"Amount";
			this->Amount->Size = System::Drawing::Size(66, 20);
			this->Amount->TabIndex = 2;
			this->Amount->Text = L"Amount";
			this->Amount->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ConvertedAmount
			// 
			this->ConvertedAmount->AutoSize = true;
			this->ConvertedAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConvertedAmount->ForeColor = System::Drawing::Color::LawnGreen;
			this->ConvertedAmount->Location = System::Drawing::Point(53, 256);
			this->ConvertedAmount->Name = L"ConvertedAmount";
			this->ConvertedAmount->Size = System::Drawing::Size(147, 20);
			this->ConvertedAmount->TabIndex = 3;
			this->ConvertedAmount->Text = L"Converted Amount";
			this->ConvertedAmount->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// convertBtn
			// 
			this->convertBtn->Location = System::Drawing::Point(232, 208);
			this->convertBtn->Name = L"convertBtn";
			this->convertBtn->Size = System::Drawing::Size(107, 31);
			this->convertBtn->TabIndex = 4;
			this->convertBtn->Text = L"Convert";
			this->convertBtn->UseVisualStyleBackColor = true;
			this->convertBtn->Click += gcnew System::EventHandler(this, &MyForm::convertBtn_Click);
			// 
			// ToBox
			// 
			this->ToBox->DropDownHeight = 130;
			this->ToBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ToBox->DropDownWidth = 125;
			this->ToBox->FormattingEnabled = true;
			this->ToBox->IntegralHeight = false;
			this->ToBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Canadian Dollar", L"Euro", L"Japanese Yen", L"Great British Pound",
					L"Mexican Peso", L"Swiss Franc"
			});
			this->ToBox->Location = System::Drawing::Point(190, 64);
			this->ToBox->Name = L"ToBox";
			this->ToBox->Size = System::Drawing::Size(182, 24);
			this->ToBox->TabIndex = 6;
			this->ToBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ToBox_SelectedIndexChanged);
			// 
			// ConvertTo
			// 
			this->ConvertTo->AutoSize = true;
			this->ConvertTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConvertTo->ForeColor = System::Drawing::Color::LawnGreen;
			this->ConvertTo->Location = System::Drawing::Point(187, 40);
			this->ConvertTo->Name = L"ConvertTo";
			this->ConvertTo->Size = System::Drawing::Size(91, 20);
			this->ConvertTo->TabIndex = 8;
			this->ConvertTo->Text = L"Convert To";
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(231, 347);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(107, 31);
			this->Clear->TabIndex = 9;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(579, 399);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->ConvertTo);
			this->Controls->Add(this->ToBox);
			this->Controls->Add(this->convertBtn);
			this->Controls->Add(this->ConvertedAmount);
			this->Controls->Add(this->Amount);
			this->Controls->Add(this->ConvertedAmountBox);
			this->Controls->Add(this->AmountBox);
			this->Name = L"MyForm";
			this->Text = L"Currency Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double Canadian_Dollar = 1.34;
		double Swiss_Franc = 0.92;
		double Mexican_Peso = 22.39;
		double British_Pound = 0.78;
		double Japanese_Yen = 105.81;
		double Euro = 0.86;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AmountBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		//Validates amount entered 
		//if (AmountBox->Text->Contains())
			//AmountBox->Clear();
	}
	private: System::Void ConvertedAmountBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ToBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void convertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double amountEntered = Convert::ToDouble(AmountBox->Text);
		double conversion;

		//Make conversion based on currency selected
		if (ToBox->SelectedItem == "Canadian Dollar")
		{
			conversion = Canadian_Dollar * amountEntered;
		}
		else if (ToBox->SelectedItem == "Euro")
		{
			conversion = Euro * amountEntered;
		}
		else if(ToBox->SelectedItem == "Japanese Yen")
		{
			conversion = Japanese_Yen * amountEntered;
		}
		else if (ToBox->SelectedItem == "Great British Pound")
		{
			conversion = British_Pound * amountEntered;
		}
		else if (ToBox->SelectedItem == "Mexican Peso")
		{
			conversion = Mexican_Peso * amountEntered;
		}
		else if(ToBox->SelectedItem == "Swiss Franc")
		{
			conversion = Swiss_Franc * amountEntered;
		}

		ConvertedAmountBox->Text = conversion.ToString();
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {

		//Clear contents
		AmountBox->Clear();
		ConvertedAmountBox->Clear();
		ToBox->SelectedIndex = -1;
	}
};
}
