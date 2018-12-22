#pragma once

namespace TCOCharGen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for baseMenu
	/// </summary>
	public ref class baseMenu : public System::Windows::Forms::Form
	{
	public:
		baseMenu(void)
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
		~baseMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  prevRace;
	private: System::Windows::Forms::Panel^  nextRace;
	private: System::Windows::Forms::Panel^  currentRace;
	private: System::Windows::Forms::RichTextBox^  raceDetails;
	private: System::Windows::Forms::Button^  nextButton;
	private: System::Windows::Forms::Button^  prevButton;









	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(baseMenu::typeid));
			this->prevRace = (gcnew System::Windows::Forms::Panel());
			this->nextRace = (gcnew System::Windows::Forms::Panel());
			this->currentRace = (gcnew System::Windows::Forms::Panel());
			this->raceDetails = (gcnew System::Windows::Forms::RichTextBox());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->prevButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// prevRace
			// 
			this->prevRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevRace.BackgroundImage")));
			this->prevRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prevRace->Location = System::Drawing::Point(700, 900);
			this->prevRace->Margin = System::Windows::Forms::Padding(0);
			this->prevRace->Name = L"prevRace";
			this->prevRace->Size = System::Drawing::Size(100, 100);
			this->prevRace->TabIndex = 0;
			this->prevRace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &baseMenu::prevRace_Paint);
			// 
			// nextRace
			// 
			this->nextRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextRace.BackgroundImage")));
			this->nextRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextRace->Location = System::Drawing::Point(1140, 900);
			this->nextRace->Margin = System::Windows::Forms::Padding(0);
			this->nextRace->Name = L"nextRace";
			this->nextRace->Size = System::Drawing::Size(100, 100);
			this->nextRace->TabIndex = 1;
			// 
			// currentRace
			// 
			this->currentRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->currentRace->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->currentRace->Location = System::Drawing::Point(900, 700);
			this->currentRace->Margin = System::Windows::Forms::Padding(0);
			this->currentRace->Name = L"currentRace";
			this->currentRace->Size = System::Drawing::Size(140, 140);
			this->currentRace->TabIndex = 1;
			this->currentRace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &baseMenu::currentRace_Paint);
			// 
			// raceDetails
			// 
			this->raceDetails->BackColor = System::Drawing::SystemColors::WindowText;
			this->raceDetails->Cursor = System::Windows::Forms::Cursors::No;
			this->raceDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raceDetails->ForeColor = System::Drawing::Color::White;
			this->raceDetails->Location = System::Drawing::Point(58, 48);
			this->raceDetails->Name = L"raceDetails";
			this->raceDetails->Size = System::Drawing::Size(550, 750);
			this->raceDetails->TabIndex = 2;
			this->raceDetails->Text = L"";
			this->raceDetails->TextChanged += gcnew System::EventHandler(this, &baseMenu::richTextBox1_TextChanged);
			// 
			// nextButton
			// 
			this->nextButton->BackColor = System::Drawing::Color::Black;
			this->nextButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextButton.BackgroundImage")));
			this->nextButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextButton->ForeColor = System::Drawing::Color::Transparent;
			this->nextButton->Location = System::Drawing::Point(1140, 733);
			this->nextButton->Margin = System::Windows::Forms::Padding(0);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(100, 65);
			this->nextButton->TabIndex = 2;
			this->nextButton->UseVisualStyleBackColor = false;
			// 
			// prevButton
			// 
			this->prevButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevButton.BackgroundImage")));
			this->prevButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prevButton->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->prevButton->ForeColor = System::Drawing::Color::Transparent;
			this->prevButton->Location = System::Drawing::Point(700, 733);
			this->prevButton->Margin = System::Windows::Forms::Padding(0);
			this->prevButton->Name = L"prevButton";
			this->prevButton->Size = System::Drawing::Size(100, 65);
			this->prevButton->TabIndex = 1;
			this->prevButton->UseVisualStyleBackColor = false;
			this->prevButton->Click += gcnew System::EventHandler(this, &baseMenu::button2_Click);
			// 
			// baseMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1887, 1022);
			this->Controls->Add(this->prevButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->raceDetails);
			this->Controls->Add(this->currentRace);
			this->Controls->Add(this->nextRace);
			this->Controls->Add(this->prevRace);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(1909, 1078);
			this->MinimumSize = System::Drawing::Size(1909, 1078);
			this->Name = L"baseMenu";
			this->Text = L"baseMenu";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void prevRace_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void currentRace_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
