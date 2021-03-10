#pragma once
#include "BDD_CAD.h"
#include "Client_Gestion.h"
#include "Client_Tableau.h"
#include "Client_Gestion.h"
#include "Adresse_Gestion.h"
#include "Adresse_Tableau.h"
#include "Personne_Gestion.h"
#include "Personne_Tableau.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NS_Svc;

	/// <summary>
	/// Description résumée de Client_form
	/// </summary>
	public ref class Client_form : public System::Windows::Forms::Form
	{
	public:
		Client_form(String^ id_cliente, String^ nom, String^ prenom, String^ date_naissance, String^ date_premier_achat, String^ numero, String^ rue, String^ ville, String^ cp)
		{
			InitializeComponent(id_cliente, nom, prenom, date_naissance, date_premier_achat, numero, rue, ville, cp);
			//

			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Client_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titre_client;
	protected:
	private: System::Windows::Forms::Button^ Valider;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::TextBox^ textBox_nom_client;
	private: System::Windows::Forms::TextBox^ textBox_prenom_client;
	private: System::Windows::Forms::TextBox^ textBox_date_naissance;
	private: System::Windows::Forms::TextBox^ textBox_date_premier_achat;

	private: System::Windows::Forms::TextBox^ textBox_numero_client;
	private: System::Windows::Forms::TextBox^ textBox_rue_client;
	private: System::Windows::Forms::TextBox^ textBox_ville_client;
	private: System::Windows::Forms::TextBox^ textBox_cp_client;



	private: System::Windows::Forms::Label^ text_nom_client;
	private: System::Windows::Forms::Label^ Text_prenom_client;
	private: System::Windows::Forms::Label^ Text_date_naissance;
	private: System::Windows::Forms::Label^ text_date_premier_achat;

	private: System::Windows::Forms::Label^ text_numero_client;
	private: System::Windows::Forms::Label^ text_rue_client;
	private: System::Windows::Forms::Label^ text_ville_client;
	private: System::Windows::Forms::Label^ text_cp_client;

	private: System::Windows::Forms::TextBox^ id_client;

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
		void InitializeComponent(String^ id_cliente, String^ nom, String^ prenom, String^ date_naissance, String^ date_premier_achat, String^ numero, String^ rue, String^ ville, String^ cp)
		{
			this->titre_client = (gcnew System::Windows::Forms::Label());
			this->Valider = (gcnew System::Windows::Forms::Button());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->textBox_nom_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_premier_achat = (gcnew System::Windows::Forms::TextBox());
			this->text_nom_client = (gcnew System::Windows::Forms::Label());
			this->Text_prenom_client = (gcnew System::Windows::Forms::Label());
			this->Text_date_naissance = (gcnew System::Windows::Forms::Label());
			this->text_date_premier_achat = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->text_numero_client = (gcnew System::Windows::Forms::Label());
			this->text_rue_client = (gcnew System::Windows::Forms::Label());
			this->text_ville_client = (gcnew System::Windows::Forms::Label());
			this->text_cp_client = (gcnew System::Windows::Forms::Label());
			this->textBox_numero_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rue_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ville_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cp_client = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// titre_client
			// 
			this->titre_client->AutoSize = true;
			this->titre_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->titre_client->Location = System::Drawing::Point(169, 9);
			this->titre_client->Name = L"titre_client";
			this->titre_client->Size = System::Drawing::Size(181, 22);
			this->titre_client->TabIndex = 0;
			this->titre_client->Text = L"Gestion de client";
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
			this->Valider->Click += gcnew System::EventHandler(this, &Client_form::Valider_Click);
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
			this->Annuler->Click += gcnew System::EventHandler(this, &Client_form::Annuler_Click);
			// 
			// textBox_nom_client
			// 
			this->textBox_nom_client->Location = System::Drawing::Point(128, 88);
			this->textBox_nom_client->Name = L"textBox_nom_client";
			this->textBox_nom_client->Size = System::Drawing::Size(268, 20);
			this->textBox_nom_client->TabIndex = 3;
			this->textBox_nom_client->Text = nom;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_nom_client->Enabled = false;
				}
			}
			// 
			// textBox_prenom_client
			// 
			this->textBox_prenom_client->Location = System::Drawing::Point(128, 137);
			this->textBox_prenom_client->Name = L"textBox_prenom_client";
			this->textBox_prenom_client->Size = System::Drawing::Size(268, 20);
			this->textBox_prenom_client->TabIndex = 4;
			this->textBox_prenom_client->Text = prenom;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_prenom_client->Enabled = false;
				}
			}
			// 
			// textBox_date_naissance
			// 
			this->textBox_date_naissance->Location = System::Drawing::Point(128, 186);
			this->textBox_date_naissance->Name = L"textBox_date_naissance";
			this->textBox_date_naissance->Size = System::Drawing::Size(268, 20);
			this->textBox_date_naissance->TabIndex = 5;
			this->textBox_date_naissance->Text = date_naissance;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_date_naissance->Enabled = false;
				}
			}
			// 
			// textBox_date_premier_achat
			// 
			this->textBox_date_premier_achat->Location = System::Drawing::Point(128, 235);
			this->textBox_date_premier_achat->Name = L"textBox_date_premier_achat";
			this->textBox_date_premier_achat->Size = System::Drawing::Size(268, 20);
			this->textBox_date_premier_achat->TabIndex = 6;
			this->textBox_date_premier_achat->Text = date_premier_achat;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_date_premier_achat->Enabled = false;
				}
			}
			// 
			// textBox_numero_client
			// 
			this->textBox_numero_client->Location = System::Drawing::Point(128, 284);
			this->textBox_numero_client->Name = L"textBox_numero_client";
			this->textBox_numero_client->Size = System::Drawing::Size(268, 20);
			this->textBox_numero_client->TabIndex = 6;
			this->textBox_numero_client->Text = numero;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_numero_client->Enabled = false;
				}
			}
			// 
			// textBox_rue_client
			// 
			this->textBox_rue_client->Location = System::Drawing::Point(128, 333);
			this->textBox_rue_client->Name = L"textBox_rue_client";
			this->textBox_rue_client->Size = System::Drawing::Size(268, 20);
			this->textBox_rue_client->TabIndex = 6;
			this->textBox_rue_client->Text = rue;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_rue_client->Enabled = false;
				}
			}
			// 
			// textBox_ville_client
			// 
			this->textBox_ville_client->Location = System::Drawing::Point(128, 382);
			this->textBox_ville_client->Name = L"textBox_ville_client";
			this->textBox_ville_client->Size = System::Drawing::Size(268, 20);
			this->textBox_ville_client->TabIndex = 6;
			this->textBox_ville_client->Text = ville;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_ville_client->Enabled = false;
				}
			}
			// 
			// textBox_cp_client
			// 
			this->textBox_cp_client->Location = System::Drawing::Point(128, 431);
			this->textBox_cp_client->Name = L"textBox_cp_client";
			this->textBox_cp_client->Size = System::Drawing::Size(268, 20);
			this->textBox_cp_client->TabIndex = 6;
			this->textBox_cp_client->Text = cp;
			if (id_cliente != "") {
				if (id_cliente[0].ToString() == " ") {
					this->textBox_cp_client->Enabled = false;
				}
			}
			// 
			// text_nom_client
			// 
			this->text_nom_client->AutoSize = true;
			this->text_nom_client->Location = System::Drawing::Point(125, 72);
			this->text_nom_client->Name = L"text_nom_client";
			this->text_nom_client->Size = System::Drawing::Size(93, 13);
			this->text_nom_client->TabIndex = 7;
			this->text_nom_client->Text = L"Nom du client";
			// 
			// Text_prenom_client
			// 
			this->Text_prenom_client->AutoSize = true;
			this->Text_prenom_client->Location = System::Drawing::Point(125, 121);
			this->Text_prenom_client->Name = L"Text_prenom_client";
			this->Text_prenom_client->Size = System::Drawing::Size(107, 13);
			this->Text_prenom_client->TabIndex = 8;
			this->Text_prenom_client->Text = L"Prénom du client";
			// 
			// Text_date_naissance
			// 
			this->Text_date_naissance->AutoSize = true;
			this->Text_date_naissance->Location = System::Drawing::Point(125, 170);
			this->Text_date_naissance->Name = L"Text_date_naissance";
			this->Text_date_naissance->Size = System::Drawing::Size(91, 13);
			this->Text_date_naissance->TabIndex = 9;
			this->Text_date_naissance->Text = L"Date de naissance";
			// 
			// text_date_premier_achat
			// 
			this->text_date_premier_achat->AutoSize = true;
			this->text_date_premier_achat->Location = System::Drawing::Point(125, 219);
			this->text_date_premier_achat->Name = L"text_date_premier_achat";
			this->text_date_premier_achat->Size = System::Drawing::Size(66, 13);
			this->text_date_premier_achat->TabIndex = 10;
			this->text_date_premier_achat->Text = L"Date du premier achat";
			// 
			// text_numero_client
			// 
			this->text_numero_client->AutoSize = true;
			this->text_numero_client->Location = System::Drawing::Point(125, 268);
			this->text_numero_client->Name = L"text_numero_client";
			this->text_numero_client->Size = System::Drawing::Size(93, 13);
			this->text_numero_client->TabIndex = 7;
			this->text_numero_client->Text = L"Numero de rue";
			// 
			// text_rue_client
			// 
			this->text_rue_client->AutoSize = true;
			this->text_rue_client->Location = System::Drawing::Point(125, 317);
			this->text_rue_client->Name = L"text_rue_client";
			this->text_rue_client->Size = System::Drawing::Size(93, 13);
			this->text_rue_client->TabIndex = 7;
			this->text_rue_client->Text = L"Rue";
			// 
			// text_ville_client
			// 
			this->text_ville_client->AutoSize = true;
			this->text_ville_client->Location = System::Drawing::Point(125, 366);
			this->text_ville_client->Name = L"text_ville_client";
			this->text_ville_client->Size = System::Drawing::Size(93, 13);
			this->text_ville_client->TabIndex = 7;
			this->text_ville_client->Text = L"Ville";
			// 
			// text_cp_client
			// 
			this->text_cp_client->AutoSize = true;
			this->text_cp_client->Location = System::Drawing::Point(125, 415);
			this->text_cp_client->Name = L"text_cp_client";
			this->text_cp_client->Size = System::Drawing::Size(93, 13);
			this->text_cp_client->TabIndex = 7;
			this->text_cp_client->Text = L"Code postal";
			// 
			// id_client
			// 
			this->id_client->Enabled = false;
			this->id_client->Location = System::Drawing::Point(443, 30);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(75, 20);
			this->id_client->TabIndex = 11;
			this->id_client->TextChanged += gcnew System::EventHandler(this, &Client_form::textBox1_TextChanged);
			this->id_client->Text = id_cliente;
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
			// Client_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(530, 511);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->text_date_premier_achat);
			this->Controls->Add(this->Text_date_naissance);
			this->Controls->Add(this->Text_prenom_client);
			this->Controls->Add(this->text_nom_client);
			this->Controls->Add(this->textBox_date_premier_achat);
			this->Controls->Add(this->textBox_date_naissance);
			this->Controls->Add(this->textBox_prenom_client);
			this->Controls->Add(this->textBox_nom_client);
			this->Controls->Add(this->Annuler);
			this->Controls->Add(this->Valider);
			this->Controls->Add(this->titre_client);
			this->Controls->Add(this->text_numero_client);
			this->Controls->Add(this->text_rue_client);
			this->Controls->Add(this->text_ville_client);
			this->Controls->Add(this->text_cp_client);
			this->Controls->Add(this->textBox_numero_client);
			this->Controls->Add(this->textBox_rue_client);
			this->Controls->Add(this->textBox_ville_client);
			this->Controls->Add(this->textBox_cp_client);
			this->Name = L"Client_form";
			this->Text = L"Client_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Valider_Click(System::Object^ sender, System::EventArgs^ e) {
		int id_cliente;
		String^ nom;
		String^ prenom;
		String^ date_naissance;
		String^ date_premier_achat;
		nom = textBox_nom_client->Text;
		prenom = textBox_prenom_client->Text;
		date_naissance = textBox_date_naissance->Text;
		date_premier_achat = textBox_date_premier_achat->Text;

		int numero = Convert::ToInt32(textBox_numero_client->Text);
		String^ rue = textBox_rue_client->Text;
		String^ ville = textBox_ville_client->Text;
		int cp = Convert::ToInt32(textBox_cp_client->Text);

		Client_Gestion clie;
		Personne_Gestion person;
		Adresse_Gestion adres;
		if (id_client->Text == "") {
			int id_cliente = clie.ajouter(nom, prenom, date_naissance, date_premier_achat);
			int id_adresse = adres.ajouter(numero, rue, ville, cp);
			person.ajouter(id_adresse, id_cliente, -1);
		}
		else {
			int choix = 1;
			id_cliente = Convert::ToInt32(id_client->Text);
			clie.modifier(id_cliente, nom, prenom, date_naissance, date_premier_achat);
			adres.modifier(numero, rue, ville, cp, id_cliente, choix);
		}
/*
		Personnel_Gestion perso;
		Personne_Gestion person;
		Adresse_Gestion adres;
		if (id_perso->Text == "") {
			int id_personnel = perso.ajouter(nom, prenom, date_embauche, id_superieur);
			int id_adresse = adres.ajouter(numero, rue, ville, cp);
			person.ajouter(id_adresse, id_personnel);
		}
		else {
			id_personnel = Convert::ToInt32(id_perso->Text);
			perso.modifier(id_personnel, nom, prenom, date_embauche, id_superieur);
			adres.modifier(numero, rue, ville, cp, id_personnel);
		}
		*/
		this->Close();
	}
	private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void id_client_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}