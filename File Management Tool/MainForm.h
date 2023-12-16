#pragma once

namespace FileManagementTool {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ directoryName;

	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Button^ selectBtn;
	private: System::Windows::Forms::Label^ result1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ showBtn;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Collections::Hashtable^ mytable;
	private: int folderCount;
	private: int fileCount;
	private: int folderCountDuplicate;
	private: int fileCountDuplicate;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ result2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::ListBox^ listBox3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->directoryName = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->selectBtn = (gcnew System::Windows::Forms::Button());
			this->result1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->showBtn = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->result2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dizin Seçin ";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// directoryName
			// 
			this->directoryName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->directoryName->Location = System::Drawing::Point(3, 3);
			this->directoryName->Multiline = true;
			this->directoryName->Name = L"directoryName";
			this->directoryName->Size = System::Drawing::Size(846, 19);
			this->directoryName->TabIndex = 1;
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->Location = System::Drawing::Point(12, 90);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(49, 13);
			this->Result->TabIndex = 2;
			this->Result->Text = L"Sonuçlar";
			// 
			// selectBtn
			// 
			this->selectBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->selectBtn->Location = System::Drawing::Point(855, 3);
			this->selectBtn->Name = L"selectBtn";
			this->selectBtn->Size = System::Drawing::Size(208, 19);
			this->selectBtn->TabIndex = 4;
			this->selectBtn->Text = L"Dosya Seç";
			this->selectBtn->UseVisualStyleBackColor = true;
			this->selectBtn->Click += gcnew System::EventHandler(this, &MainForm::searchBtn_Click);
			// 
			// result1
			// 
			this->result1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->result1->AutoSize = true;
			this->result1->Location = System::Drawing::Point(3, 0);
			this->result1->Name = L"result1";
			this->result1->Size = System::Drawing::Size(38, 39);
			this->result1->TabIndex = 0;
			this->result1->Text = L"result1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.96795F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.03205F)));
			this->tableLayoutPanel1->Controls->Add(this->directoryName, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->selectBtn, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(15, 25);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1066, 25);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// showBtn
			// 
			this->showBtn->Location = System::Drawing::Point(15, 57);
			this->showBtn->Name = L"showBtn";
			this->showBtn->Size = System::Drawing::Size(130, 23);
			this->showBtn->TabIndex = 6;
			this->showBtn->Text = L"Dosyalarý Göster";
			this->showBtn->UseVisualStyleBackColor = true;
			this->showBtn->Click += gcnew System::EventHandler(this, &MainForm::showBtn_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(525, 511);
			this->listBox1->TabIndex = 7;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->listBox1, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->result2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->result1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(15, 117);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.905371F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 93.09463F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1063, 565);
			this->tableLayoutPanel2->TabIndex = 8;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->listBox3, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->listBox2, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(534, 42);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(526, 520);
			this->tableLayoutPanel3->TabIndex = 9;
			// 
			// listBox3
			// 
			this->listBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(3, 263);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(520, 251);
			this->listBox3->TabIndex = 9;
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(520, 251);
			this->listBox2->TabIndex = 8;
			// 
			// result2
			// 
			this->result2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->result2->AutoSize = true;
			this->result2->Location = System::Drawing::Point(534, 0);
			this->result2->Name = L"result2";
			this->result2->Size = System::Drawing::Size(38, 39);
			this->result2->TabIndex = 9;
			this->result2->Text = L"result2";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1093, 694);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->showBtn);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(298, 243);
			this->Name = L"MainForm";
			this->Text = L"Dosya Yönetim Aracý";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ folderBroswserDialog = gcnew FolderBrowserDialog;
		folderBroswserDialog->ShowDialog();
		String^ dirPath = folderBroswserDialog->SelectedPath;
		this->directoryName->Text = dirPath;
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->result1->Text = "";
		this->result2->Text = "";
	}
	private: void getFileAndFolders(String^ dirPath) {
		auto files = Directory::GetFiles(dirPath);
		auto folders = Directory::GetDirectories(dirPath);

		int numFiles = files->Length;
		int numFolders = folders->Length;
		
		this->fileCount += numFiles;
		this->folderCount += numFolders;

		for (int i = 0; i < numFiles; i++){
			if (this->listBox1->Items->Contains(FileInfo(files[i]).Name)) {
				this->listBox2->Items->Add(files[i]);
				this->listBox3->Items->Add(FileInfo(files[i]).Name);
				this->fileCountDuplicate++;
			};
			this->listBox1->Items->Add(FileInfo(files[i]).Name);
		}
		for (int i = 0; i < numFolders; i++) {
			this->listBox1->Items->Add("--> " + folders[i]);
			getFileAndFolders(folders[i]);
		}
		return;
	}
	private: System::Void showBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->listBox1->Items->Clear();
		this->listBox2->Items->Clear();
		this->listBox3->Items->Clear();

		this->folderCount = 0;
		this->fileCount = 0;
		this->folderCountDuplicate = 0;
		this->fileCountDuplicate = 0;

		String^ dirPath = this->directoryName->Text;
		getFileAndFolders(dirPath);
		this->result1->Text = "Dosya Sayýsý: " + Convert::ToString(fileCount) + "\nKlasör Sayýsý : " + Convert::ToString(folderCount);
		this->result2->Text = "Yinelenen Dosya Sayisi : " + Convert::ToString(fileCountDuplicate);
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
