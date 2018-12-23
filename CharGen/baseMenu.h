#pragma once
#include <stdio.h>

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

	Char* tmpf;
	int gender = 0;
	int curRace = 1;

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
	private: System::Windows::Forms::Button^  button1;

	private: System::ComponentModel::IContainer^  components;

	


	protected:

	protected:

	protected:

	private:
		System::ComponentModel::ComponentResourceManager^  RText = (gcnew System::ComponentModel::ComponentResourceManager(baseMenu::typeid));
		System::ComponentModel::ComponentResourceManager^  CText = (gcnew System::ComponentModel::ComponentResourceManager(baseMenu::typeid));
		//Resources::ResourceManager^ RText = gcnew Resources::ResourceManager(L"TCOCharGen.ClassText", this->GetType()->Assembly);
		//Resources::ResourceManager^ CText = gcnew Resources::ResourceManager(L"TCOCharGen.RaceText", this->GetType()->Assembly);
		/// <summary>
		/// Required designer variable.
		/// </summary>

		void ClassSwitcher(System::String^ raceText, System::String^ raceImage, System::String^ pRace, System::String^ cRace, System::String^ nRace, System::String^ labelrace) {
			System::String^ RaceTextPath = ".\\text\\races\\";
			System::String^ RacePath = ".\\images\\races\\";
			System::String^ iconPath = ".\\images\\races\\icons\\";

			//this->raceDetails->LoadFile((RaceTextPath + raceText + ".rtf"), RichTextBoxStreamType::RichText);

			this->raceDetails->LoadFile((RaceTextPath+ raceText +".rtf"), RichTextBoxStreamType::RichText);
			this->classImage->BackgroundImage = System::Drawing::Image::FromFile(RacePath+ raceImage +".jpg");
			this->prevRace->BackgroundImage = System::Drawing::Image::FromFile(iconPath+pRace+".png");
			this->currentRace->BackgroundImage = System::Drawing::Image::FromFile(iconPath+cRace+".png");
			this->nextRace->BackgroundImage = System::Drawing::Image::FromFile(iconPath+nRace+".png");
			this->raceName->Text = labelrace;
		}

		void ChangeClass(int racesel) {
			switch (racesel)
			{
			case 1:
				ClassSwitcher("Anjian","anjian","blank","anjian","efairy","Anjian");
				break;
			case 2:
				ClassSwitcher("Elite Fairy", "efairy", "anjian", "efairy", "gdragon", "Elite Fairy");
				break;
			case 3:
				ClassSwitcher("Guarded Dragon", "gdragon", "efairy", "gdragon", "harpy", "Guarded Dragon");
				break;
			case 4:
				ClassSwitcher("Harpy", "harpy1", "gdragon", "harpy", "human", "Harpy");
				break;
			case 5:
				ClassSwitcher("Human", "human", "harpy", "human", "light", "Human");
				break;
			case 6:
				ClassSwitcher("Light", "light", "human", "light", "shoan", "Light");
				break;
			case 7:
				ClassSwitcher("Shoan", "shoan2", "light", "shoan", "blank", "Shoan");
				break;
			/*
			case 8:
				
				break;
			*/
			};
		}

	void genderSel(int gendersel){
		if (gendersel == 2) {
			this->femaleT->BackgroundImage = System::Drawing::Image::FromFile(".\\icons\\female_.png");
			this->maleT->BackgroundImage = System::Drawing::Image::FromFile(".\\icons\\male.png");
		} else
		{
			this->femaleT->BackgroundImage = System::Drawing::Image::FromFile(".\\icons\\female.png");
			this->maleT->BackgroundImage = System::Drawing::Image::FromFile(".\\icons\\male_.png");
		}
	}


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// prevRace
			// 
			this->prevRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevRace.BackgroundImage")));
			this->prevRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prevRace->Location = System::Drawing::Point(705, 923);
			this->prevRace->Margin = System::Windows::Forms::Padding(0);
			this->prevRace->Name = L"prevRace";
			this->prevRace->Size = System::Drawing::Size(90, 92);
			this->prevRace->TabIndex = 0;
			this->prevRace->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &baseMenu::prevRace_Paint);
			// 
			// currentRace
			// 
			this->currentRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"currentRace.BackgroundImage")));
			this->currentRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->currentRace->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->currentRace->Location = System::Drawing::Point(870, 692);
			this->currentRace->Margin = System::Windows::Forms::Padding(0);
			this->currentRace->Name = L"currentRace";
			this->currentRace->Size = System::Drawing::Size(179, 184);
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
			this->nextButton->Location = System::Drawing::Point(1125, 754);
			this->nextButton->Margin = System::Windows::Forms::Padding(0);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(90, 62);
			this->nextButton->TabIndex = 2;
			this->nextButton->TabStop = false;
			this->nextButton->UseVisualStyleBackColor = false;
			this->nextButton->Click += gcnew System::EventHandler(this, &baseMenu::nextButton_click);
			// 
			// prevButton
			// 
			this->prevButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prevButton.BackgroundImage")));
			this->prevButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prevButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->prevButton->FlatAppearance->BorderSize = 0;
			this->prevButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prevButton->ForeColor = System::Drawing::Color::Transparent;
			this->prevButton->Location = System::Drawing::Point(705, 754);
			this->prevButton->Margin = System::Windows::Forms::Padding(0);
			this->prevButton->Name = L"prevButton";
			this->prevButton->Size = System::Drawing::Size(90, 62);
			this->prevButton->TabIndex = 1;
			this->prevButton->TabStop = false;
			this->prevButton->UseVisualStyleBackColor = false;
			this->prevButton->Click += gcnew System::EventHandler(this, &baseMenu::prevButton_click);
			// 
			// raceDetails
			// 
			this->raceDetails->BackColor = System::Drawing::SystemColors::WindowText;
			this->raceDetails->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->raceDetails->Cursor = System::Windows::Forms::Cursors::No;
			this->raceDetails->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raceDetails->ForeColor = System::Drawing::Color::White;
			this->raceDetails->Location = System::Drawing::Point(30, 31);
			this->raceDetails->Margin = System::Windows::Forms::Padding(0);
			this->raceDetails->Name = L"raceDetails";
			this->raceDetails->ReadOnly = true;
			this->raceDetails->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->raceDetails->ShortcutsEnabled = false;
			this->raceDetails->Size = System::Drawing::Size(600, 923);
			this->raceDetails->TabIndex = 2;
			/this->raceDetails->Text = L"Test";
			this->raceDetails->TextChanged += gcnew System::EventHandler(this, &baseMenu::raceDetails_TextChanged);
			// 
			// nextRace
			// 
			this->nextRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextRace.BackgroundImage")));
			this->nextRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextRace->Location = System::Drawing::Point(1125, 923);
			this->nextRace->Margin = System::Windows::Forms::Padding(0);
			this->nextRace->Name = L"nextRace";
			this->nextRace->Size = System::Drawing::Size(90, 92);
			this->nextRace->TabIndex = 3;
			// 
			// border
			// 
			this->border->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"border.BackgroundImage")));
			this->border->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->border->Location = System::Drawing::Point(855, 677);
			this->border->Margin = System::Windows::Forms::Padding(0);
			this->border->Name = L"border";
			this->border->Size = System::Drawing::Size(210, 215);
			this->border->TabIndex = 4;
			// 
			// raceName
			// 
			this->raceName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->raceName->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raceName->ForeColor = System::Drawing::Color::Red;
			this->raceName->Location = System::Drawing::Point(795, 923);
			this->raceName->Margin = System::Windows::Forms::Padding(0);
			this->raceName->Name = L"raceName";
			this->raceName->Size = System::Drawing::Size(330, 60);
			this->raceName->TabIndex = 5;
			this->raceName->Text = L"Anjian";
			this->raceName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// classImage
			// 
			this->classImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"classImage.BackgroundImage")));
			this->classImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->classImage->Location = System::Drawing::Point(810, 154);
			this->classImage->Margin = System::Windows::Forms::Padding(0);
			this->classImage->Name = L"classImage";
			this->classImage->Size = System::Drawing::Size(300, 462);
			this->classImage->TabIndex = 6;
			// 
			// CYR
			// 
			this->CYR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CYR->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CYR->ForeColor = System::Drawing::Color::Red;
			this->CYR->Location = System::Drawing::Point(795, 31);
			this->CYR->Margin = System::Windows::Forms::Padding(0);
			this->CYR->Name = L"CYR";
			this->CYR->Size = System::Drawing::Size(330, 60);
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
			this->classDetails->Location = System::Drawing::Point(1290, 31);
			this->classDetails->Margin = System::Windows::Forms::Padding(0);
			this->classDetails->Name = L"classDetails";
			this->classDetails->ReadOnly = true;
			this->classDetails->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->classDetails->ShortcutsEnabled = false;
			this->classDetails->Size = System::Drawing::Size(600, 923);
			this->classDetails->TabIndex = 8;
			//this->classDetails->Text = L"Class Info";
			// 
			// maleT
			// 
			this->maleT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maleT.BackgroundImage")));
			this->maleT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->maleT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->maleT->ForeColor = System::Drawing::Color::Transparent;
			this->maleT->Location = System::Drawing::Point(675, 523);
			this->maleT->Margin = System::Windows::Forms::Padding(0);
			this->maleT->Name = L"maleT";
			this->maleT->Size = System::Drawing::Size(90, 92);
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
			this->femaleT->Location = System::Drawing::Point(1155, 523);
			this->femaleT->Margin = System::Windows::Forms::Padding(0);
			this->femaleT->Name = L"femaleT";
			this->femaleT->Size = System::Drawing::Size(90, 92);
			this->femaleT->TabIndex = 10;
			this->femaleT->TabStop = false;
			this->femaleT->UseVisualStyleBackColor = true;
			this->femaleT->Click += gcnew System::EventHandler(this, &baseMenu::femaleT_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(589, 977);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Debug";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &baseMenu::testClick);
			// 
			// baseMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1887, 1022);
			this->Controls->Add(this->button1);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(1909, 1078);
			this->MinimumSize = System::Drawing::Size(1909, 1078);
			this->Name = L"baseMenu";
			this->Text = L"baseMenu";
			this->ResumeLayout(false);

			ClassSwitcher("Anjian", "anjian", "blank", "anjian", "efairy", "Anjian");
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
	gender = 2;
	genderSel(gender);
}

private: System::Void maleT_Click(System::Object^  sender, System::EventArgs^  e) {
	gender = 1;
	genderSel(gender);
}
private: System::Void raceDetails_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void nextButton_click(System::Object^  sender, System::EventArgs^  e) {
		curRace += 1;
		if (curRace > 7) {
			curRace = 7;
		}
		ChangeClass(curRace);
}
private: System::Void prevButton_click(System::Object^  sender, System::EventArgs^  e) {
	curRace -= 1;

	if (curRace < 1) {
		curRace = 1;
	}

	ChangeClass(curRace);
}
private: System::Void testClick(System::Object^  sender, System::EventArgs^  e) {
	String^ genderStr = String::Format("Gender: {0}", gender) + String::Format("\nCurrent Race: {0}", curRace);
	MessageBox::Show(genderStr);
}
};
}
