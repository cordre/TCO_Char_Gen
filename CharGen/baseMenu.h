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

	private: System::Windows::Forms::Panel^  currentRace;

	private: System::Windows::Forms::Button^  nextButton;
	private: System::Windows::Forms::Button^  prevButton;
	private: System::Windows::Forms::RichTextBox^  raceDetails;
	private: System::Windows::Forms::Panel^  nextRace;
	private: System::Windows::Forms::Panel^  border;
	private: System::Windows::Forms::Label^  raceName;
	private: System::Windows::Forms::Panel^  classImage;
	private: System::Windows::Forms::Label^  CYR;
	private: System::Windows::Forms::RichTextBox^  classDetails;
	private: System::Windows::Forms::Button^  maleT;
	private: System::Windows::Forms::Button^  femaleT;



	private: System::ComponentModel::IContainer^  components;











	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(baseMenu::typeid));
			this->prevRace = (gcnew System::Windows::Forms::Panel());
			this->currentRace = (gcnew System::Windows::Forms::Panel());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->prevButton = (gcnew System::Windows::Forms::Button());
			this->raceDetails = (gcnew System::Windows::Forms::RichTextBox());
			this->nextRace = (gcnew System::Windows::Forms::Panel());
			this->border = (gcnew System::Windows::Forms::Panel());
			this->raceName = (gcnew System::Windows::Forms::Label());
			this->classImage = (gcnew System::Windows::Forms::Panel());
			this->CYR = (gcnew System::Windows::Forms::Label());
			this->classDetails = (gcnew System::Windows::Forms::RichTextBox());
			this->maleT = (gcnew System::Windows::Forms::Button());
			this->femaleT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// prevRace
			// 
			this->prevRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevRace.BackgroundImage")));
			this->prevRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prevRace->Location = System::Drawing::Point(470, 600);
			this->prevRace->Margin = System::Windows::Forms::Padding(0);
			this->prevRace->Name = L"prevRace";
			this->prevRace->Size = System::Drawing::Size(60, 60);
			this->prevRace->TabIndex = 0;
			this->prevRace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &baseMenu::prevRace_Paint);
			// 
			// currentRace
			// 
			this->currentRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"currentRace.BackgroundImage")));
			this->currentRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->currentRace->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->currentRace->Location = System::Drawing::Point(580, 450);
			this->currentRace->Margin = System::Windows::Forms::Padding(0);
			this->currentRace->Name = L"currentRace";
			this->currentRace->Size = System::Drawing::Size(120, 120);
			this->currentRace->TabIndex = 1;
			this->currentRace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &baseMenu::currentRace_Paint);
			// 
			// nextButton
			// 
			this->nextButton->BackColor = System::Drawing::Color::Black;
			this->nextButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextButton.BackgroundImage")));
			this->nextButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextButton->FlatAppearance->BorderSize = 0;
			this->nextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextButton->ForeColor = System::Drawing::Color::Transparent;
			this->nextButton->Location = System::Drawing::Point(750, 490);
			this->nextButton->Margin = System::Windows::Forms::Padding(0);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(60, 40);
			this->nextButton->TabIndex = 2;
			this->nextButton->TabStop = false;
			this->nextButton->UseVisualStyleBackColor = false;
			// 
			// prevButton
			// 
			this->prevButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevButton.BackgroundImage")));
			this->prevButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prevButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->prevButton->FlatAppearance->BorderSize = 0;
			this->prevButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prevButton->ForeColor = System::Drawing::Color::Transparent;
			this->prevButton->Location = System::Drawing::Point(470, 490);
			this->prevButton->Margin = System::Windows::Forms::Padding(0);
			this->prevButton->Name = L"prevButton";
			this->prevButton->Size = System::Drawing::Size(60, 40);
			this->prevButton->TabIndex = 1;
			this->prevButton->TabStop = false;
			this->prevButton->UseVisualStyleBackColor = false;
			// 
			// raceDetails
			// 
			this->raceDetails->BackColor = System::Drawing::SystemColors::WindowText;
			this->raceDetails->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->raceDetails->Cursor = System::Windows::Forms::Cursors::No;
			this->raceDetails->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raceDetails->ForeColor = System::Drawing::Color::White;
			this->raceDetails->Location = System::Drawing::Point(20, 20);
			this->raceDetails->Margin = System::Windows::Forms::Padding(0);
			this->raceDetails->Name = L"raceDetails";
			this->raceDetails->ReadOnly = true;
			this->raceDetails->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->raceDetails->ShortcutsEnabled = false;
			this->raceDetails->Size = System::Drawing::Size(400, 600);
			this->raceDetails->TabIndex = 2;
			this->raceDetails->Text = L"Test";
			// 
			// nextRace
			// 
			this->nextRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextRace.BackgroundImage")));
			this->nextRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextRace->Location = System::Drawing::Point(750, 600);
			this->nextRace->Margin = System::Windows::Forms::Padding(0);
			this->nextRace->Name = L"nextRace";
			this->nextRace->Size = System::Drawing::Size(60, 60);
			this->nextRace->TabIndex = 3;
			// 
			// border
			// 
			this->border->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"border.BackgroundImage")));
			this->border->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->border->Location = System::Drawing::Point(570, 440);
			this->border->Margin = System::Windows::Forms::Padding(0);
			this->border->Name = L"border";
			this->border->Size = System::Drawing::Size(140, 140);
			this->border->TabIndex = 4;
			// 
			// raceName
			// 
			this->raceName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->raceName->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raceName->ForeColor = System::Drawing::Color::Red;
			this->raceName->Location = System::Drawing::Point(530, 600);
			this->raceName->Margin = System::Windows::Forms::Padding(0);
			this->raceName->Name = L"raceName";
			this->raceName->Size = System::Drawing::Size(220, 39);
			this->raceName->TabIndex = 5;
			this->raceName->Text = L"Anjian";
			this->raceName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// classImage
			// 
			this->classImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"classImage.BackgroundImage")));
			this->classImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->classImage->Location = System::Drawing::Point(540, 100);
			this->classImage->Margin = System::Windows::Forms::Padding(0);
			this->classImage->Name = L"classImage";
			this->classImage->Size = System::Drawing::Size(200, 300);
			this->classImage->TabIndex = 6;
			// 
			// CYR
			// 
			this->CYR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CYR->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CYR->ForeColor = System::Drawing::Color::Red;
			this->CYR->Location = System::Drawing::Point(530, 20);
			this->CYR->Margin = System::Windows::Forms::Padding(0);
			this->CYR->Name = L"CYR";
			this->CYR->Size = System::Drawing::Size(220, 39);
			this->CYR->TabIndex = 7;
			this->CYR->Text = L"Choose Your Race";
			this->CYR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// classDetails
			// 
			this->classDetails->BackColor = System::Drawing::SystemColors::WindowText;
			this->classDetails->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->classDetails->Cursor = System::Windows::Forms::Cursors::No;
			this->classDetails->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classDetails->ForeColor = System::Drawing::Color::White;
			this->classDetails->Location = System::Drawing::Point(860, 20);
			this->classDetails->Margin = System::Windows::Forms::Padding(0);
			this->classDetails->Name = L"classDetails";
			this->classDetails->ReadOnly = true;
			this->classDetails->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->classDetails->ShortcutsEnabled = false;
			this->classDetails->Size = System::Drawing::Size(400, 600);
			this->classDetails->TabIndex = 8;
			this->classDetails->Text = L"Test";
			// 
			// maleT
			// 
			this->maleT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maleT.BackgroundImage")));
			this->maleT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->maleT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->maleT->ForeColor = System::Drawing::Color::Transparent;
			this->maleT->Location = System::Drawing::Point(450, 340);
			this->maleT->Margin = System::Windows::Forms::Padding(0);
			this->maleT->Name = L"maleT";
			this->maleT->Size = System::Drawing::Size(60, 60);
			this->maleT->TabIndex = 9;
			this->maleT->TabStop = false;
			this->maleT->UseVisualStyleBackColor = true;
			this->maleT->Click += gcnew System::EventHandler(this, &baseMenu::maleT_Click);
			// 
			// femaleT
			// 
			this->femaleT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"femaleT.BackgroundImage")));
			this->femaleT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->femaleT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->femaleT->ForeColor = System::Drawing::Color::Transparent;
			this->femaleT->Location = System::Drawing::Point(770, 340);
			this->femaleT->Margin = System::Windows::Forms::Padding(0);
			this->femaleT->Name = L"femaleT";
			this->femaleT->Size = System::Drawing::Size(60, 60);
			this->femaleT->TabIndex = 10;
			this->femaleT->TabStop = false;
			this->femaleT->UseVisualStyleBackColor = true;
			this->femaleT->Click += gcnew System::EventHandler(this, &baseMenu::femaleT_Click);
			// 
			// baseMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->femaleT);
			this->Controls->Add(this->maleT);
			this->Controls->Add(this->classDetails);
			this->Controls->Add(this->CYR);
			this->Controls->Add(this->classImage);
			this->Controls->Add(this->raceName);
			this->Controls->Add(this->nextRace);
			this->Controls->Add(this->prevButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->raceDetails);
			this->Controls->Add(this->currentRace);
			this->Controls->Add(this->prevRace);
			this->Controls->Add(this->border);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
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
private: System::Void femaleT_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void maleT_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
