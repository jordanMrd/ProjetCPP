#pragma once
#include "BDD_CAD.h"
#include "Personnel_Gestion.h"
#include "Personnel_Tableau.h"
#include "Personne_Gestion.h"
#include "Personne_Tableau.h"
#include "Adresse_Gestion.h"
#include "Adresse_Tableau.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NS_Svc;

	/// <summary>
	/// Description résumée de Personnel_form
	/// </summary>
	public ref class Personnel_form : public System::Windows::Forms::Form
	{
	public:
		Personnel_form(String^ id_personnel, String^ nom, String^ prenom, String^ date_embauche, String^ id_superieur, String^ numero, String^ rue, String^ ville, String^ cp)
		{
			InitializeComponent(id_personnel, nom, prenom, date_embauche, id_superieur, numero, rue, ville, cp);
			//

			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Personnel_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titre_perso;
	protected:
	private: System::Windows::Forms::Button^ Valider;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::TextBox^ textBox_nom_perso;
	private: System::Windows::Forms::TextBox^ textBox_prenom_perso;
	private: System::Windows::Forms::TextBox^ textBox_date_embauche;
	private: System::Windows::Forms::TextBox^ textBox_id_supp;

	private: System::Windows::Forms::TextBox^ textBox_numero_perso;
	private: System::Windows::Forms::TextBox^ textBox_rue_perso;
	private: System::Windows::Forms::TextBox^ textBox_ville_perso;
	private: System::Windows::Forms::TextBox^ textBox_cp_perso;




	private: System::Windows::Forms::Label^ text_nom_perso;
	private: System::Windows::Forms::Label^ Text_prenom_perso;
	private: System::Windows::Forms::Label^ Text_date_embauche;
	private: System::Windows::Forms::Label^ text_id_superieur;

	private: System::Windows::Forms::Label^ text_numero_perso;
	private: System::Windows::Forms::Label^ text_rue_perso;
	private: System::Windows::Forms::Label^ text_ville_perso;
	private: System::Windows::Forms::Label^ text_cp_perso;
	private: System::Windows::Forms::TextBox^ id_perso;

	private: System::Windows::Forms::Label^ label_id;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(String^ id_personnel, String^ nom, String^ prenom, String^ date_embauche, String^ id_superieur, String^ numero, String^ rue, String^ ville, String^ cp)
		{
			this->titre_perso = (gcnew System::Windows::Forms::Label());
			this->Valider = (gcnew System::Windows::Forms::Button());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->textBox_nom_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prenom_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->textBox_id_supp = (gcnew System::Windows::Forms::TextBox());
			this->text_nom_perso = (gcnew System::Windows::Forms::Label());
			this->Text_prenom_perso = (gcnew System::Windows::Forms::Label());
			this->Text_date_embauche = (gcnew System::Windows::Forms::Label());
			this->text_id_superieur = (gcnew System::Windows::Forms::Label());
			this->id_perso = (gcnew System::Windows::Forms::TextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->text_numero_perso = (gcnew System::Windows::Forms::Label());
			this->text_rue_perso = (gcnew System::Windows::Forms::Label());
			this->text_ville_perso = (gcnew System::Windows::Forms::Label());
			this->text_cp_perso = (gcnew System::Windows::Forms::Label());
			this->textBox_numero_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rue_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ville_perso = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cp_perso = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// titre_perso
			// 
			this->titre_perso->AutoSize = true;
			this->titre_perso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->titre_perso->Location = System::Drawing::Point(169, 9);
			this->titre_perso->Name = L"titre_perso";
			this->titre_perso->Size = System::Drawing::Size(181, 22);
			this->titre_perso->TabIndex = 0;
			this->titre_perso->Text = L"Gestion de personnel";
			// 
			// Valider
			// 
			this->Valider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Valider->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Valider->Location = System::Drawing::Point(430, 476);
			this->Valider->Name = L"Valider";
			this->Valider->Size = System::Drawing::Size(75, 23);
			this->Valider->TabIndex = 1;
			this->Valider->Text = L"Valider";
			this->Valider->UseVisualStyleBackColor = false;
			this->Valider->Click += gcnew System::EventHandler(this, &Personnel_form::Valider_Click);
			// 
			// Annuler
			// 
			this->Annuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Annuler->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Annuler->Location = System::Drawing::Point(21, 476);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(75, 23);
			this->Annuler->TabIndex = 2;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = false;
			this->Annuler->Click += gcnew System::EventHandler(this, &Personnel_form::Annuler_Click);
			// 
			// textBox_nom_perso
			// 
			this->textBox_nom_perso->Location = System::Drawing::Point(128, 88);
			this->textBox_nom_perso->Name = L"textBox_nom_perso";
			this->textBox_nom_perso->Size = System::Drawing::Size(268, 20);
			this->textBox_nom_perso->TabIndex = 3;
			this->textBox_nom_perso->Text = nom;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_nom_perso->Enabled = false;
				}
			}
			// 
			// textBox_prenom_perso
			// 
			this->textBox_prenom_perso->Location = System::Drawing::Point(128, 137);
			this->textBox_prenom_perso->Name = L"textBox_prenom_perso";
			this->textBox_prenom_perso->Size = System::Drawing::Size(268, 20);
			this->textBox_prenom_perso->TabIndex = 4;
			this->textBox_prenom_perso->Text = prenom;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_prenom_perso->Enabled = false;
				}
			}
			// 
			// textBox_date_embauche
			// 

			this->textBox_date_embauche->Location = System::Drawing::Point(128, 186);
			this->textBox_date_embauche->Name = L"textBox_date_embauche";
			this->textBox_date_embauche->Size = System::Drawing::Size(268, 20);
			this->textBox_date_embauche->TabIndex = 5;
			this->textBox_date_embauche->Text = date_embauche;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_date_embauche->Enabled = false;
				}
			}
			// 
			// textBox_id_supp
			// 
			this->textBox_id_supp->Location = System::Drawing::Point(128, 235);
			this->textBox_id_supp->Name = L"textBox_id_supp";
			this->textBox_id_supp->Size = System::Drawing::Size(268, 20);
			this->textBox_id_supp->TabIndex = 6;
			this->textBox_id_supp->Text = id_superieur;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_id_supp->Enabled = false;
				}
			}
			// 
			// textBox_numero_perso
			// 
			this->textBox_numero_perso->Location = System::Drawing::Point(128, 284);
			this->textBox_numero_perso->Name = L"textBox_numero_perso";
			this->textBox_numero_perso->Size = System::Drawing::Size(268, 20);
			this->textBox_numero_perso->TabIndex = 6;
			this->textBox_numero_perso->Text = numero;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_numero_perso->Enabled = false;
				}
			}
			// 
			// textBox_rue_perso
			// 
			this->textBox_rue_perso->Location = System::Drawing::Point(128, 333);
			this->textBox_rue_perso->Name = L"textBox_rue_perso";
			this->textBox_rue_perso->Size = System::Drawing::Size(268, 20);
			this->textBox_rue_perso->TabIndex = 6;
			this->textBox_rue_perso->Text = rue;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_rue_perso->Enabled = false;
				}
			}
			// 
			// textBox_ville_perso
			// 
			this->textBox_ville_perso->Location = System::Drawing::Point(128, 382);
			this->textBox_ville_perso->Name = L"textBox_ville_perso";
			this->textBox_ville_perso->Size = System::Drawing::Size(268, 20);
			this->textBox_ville_perso->TabIndex = 6;
			this->textBox_ville_perso->Text = ville;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_ville_perso->Enabled = false;
				}
			}
			// 
			// textBox_cp_perso
			// 
			this->textBox_cp_perso->Location = System::Drawing::Point(128, 431);
			this->textBox_cp_perso->Name = L"textBox_cp_perso";
			this->textBox_cp_perso->Size = System::Drawing::Size(268, 20);
			this->textBox_cp_perso->TabIndex = 6;
			this->textBox_cp_perso->Text = cp;
			if (id_personnel != "") {
				if (id_personnel[0].ToString() == " ") {
					this->textBox_cp_perso->Enabled = false;
				}
			}
			// 
			// text_nom_perso
			// 
			this->text_nom_perso->AutoSize = true;
			this->text_nom_perso->Location = System::Drawing::Point(125, 72);
			this->text_nom_perso->Name = L"text_nom_perso";
			this->text_nom_perso->Size = System::Drawing::Size(93, 13);
			this->text_nom_perso->TabIndex = 7;
			this->text_nom_perso->Text = L"Nom du personnel";
			// 
			// Text_prenom_perso
			// 
			this->Text_prenom_perso->AutoSize = true;
			this->Text_prenom_perso->Location = System::Drawing::Point(125, 121);
			this->Text_prenom_perso->Name = L"Text_prenom_perso";
			this->Text_prenom_perso->Size = System::Drawing::Size(107, 13);
			this->Text_prenom_perso->TabIndex = 8;
			this->Text_prenom_perso->Text = L"Prénom du personnel";
			// 
			// Text_date_embauche
			// 
			this->Text_date_embauche->AutoSize = true;
			this->Text_date_embauche->Location = System::Drawing::Point(125, 170);
			this->Text_date_embauche->Name = L"Text_date_embauche";
			this->Text_date_embauche->Size = System::Drawing::Size(91, 13);
			this->Text_date_embauche->TabIndex = 9;
			this->Text_date_embauche->Text = L"Date d\'embauche";
			// 
			// text_id_superieur
			// 
			this->text_id_superieur->AutoSize = true;
			this->text_id_superieur->Location = System::Drawing::Point(125, 219);
			this->text_id_superieur->Name = L"text_id_superieur";
			this->text_id_superieur->Size = System::Drawing::Size(66, 13);
			this->text_id_superieur->TabIndex = 10;
			this->text_id_superieur->Text = L"ID Supérieur";
			// 
			// text_numero_perso
			// 
			this->text_numero_perso->AutoSize = true;
			this->text_numero_perso->Location = System::Drawing::Point(125, 268);
			this->text_numero_perso->Name = L"text_numero_perso";
			this->text_numero_perso->Size = System::Drawing::Size(93, 13);
			this->text_numero_perso->TabIndex = 7;
			this->text_numero_perso->Text = L"Numero de rue";
			// 
			// text_rue_perso
			// 
			this->text_rue_perso->AutoSize = true;
			this->text_rue_perso->Location = System::Drawing::Point(125, 317);
			this->text_rue_perso->Name = L"text_rue_perso";
			this->text_rue_perso->Size = System::Drawing::Size(93, 13);
			this->text_rue_perso->TabIndex = 7;
			this->text_rue_perso->Text = L"Rue";
			// 
			// text_ville_perso
			// 
			this->text_ville_perso->AutoSize = true;
			this->text_ville_perso->Location = System::Drawing::Point(125, 366);
			this->text_ville_perso->Name = L"text_ville_perso";
			this->text_ville_perso->Size = System::Drawing::Size(93, 13);
			this->text_ville_perso->TabIndex = 7;
			this->text_ville_perso->Text = L"Ville";
			// 
			// text_cp_perso
			// 
			this->text_cp_perso->AutoSize = true;
			this->text_cp_perso->Location = System::Drawing::Point(125, 415);
			this->text_cp_perso->Name = L"text_cp_perso";
			this->text_cp_perso->Size = System::Drawing::Size(93, 13);
			this->text_cp_perso->TabIndex = 7;
			this->text_cp_perso->Text = L"Code postal";
			// 
			// id_perso
			// 
			this->id_perso->Enabled = false;
			this->id_perso->Location = System::Drawing::Point(443, 30);
			this->id_perso->Name = L"id_perso";
			this->id_perso->Size = System::Drawing::Size(75, 20);
			this->id_perso->TabIndex = 11;
			this->id_perso->TextChanged += gcnew System::EventHandler(this, &Personnel_form::textBox1_TextChanged);
			this->id_perso->Text = id_personnel;
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(440, 14);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(18, 13);
			this->label_id->TabIndex = 12;
			this->label_id->Text = L"ID";
			// 
			// Personnel_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(530, 511);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->id_perso);
			this->Controls->Add(this->text_id_superieur);
			this->Controls->Add(this->Text_date_embauche);
			this->Controls->Add(this->Text_prenom_perso);
			this->Controls->Add(this->text_nom_perso);
			this->Controls->Add(this->textBox_id_supp);
			this->Controls->Add(this->textBox_date_embauche);
			this->Controls->Add(this->textBox_prenom_perso);
			this->Controls->Add(this->textBox_nom_perso);
			this->Controls->Add(this->Annuler);
			this->Controls->Add(this->Valider);
			this->Controls->Add(this->titre_perso);
			this->Controls->Add(this->text_numero_perso);
			this->Controls->Add(this->text_rue_perso);
			this->Controls->Add(this->text_ville_perso);
			this->Controls->Add(this->text_cp_perso);
			this->Controls->Add(this->textBox_numero_perso);
			this->Controls->Add(this->textBox_rue_perso);
			this->Controls->Add(this->textBox_ville_perso);
			this->Controls->Add(this->textBox_cp_perso);
			this->Name = L"Personnel_form";
			this->Text = L"Personnel_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Valider_Click(System::Object^ sender, System::EventArgs^ e) {
		int id_personnel;
		String^ nom;
		String^ prenom;
		String^ date_embauche;

		int id_superieur;
		nom = textBox_nom_perso->Text;
		prenom = textBox_prenom_perso->Text;
		date_embauche = textBox_date_embauche->Text;
		id_superieur = Convert::ToInt32(textBox_id_supp->Text);

		int numero = Convert::ToInt32(textBox_numero_perso->Text);
		String^ rue = textBox_rue_perso->Text;
		String^ ville = textBox_ville_perso->Text;
		int cp = Convert::ToInt32(textBox_cp_perso->Text);

		Personnel_Gestion perso;
		Personne_Gestion person;
		Adresse_Gestion adres;
		if (id_perso->Text == "") {
			int id_personnel = perso.ajouter(nom, prenom, date_embauche, id_superieur);
			int id_adresse = adres.ajouter(numero, rue, ville, cp);
			person.ajouter(id_adresse, -1, id_personnel);
		}
		else {
			int choix = 0;
			id_personnel = Convert::ToInt32(id_perso->Text);
			perso.modifier(id_personnel, nom, prenom, date_embauche, id_superieur);
			adres.modifier(numero, rue, ville, cp, id_personnel, choix);
		}
		this->Close();
	}
	private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void id_perso_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   //this->textBox_nom_perso->Text = nom;
		   //	Personnel_Tableau voila;
		   //	String^ nom = voila.getNom_personnel();
		   //	this->id_perso->Text = "" + voila.getID_personnel();
			   //this->textBox_nom_perso->Text = nom;
		   //	this->textBox_prenom_perso->Text = "dd" + voila.getPrenom_personnel();
		   //	this->textBox_date_embauche->Text = "cc" + voila.getDateEmbauche();
			   //this->text_nom_perso->Text = "aa" + temp->getNom_personnel();
		   //	this->textBox_id_supp->Text = "" + voila.getID_superieur();
		   //}
	};
}
