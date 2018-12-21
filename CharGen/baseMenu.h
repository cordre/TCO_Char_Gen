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
			// 
			// nextRace
			// 
			this->nextRace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextRace.BackgroundImage")));
			this->nextRace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextRace->Location = System::Drawing::Point(750, 600);
			this->nextRace->Margin = System::Windows::Forms::Padding(0);
			this->nextRace->Name = L"nextRace";
			this->nextRace->Size = System::Drawing::Size(60, 60);
			this->nextRace->TabIndex = 1;
			// 
			// baseMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->nextRace);
			this->Controls->Add(this->prevRace);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"baseMenu";
			this->Text = L"baseMenu";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
