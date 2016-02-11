#pragma once

namespace Program_3_Mills {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  ReportButton;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  HeadingTextBox;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->HeadingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Violet;
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1002, 378);
			this->panel1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->ReportButton);
			this->groupBox2->Location = System::Drawing::Point(728, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(254, 333);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(132, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Exit Program";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(132, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Create List";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 237);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(226, 90);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 66);
			this->button2->TabIndex = 1;
			this->button2->Text = L"E&xit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// ReportButton
			// 
			this->ReportButton->Location = System::Drawing::Point(15, 33);
			this->ReportButton->Name = L"ReportButton";
			this->ReportButton->Size = System::Drawing::Size(102, 64);
			this->ReportButton->TabIndex = 0;
			this->ReportButton->Text = L"&Report";
			this->ReportButton->UseVisualStyleBackColor = true;
			this->ReportButton->Click += gcnew System::EventHandler(this, &Form1::ReportButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->HeadingTextBox);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Location = System::Drawing::Point(39, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(663, 333);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// HeadingTextBox
			// 
			this->HeadingTextBox->Location = System::Drawing::Point(185, 273);
			this->HeadingTextBox->Name = L"HeadingTextBox";
			this->HeadingTextBox->Size = System::Drawing::Size(378, 33);
			this->HeadingTextBox->TabIndex = 3;
			this->HeadingTextBox->Click += gcnew System::EventHandler(this, &Form1::HeadingTextBox_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 26);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Report Header:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(276, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 192);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Please Enter The Heading\r\n\r\nOf The Report And\r\n\r\nPress The \"Report\" Button\r\n\r\n";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(21, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(209, 171);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 402);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void HeadingTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
			 HeadingTextBox->Clear();
		 }
private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 Inventory * CurrentRecordPointer;
			 ifstream DataFile;
			 int InitProductIdNum=0;
			 char InitProductDescript[36] = "\0";
			 int InitManuIdNum =0;
			 double InitWholesalePrice =0.0;
			 double InitMark_upPercent =0.0;
			 int InitQuanityInStock =0;
			
			 char * ReportName; // new linklist
			 
			 DataFile.open((char*)(void*)Marshal::StringToHGlobalAnsi
				 (String::Concat(Directory::GetCurrentDirectory(),
				 "\\ProductFileForInput.txt")));

			 if (!DataFile)
			 {
				 Application::Exit ();
				 return;
			 }// end of check file

			 // reads input from text file one time
			 DataFile >> InitProductIdNum;
			 DataFile.ignore();
			 DataFile.get(InitProductDescript, 32);
			 DataFile >> InitManuIdNum ;
			 DataFile>> InitWholesalePrice;            
			 DataFile >> InitMark_upPercent;
			
			 DataFile >> InitQuanityInStock;


			 // calculate retail price

			 while(DataFile)
			 {
			 CurrentRecordPointer = new Inventory;
			 CurrentRecordPointer->InsertItem(InitProductIdNum,InitProductDescript, InitManuIdNum,
							InitWholesalePrice,InitMark_upPercent,InitQuanityInStock, CurrentRecordPointer);

			 // copy and paste from above to get the rest of the data
			 DataFile >> InitProductIdNum;
			 DataFile.ignore();
			 DataFile.get(InitProductDescript, 32);
			 DataFile >> InitManuIdNum ;
			 DataFile >> InitWholesalePrice;
			 DataFile >> InitMark_upPercent;
			 DataFile >> InitQuanityInStock;
			 //calculate retail price
			 
			 }// end of while loop

			 ReportName = (char*)(void*)Marshal::StringToHGlobalAnsi
					(HeadingTextBox->Text);
			 // calls the class fuction that lists the records
			 FirstRecordPointer->ListRecords(ReportName);

			 HeadingTextBox->Clear();
			 HeadingTextBox->Text = " You Have Created an Output File!";
			 


			 // delete pointers
			 delete CurrentRecordPointer;
			 FirstRecordPointer= NULL;
			 DataFile.close();

			 


		 }// end of report button
};
}

