#pragma once
#include "BDD_CAD.h"
#include "Stock_Gestion.h"
#include "Commande_Gestion.h"
#include "Article_Gestion.h"


namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NS_Svc;

	/// <summary>
	/// Description résumée de Panier
	/// </summary>
	public ref class Panier : public System::Windows::Forms::Form
	{
	public:
		Panier(void)
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
		~Panier()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		/// 
		System::ComponentModel::Container ^components;
//	private: System::Windows::Forms::Button^ BoutonValidation;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ afficher;
	private: System::Windows::Forms::Button^ RetourBoutton;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			//this->BoutonValidation = (gcnew System::Windows::Forms::Button());
			this->RetourBoutton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->afficher = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// BoutonValidation
			// 
		/*	this->BoutonValidation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BoutonValidation->Location = System::Drawing::Point(484, 417);
			this->BoutonValidation->Name = L"BoutonValidation";
			this->BoutonValidation->Size = System::Drawing::Size(103, 29);
			this->BoutonValidation->TabIndex = 7;
			this->BoutonValidation->Text = L"Valider le panier";
			this->BoutonValidation->UseVisualStyleBackColor = false;
			this->BoutonValidation->Click += gcnew System::EventHandler(this, &Panier::BoutonValidation_Click); */
			// 
			// RetourBoutton
			// 
			this->RetourBoutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->RetourBoutton->Location = System::Drawing::Point(12, 417);
			this->RetourBoutton->Name = L"RetourBoutton";
			this->RetourBoutton->Size = System::Drawing::Size(103, 29);
			this->RetourBoutton->TabIndex = 8;
			this->RetourBoutton->Text = L"Retour";
			this->RetourBoutton->UseVisualStyleBackColor = false;
			this->RetourBoutton->Click += gcnew System::EventHandler(this, &Panier::RetourBoutton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(95, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(412, 316);
			this->dataGridView1->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(95, 52);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(412, 316);
			this->dataGridView2->TabIndex = 9;
			// 
			// afficher
			// 
			this->afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->afficher->Location = System::Drawing::Point(246, 384);
			this->afficher->Name = L"afficher";
			this->afficher->Size = System::Drawing::Size(109, 26);
			this->afficher->TabIndex = 10;
			this->afficher->Text = L"Afficher le panier";
			this->afficher->UseVisualStyleBackColor = false;
			this->afficher->Click += gcnew System::EventHandler(this, &Panier::afficher_Click);
			// 
			// Panier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(598, 451);
			//
			this->Controls->Add(this->afficher);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->RetourBoutton);
		//	this->Controls->Add(this->BoutonValidation);
			this->Name = L"Panier";
			this->Text = L"Panier";
			this->Load += gcnew System::EventHandler(this, &Panier::Panier_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//	private: System::Void BoutonValidation_Click(System::Object^ sender, System::EventArgs^ e) {
//	};
	private: System::Void Panier_Load(System::Object^ sender, System::EventArgs^ e) {
		/*this->dataGridView1->Location = System::Drawing::Point(92, 58);
		Stock_Gestion stock;
		this->dataGridView1->DataSource = stock.listeStock("Stock");
		this->dataGridView1->DataMember = "Stock";.
		*/
	}
   	private: System::Void RetourBoutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	};

private: System::Void afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande_Gestion testt;
	this->dataGridView2->DataSource = testt.Get_commande("Commande");
	this->dataGridView2->DataMember = "Commande";
	int id_commande = Convert::ToInt32(dataGridView2->Rows[0]->Cells[0]->Value);

	Article_Gestion temp;
	this->dataGridView1->DataSource = temp.listeArticle(id_commande, "Article");
	this->dataGridView1->DataMember = "Article";
}
};
}
