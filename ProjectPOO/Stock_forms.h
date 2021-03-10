#pragma once
#include "Stock_Gestion.h"
#include "Stock_Tableau.h"
#include <string>
#include <algorithm>

namespace ProjectPOO {
	using namespace NS_Svc;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stock_forms
	/// </summary>
	public ref class Stock_forms : public System::Windows::Forms::Form
	{
	public:
		Stock_forms(String^ reference, String^ nom, String^ prix_ht, String^ nombre_exemplaire, String^ quantite_pour_remise, String^ pourcentage_remise, String^ id_couleur, String^ seuil_reappro)
		{
			InitializeComponent(reference, nom, prix_ht, nombre_exemplaire, quantite_pour_remise, pourcentage_remise, id_couleur, seuil_reappro);
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Stock_forms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Valider;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::TextBox^ textBox_nom_article;



	private: System::Windows::Forms::Label^ titre_ajout;
	private: System::Windows::Forms::TextBox^ txtBox_prix_ht;


	private: System::Windows::Forms::TextBox^ textBox_nombre_article;
	private: System::Windows::Forms::TextBox^ textBox_quantite_pour_remise;
	private: System::Windows::Forms::TextBox^ textBox_pourcentage_remise;
	private: System::Windows::Forms::TextBox^ textBox_id_couleur;
	private: System::Windows::Forms::TextBox^ textBox_seuil_reapro;
	private: System::Windows::Forms::Label^ text_prix_ht;
	private: System::Windows::Forms::Label^ text_nom_article;
	private: System::Windows::Forms::Label^ text_nombre_article;
	private: System::Windows::Forms::Label^ text_quantite_pour_remise;
	private: System::Windows::Forms::Label^ text_pourcentage_remise;
	private: System::Windows::Forms::Label^ text_id_couleur;
	private: System::Windows::Forms::Label^ text_seuil_reapro;
	private: System::Windows::Forms::TextBox^ id_reference;
	private: System::Windows::Forms::Button^ Debug_button;
	private: System::Windows::Forms::TextBox^ DebugBox;



	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(String^ reference, String^ nom, String^ prix_ht, String^ nombre_exemplaire, String^ quantite_pour_remise, String^ pourcentage_remise, String^ id_couleur, String^ seuil_reappro)
		{
			this->Valider = (gcnew System::Windows::Forms::Button());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->textBox_nom_article = (gcnew System::Windows::Forms::TextBox());
			this->titre_ajout = (gcnew System::Windows::Forms::Label());
			this->txtBox_prix_ht = (gcnew System::Windows::Forms::TextBox());
			this->textBox_nombre_article = (gcnew System::Windows::Forms::TextBox());
			this->textBox_quantite_pour_remise = (gcnew System::Windows::Forms::TextBox());
			this->textBox_pourcentage_remise = (gcnew System::Windows::Forms::TextBox());
			this->textBox_id_couleur = (gcnew System::Windows::Forms::TextBox());
			this->textBox_seuil_reapro = (gcnew System::Windows::Forms::TextBox());
			this->text_prix_ht = (gcnew System::Windows::Forms::Label());
			this->text_nom_article = (gcnew System::Windows::Forms::Label());
			this->text_nombre_article = (gcnew System::Windows::Forms::Label());
			this->text_quantite_pour_remise = (gcnew System::Windows::Forms::Label());
			this->text_pourcentage_remise = (gcnew System::Windows::Forms::Label());
			this->text_id_couleur = (gcnew System::Windows::Forms::Label());
			this->text_seuil_reapro = (gcnew System::Windows::Forms::Label());
			this->id_reference = (gcnew System::Windows::Forms::TextBox());
			this->Debug_button = (gcnew System::Windows::Forms::Button());
			this->DebugBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Valider
			// 
			this->Valider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Valider->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Valider->Location = System::Drawing::Point(452, 491);
			this->Valider->Name = L"Valider";
			this->Valider->Size = System::Drawing::Size(75, 23);
			this->Valider->TabIndex = 2;
			this->Valider->Text = L"Valider";
			this->Valider->UseVisualStyleBackColor = false;
			this->Valider->Click += gcnew System::EventHandler(this, &Stock_forms::Valider_Click);
			// 
			// Annuler
			// 
			this->Annuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Annuler->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Annuler->Location = System::Drawing::Point(12, 491);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(75, 23);
			this->Annuler->TabIndex = 3;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = false;
			this->Annuler->Click += gcnew System::EventHandler(this, &Stock_forms::Annuler_Click);
			// 
			// textBox_nom_article
			// 
			this->textBox_nom_article->Location = System::Drawing::Point(128, 82);
			this->textBox_nom_article->Name = L"textBox_nom_article";
			this->textBox_nom_article->Size = System::Drawing::Size(268, 20);
			this->textBox_nom_article->TabIndex = 11;
			this->textBox_nom_article->Text = nom;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->textBox_nom_article->Enabled = false;
				}
			}
			// 
			// titre_ajout
			// 
			this->titre_ajout->AutoSize = true;
			this->titre_ajout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->titre_ajout->Location = System::Drawing::Point(189, 23);
			this->titre_ajout->Name = L"titre_ajout";
			this->titre_ajout->Size = System::Drawing::Size(145, 22);
			this->titre_ajout->TabIndex = 12;
			this->titre_ajout->Text = L"Gestion d'articles";
			// 
			// id_reference
			// 
			this->id_reference->Enabled = false;
			this->id_reference->Location = System::Drawing::Point(443, 30);
			this->id_reference->Name = L"id_reference";
			this->id_reference->Size = System::Drawing::Size(75, 20);
			this->id_reference->TabIndex = 11;
//			this->id_reference->TextChanged += gcnew System::EventHandler(this, &Stock_forms::textBox1_TextChanged);
			this->id_reference->Text = reference;
			// 
			// txtBox_prix_ht
			// 
			this->txtBox_prix_ht->Location = System::Drawing::Point(128, 132);
			this->txtBox_prix_ht->Name = L"txtBox_prix_ht";
			this->txtBox_prix_ht->Size = System::Drawing::Size(268, 20);
			this->txtBox_prix_ht->TabIndex = 13;
			this->txtBox_prix_ht->Text = prix_ht;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->txtBox_prix_ht->Enabled = false;
				}
			}
			// 
			// textBox_nombre_article
			// 
			this->textBox_nombre_article->Location = System::Drawing::Point(128, 185);
			this->textBox_nombre_article->Name = L"textBox_nombre_article";
			this->textBox_nombre_article->Size = System::Drawing::Size(268, 20);
			this->textBox_nombre_article->TabIndex = 14;
			this->textBox_nombre_article->Text = ""+nombre_exemplaire;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->textBox_nombre_article->Enabled = false;
				}
			}
			// 
			// textBox_quantite_pour_remise
			// 
			this->textBox_quantite_pour_remise->Location = System::Drawing::Point(128, 236);
			this->textBox_quantite_pour_remise->Name = L"textBox_quantite_pour_remise";
			this->textBox_quantite_pour_remise->Size = System::Drawing::Size(268, 20);
			this->textBox_quantite_pour_remise->TabIndex = 15;
			this->textBox_quantite_pour_remise->Text = "" + quantite_pour_remise;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->textBox_quantite_pour_remise->Enabled = false;
				}
			}
			// 
			// textBox_pourcentage_remise
			// 
			this->textBox_pourcentage_remise->Location = System::Drawing::Point(128, 282);
			this->textBox_pourcentage_remise->Name = L"textBox_pourcentage_remise";
			this->textBox_pourcentage_remise->Size = System::Drawing::Size(268, 20);
			this->textBox_pourcentage_remise->TabIndex = 16;
			this->textBox_pourcentage_remise->Text = pourcentage_remise;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->textBox_pourcentage_remise->Enabled = false;
				}
			}
			// 
			// textBox_id_couleur
			// 
			this->textBox_id_couleur->Location = System::Drawing::Point(128, 330);
			this->textBox_id_couleur->Name = L"textBox_id_couleur";
			this->textBox_id_couleur->Size = System::Drawing::Size(268, 20);
			this->textBox_id_couleur->TabIndex = 17;
			this->textBox_id_couleur->Text = id_couleur;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->textBox_id_couleur->Enabled = false;
				}
			}
			// 
			// textBox_seuil_reapro
			// 
			this->textBox_seuil_reapro->Location = System::Drawing::Point(128, 379);
			this->textBox_seuil_reapro->Name = L"textBox_seuil_reapro";
			this->textBox_seuil_reapro->Size = System::Drawing::Size(268, 20);
			this->textBox_seuil_reapro->TabIndex = 18;
			this->textBox_seuil_reapro->Text= seuil_reappro;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->textBox_seuil_reapro->Enabled = false;
				}
			}
			// 
			// text_prix_ht
			// 
			this->text_prix_ht->AutoSize = true;
			this->text_prix_ht->Location = System::Drawing::Point(125, 116);
			this->text_prix_ht->Name = L"text_prix_ht";
			this->text_prix_ht->Size = System::Drawing::Size(45, 13);
			this->text_prix_ht->TabIndex = 19;
			this->text_prix_ht->Text = L"Prix_HT";
			// 
			// text_nom_article
			// 
			this->text_nom_article->AutoSize = true;
			this->text_nom_article->Location = System::Drawing::Point(125, 66);
			this->text_nom_article->Name = L"text_nom_article";
			this->text_nom_article->Size = System::Drawing::Size(61, 13);
			this->text_nom_article->TabIndex = 20;
			this->text_nom_article->Text = L"Nom Article";
			// 
			// text_nombre_article
			// 
			this->text_nombre_article->AutoSize = true;
			this->text_nombre_article->Location = System::Drawing::Point(125, 169);
			this->text_nombre_article->Name = L"text_nombre_article";
			this->text_nombre_article->Size = System::Drawing::Size(75, 13);
			this->text_nombre_article->TabIndex = 21;
			this->text_nombre_article->Text = L"Nombre article";
			// 
			// text_quantite_pour_remise
			// 
			this->text_quantite_pour_remise->AutoSize = true;
			this->text_quantite_pour_remise->Location = System::Drawing::Point(125, 220);
			this->text_quantite_pour_remise->Name = L"text_quantite_pour_remise";
			this->text_quantite_pour_remise->Size = System::Drawing::Size(104, 13);
			this->text_quantite_pour_remise->TabIndex = 22;
			this->text_quantite_pour_remise->Text = L"Quantité pour remise";
			// 
			// text_pourcentage_remise
			// 
			this->text_pourcentage_remise->AutoSize = true;
			this->text_pourcentage_remise->Location = System::Drawing::Point(125, 266);
			this->text_pourcentage_remise->Name = L"text_pourcentage_remise";
			this->text_pourcentage_remise->Size = System::Drawing::Size(101, 13);
			this->text_pourcentage_remise->TabIndex = 23;
			this->text_pourcentage_remise->Text = L"Pourcentage remise";
			// 
			// text_id_couleur
			// 
			this->text_id_couleur->AutoSize = true;
			this->text_id_couleur->Location = System::Drawing::Point(125, 314);
			this->text_id_couleur->Name = L"text_id_couleur";
			this->text_id_couleur->Size = System::Drawing::Size(57, 13);
			this->text_id_couleur->TabIndex = 24;
			this->text_id_couleur->Text = L"ID Couleur";
			// 
			// text_seuil_reapro
			// 
			this->text_seuil_reapro->AutoSize = true;
			this->text_seuil_reapro->Location = System::Drawing::Point(125, 363);
			this->text_seuil_reapro->Name = L"text_seuil_reapro";
			this->text_seuil_reapro->Size = System::Drawing::Size(125, 13);
			this->text_seuil_reapro->TabIndex = 25;
			this->text_seuil_reapro->Text = L"Seuil réaprovisionnement";
			// 
			// Debug_button
			// 
			this->Debug_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Debug_button->Location = System::Drawing::Point(221, 491);
			this->Debug_button->Name = L"Debug_button";
			this->Debug_button->Size = System::Drawing::Size(75, 23);
			this->Debug_button->TabIndex = 26;
			this->Debug_button->Text = L"Debug";
			this->Debug_button->UseVisualStyleBackColor = false;
			this->Debug_button->Click += gcnew System::EventHandler(this, &Stock_forms::button1_Click); 
			// 
			// DebugBox
			// 
			this->DebugBox->Location = System::Drawing::Point(117, 424);
			this->DebugBox->Multiline = true;
			this->DebugBox->Name = L"DebugBox";
			this->DebugBox->Size = System::Drawing::Size(288, 61);
			this->DebugBox->TabIndex = 27;
			//this->DebugBox->TextChanged += gcnew System::EventHandler(this, &Stock_forms::DebugBox_TextChanged);
			// 
			// Stock_forms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 526);
			this->Controls->Add(this->DebugBox);
			this->Controls->Add(this->id_reference);
			this->Controls->Add(this->Debug_button);
			this->Controls->Add(this->text_seuil_reapro);
			this->Controls->Add(this->text_id_couleur);
			this->Controls->Add(this->text_pourcentage_remise);
			this->Controls->Add(this->text_quantite_pour_remise);
			this->Controls->Add(this->text_nombre_article);
			this->Controls->Add(this->text_nom_article);
			this->Controls->Add(this->text_prix_ht);
			this->Controls->Add(this->textBox_seuil_reapro);
			this->Controls->Add(this->textBox_id_couleur);
			this->Controls->Add(this->textBox_pourcentage_remise);
			this->Controls->Add(this->textBox_quantite_pour_remise);
			this->Controls->Add(this->textBox_nombre_article);
			this->Controls->Add(this->txtBox_prix_ht);
			this->Controls->Add(this->titre_ajout);
			this->Controls->Add(this->textBox_nom_article);
			this->Controls->Add(this->Annuler);
			this->Controls->Add(this->Valider);
			this->Name = L"Stock_forms";
			this->Text = L"Stock_forms";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Valider_Click(System::Object^ sender, System::EventArgs^ e) {
		int reference;
		String^ Nom_Art = textBox_nom_article->Text;
		String^ Debug_Prix_HT = txtBox_prix_ht->Text;
		int Nombre_Article = Convert::ToInt32(textBox_nombre_article->Text);
		int Quantite_Pour_Remise = Convert::ToInt32(textBox_quantite_pour_remise->Text);
		String^ Debug_Pourcentage = textBox_pourcentage_remise->Text;
		String^ Pourcentage_Remise = Debug_Pourcentage->Replace(",", ".");
		String^ Prix_HT = Debug_Prix_HT->Replace(",", ".");
		int ID_Couleur = Convert::ToInt32(textBox_id_couleur->Text);
		int Seuil_Reapro = Convert::ToInt32(textBox_seuil_reapro->Text);
		Stock_Gestion stock;
		if (id_reference->Text == "") {
			int id_stock = stock.ajouter(Nom_Art, Prix_HT, Nombre_Article, Quantite_Pour_Remise, Pourcentage_Remise, ID_Couleur, Seuil_Reapro);
		}
		else {
			reference = Convert::ToInt32(id_reference->Text);
			stock.modifier(reference, Nom_Art, Prix_HT, Nombre_Article, Quantite_Pour_Remise, Pourcentage_Remise, ID_Couleur, Seuil_Reapro);
		}
		Close();

	};
	private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	};


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Nom_Art = textBox_nom_article->Text;
	String^ Debug_Prix_HT = txtBox_prix_ht->Text;
	int Nombre_Article = Convert::ToInt32(textBox_nombre_article->Text);
	int Quantite_Pour_Remise = Convert::ToInt32(textBox_quantite_pour_remise->Text);
	String^ Debug_Pourcentage = textBox_pourcentage_remise->Text;
	String^ Pourcentage_Remise = Debug_Pourcentage->Replace(",", ".");
	String^ Prix_HT = Debug_Prix_HT->Replace(",", ".");
	int ID_Couleur = Convert::ToInt32(textBox_id_couleur->Text);
	int Seuil_Reapro = Convert::ToInt32(textBox_seuil_reapro->Text);

	String^ test = "VALUES ('" + Nom_Art + "'," + Prix_HT + "," + Nombre_Article + "," + Quantite_Pour_Remise +
		"," + Pourcentage_Remise + " ," + ID_Couleur + "," + Seuil_Reapro + ");";
	DebugBox->Text = test;
}


};
}
