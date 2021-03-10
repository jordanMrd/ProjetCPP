#pragma once

#include "Commande_Gestion.h"
#include "Commande_Tableau.h"

namespace ProjectPOO {
	using namespace NS_Svc;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description resume de Commande_Forms
	/// </summary>
	public ref class Commande_Forms : public System::Windows::Forms::Form
	{
	public:
		Commande_Forms(String^ id_commande, String^ reference, String^ numero_client, String^ date_livraison, String^ date_emission, String^ id_adresse_facturation, String^ id_adresse_livraison)
		{
			InitializeComponent(id_commande, reference, numero_client, date_livraison, date_emission, id_adresse_facturation, id_adresse_livraison);
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisees.
		/// </summary>
		~Commande_Forms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Valider;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::TextBox^ text_Reference;

	private: System::Windows::Forms::Label^ Reference;
	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::TextBox^ text_date_livraison;
	private: System::Windows::Forms::TextBox^ text_date_emission;
	private: System::Windows::Forms::TextBox^ text_id_facturation;
	private: System::Windows::Forms::TextBox^ text_id_livraison;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ id_adresse_facturation;
	private: System::Windows::Forms::Label^ date_livraison;
	private: System::Windows::Forms::Label^ date_emission;
	private: System::Windows::Forms::Label^ id_adresse_livraison;
	private: System::Windows::Forms::TextBox^ text_prenom;
	private: System::Windows::Forms::Label^ prenom;
	private: System::Windows::Forms::TextBox^ text_ville;
	private: System::Windows::Forms::Label^ ville;
	private: System::Windows::Forms::TextBox^ text_numero_client;
	private: System::Windows::Forms::TextBox^ text_annee;
	private: System::Windows::Forms::Label^ annee;
	private: System::Windows::Forms::Label^ numero_client;
	private: System::Windows::Forms::TextBox^ id_reference;
	private: System::Windows::Forms::Button^ Debug_button;
	private: System::Windows::Forms::TextBox^ DebugBox;



	protected:

	protected:

	private:
		/// <summary>
		/// Variable necessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Methode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette methode avec l'editeur de code.
		/// </summary>
		void InitializeComponent(String^ id_commande, String^ reference, String^ numero_client, String^ date_livraison, String^ date_emission, String^ id_adresse_facturation, String^ id_adresse_livraison)
		{
			this->Valider = (gcnew System::Windows::Forms::Button());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->text_Reference = (gcnew System::Windows::Forms::TextBox());
			this->Reference = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->text_date_livraison = (gcnew System::Windows::Forms::TextBox());
			this->text_date_emission = (gcnew System::Windows::Forms::TextBox());
			this->text_id_facturation = (gcnew System::Windows::Forms::TextBox());
			this->text_id_livraison = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->id_adresse_facturation = (gcnew System::Windows::Forms::Label());
			this->date_livraison = (gcnew System::Windows::Forms::Label());
			this->date_emission = (gcnew System::Windows::Forms::Label());
			this->id_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->text_prenom = (gcnew System::Windows::Forms::TextBox());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->ville = (gcnew System::Windows::Forms::Label());
			this->text_numero_client = (gcnew System::Windows::Forms::TextBox());
			this->text_annee = (gcnew System::Windows::Forms::TextBox());
			this->annee = (gcnew System::Windows::Forms::Label());
			this->numero_client = (gcnew System::Windows::Forms::Label());
			this->id_reference = (gcnew System::Windows::Forms::TextBox());
			this->Debug_button = (gcnew System::Windows::Forms::Button());
			this->DebugBox = (gcnew System::Windows::Forms::TextBox());

			this->SuspendLayout();

			//
			//
			//
			this->id_reference->Enabled = false;
			this->id_reference->Location = System::Drawing::Point(443, 30);
			this->id_reference->Name = L"id_reference";
			this->id_reference->Size = System::Drawing::Size(75, 20);
			this->id_reference->TabIndex = 22;
			//			this->id_reference->TextChanged += gcnew System::EventHandler(this, &Stock_forms::textBox1_TextChanged);
			String^ Changement_int = Convert::ToString(id_commande);
			this->id_reference->Text = Changement_int;
			// 
			// Valider
			// 
			this->Valider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Valider->Location = System::Drawing::Point(473, 470);
			this->Valider->Name = L"Valider";
			this->Valider->Size = System::Drawing::Size(120, 31);
			this->Valider->TabIndex = 0;
			this->Valider->Text = L"Valider la commande";
			this->Valider->UseVisualStyleBackColor = false;
			this->Valider->Click += gcnew System::EventHandler(this, &Commande_Forms::button1_Click);
			// 
			// Annuler
			// 
			this->Annuler->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Annuler->Location = System::Drawing::Point(12, 470);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(120, 31);
			this->Annuler->TabIndex = 1;
			this->Annuler->Text = L"Retour";
			this->Annuler->UseVisualStyleBackColor = false;
			// 
			// text_Reference
			// 
			this->text_Reference->Location = System::Drawing::Point(12, 414);
			this->text_Reference->Name = L"text_Reference";
			this->text_Reference->Size = System::Drawing::Size(237, 20);
			this->text_Reference->TabIndex = 2;
			this->text_Reference->Text = "" + reference;
			this->text_Reference->Enabled = false;
			// 
			// Reference
			// 
			this->Reference->AutoSize = true;
			this->Reference->Location = System::Drawing::Point(9, 398);
			this->Reference->Name = L"Reference";
			this->Reference->Size = System::Drawing::Size(57, 13);
			this->Reference->TabIndex = 13;
			this->Reference->Text = L"Reference";
			this->Reference->Click += gcnew System::EventHandler(this, &Commande_Forms::label1_Click);
			if (text_Reference->Text == "") {
				// 
				// text_nom
				// 
				this->text_nom->Location = System::Drawing::Point(169, 25);
				this->text_nom->Name = L"text_nom";
				this->text_nom->Size = System::Drawing::Size(237, 20);
				this->text_nom->TabIndex = 3;
				if (reference != "") {
					if (reference[0].ToString() == " ") {
						this->text_nom->Enabled = false;
					}
				}
			}
			// 
			// text_date_livraison
			// 
			this->text_date_livraison->Location = System::Drawing::Point(169, 222);
			this->text_date_livraison->Name = L"text_date_livraison";
			this->text_date_livraison->Size = System::Drawing::Size(237, 20);
			this->text_date_livraison->TabIndex = 10;
			this->text_date_livraison->Text = "" + date_livraison;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->text_date_livraison->Enabled = false;
				}
			}
			// 
			// text_date_emission
			// 
			this->text_date_emission->Location = System::Drawing::Point(170, 261);
			this->text_date_emission->Name = L"text_date_emission";
			this->text_date_emission->Size = System::Drawing::Size(237, 20);
			this->text_date_emission->TabIndex = 11;
			this->text_date_emission->Text = "" + date_emission;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->text_date_emission->Enabled = false;
				}
			}
			// 
			// text_id_facturation
			// 
			this->text_id_facturation->Location = System::Drawing::Point(170, 300);
			this->text_id_facturation->Name = L"text_id_facturation";
			this->text_id_facturation->Size = System::Drawing::Size(237, 20);
			this->text_id_facturation->TabIndex = 12;
			this->text_id_facturation->Text = "" + id_adresse_facturation;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->text_id_facturation->Enabled = false;
				}
			}
			// 
			// text_id_livraison
			// 
			this->text_id_livraison->Location = System::Drawing::Point(169, 339);
			this->text_id_livraison->Name = L"text_id_livraison";
			this->text_id_livraison->Size = System::Drawing::Size(237, 20);
			this->text_id_livraison->TabIndex = 13;
			this->text_id_livraison->Text = "" + id_adresse_livraison;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->text_id_livraison->Enabled = false;
				}
			}
			if (text_Reference->Text == "") {
				// 
				// nom
				// 
				this->nom->AutoSize = true;
				this->nom->Location = System::Drawing::Point(166, 9);
				this->nom->Name = L"nom";
				this->nom->Size = System::Drawing::Size(29, 13);
				this->nom->TabIndex = 14;
				this->nom->Text = L"Nom";
			}
			// 
			// id_adresse_facturation
			// 
			this->id_adresse_facturation->AutoSize = true;
			this->id_adresse_facturation->Location = System::Drawing::Point(166, 284);
			this->id_adresse_facturation->Name = L"id_adresse_facturation";
			this->id_adresse_facturation->Size = System::Drawing::Size(111, 13);
			this->id_adresse_facturation->TabIndex = 18;
			this->id_adresse_facturation->Text = L"ID adresse facturation";
			// 
			// date_livraison
			// 
			this->date_livraison->AutoSize = true;
			this->date_livraison->Location = System::Drawing::Point(166, 206);
			this->date_livraison->Name = L"date_livraison";
			this->date_livraison->Size = System::Drawing::Size(71, 13);
			this->date_livraison->TabIndex = 15;
			this->date_livraison->Text = L"Date livraison";
			// 
			// date_emission
			// 
			this->date_emission->AutoSize = true;
			this->date_emission->Location = System::Drawing::Point(166, 245);
			this->date_emission->Name = L"date_emission";
			this->date_emission->Size = System::Drawing::Size(73, 13);
			this->date_emission->TabIndex = 16;
			this->date_emission->Text = L"Date emission";

			// 
			// id_adresse_livraison
			// 
			this->id_adresse_livraison->AutoSize = true;
			this->id_adresse_livraison->Location = System::Drawing::Point(166, 323);
			this->id_adresse_livraison->Name = L"id_adresse_livraison";
			this->id_adresse_livraison->Size = System::Drawing::Size(99, 13);
			this->id_adresse_livraison->TabIndex = 17;
			this->id_adresse_livraison->Text = L"ID adresse livraison";
			if (text_Reference->Text == "") {
				// 
				// text_prenom
				// 
				this->text_prenom->Location = System::Drawing::Point(169, 64);
				this->text_prenom->Name = L"text_prenom";
				this->text_prenom->Size = System::Drawing::Size(237, 20);
				this->text_prenom->TabIndex = 4;
				if (reference != "") {
					if (reference[0].ToString() == " ") {
						this->text_prenom->Enabled = false;
					}
				}
			}
			if (text_Reference->Text == "") {
				// 
				// prenom
				// 
				this->prenom->AutoSize = true;
				this->prenom->Location = System::Drawing::Point(166, 48);
				this->prenom->Name = L"prenom";
				this->prenom->Size = System::Drawing::Size(43, 13);
				this->prenom->TabIndex = 19;
				this->prenom->Text = L"Prenom";
			}
			if (text_Reference->Text == "") {
				// 
				// text_ville
				// 
				this->text_ville->Location = System::Drawing::Point(169, 103);
				this->text_ville->Name = L"text_ville";
				this->text_ville->Size = System::Drawing::Size(237, 20);
				this->text_ville->TabIndex = 5;
				if (reference != "") {
					if (reference[0].ToString() == " ") {
						this->text_ville->Enabled = false;
					}
				}
			}
			if (text_Reference->Text == "") {
				// 
				// ville
				// 
				this->ville->AutoSize = true;
				this->ville->Location = System::Drawing::Point(166, 87);
				this->ville->Name = L"ville";
				this->ville->Size = System::Drawing::Size(26, 13);
				this->ville->TabIndex = 20;
				this->ville->Text = L"Ville";
			}
			// 
			// text_numero_client
			// 
			this->text_numero_client->Location = System::Drawing::Point(169, 183);
			this->text_numero_client->Name = L"text_numero_client";
			this->text_numero_client->Size = System::Drawing::Size(237, 20);
			this->text_numero_client->TabIndex = 9;
			this->text_numero_client->Text = "" + numero_client;
			if (reference != "") {
				if (reference[0].ToString() == " ") {
					this->text_numero_client->Enabled = false;
				}
			}
			if (text_Reference->Text == "") {
				// 
				// text_annee
				// 
				this->text_annee->Location = System::Drawing::Point(169, 143);
				this->text_annee->Name = L"text_annee";
				this->text_annee->Size = System::Drawing::Size(237, 20);
				this->text_annee->TabIndex = 6;
				if (reference != "") {
					if (reference[0].ToString() == " ") {
						this->text_annee->Enabled = false;
					}
				}
			}
			if (text_Reference->Text == "") {
				// 
				// annee
				// 
				this->annee->AutoSize = true;
				this->annee->Location = System::Drawing::Point(166, 127);
				this->annee->Name = L"annee";
				this->annee->Size = System::Drawing::Size(38, 13);
				this->annee->TabIndex = 21;
				this->annee->Text = L"Annee";
			}
			// 
			// numero_client
			// 
			this->numero_client->AutoSize = true;
			this->numero_client->Location = System::Drawing::Point(166, 167);
			this->numero_client->Name = L"numero_client";
			this->numero_client->Size = System::Drawing::Size(72, 13);
			this->numero_client->TabIndex = 8;
			this->numero_client->Text = L"Numero client";
			// 
			// DebugBox
			// 
			this->DebugBox->Location = System::Drawing::Point(-1000, -1000);//Point(117, 424);
			this->DebugBox->Multiline = true;
			this->DebugBox->Name = L"DebugBox";
			this->DebugBox->Size = System::Drawing::Size(288, 61);
			this->DebugBox->TabIndex = 27;
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
			this->Debug_button->Click += gcnew System::EventHandler(this, &Commande_Forms::Debug_Click);
			// 
			// Commande_Forms
			// 
			this->Controls->Add(this->DebugBox);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 513);
			this->Controls->Add(this->numero_client);
			this->Controls->Add(this->id_reference);
			this->Controls->Add(this->annee);
			this->Controls->Add(this->text_annee);
			this->Controls->Add(this->text_numero_client);
			this->Controls->Add(this->ville);
			this->Controls->Add(this->text_ville);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->text_prenom);
			this->Controls->Add(this->id_adresse_livraison);
			this->Controls->Add(this->date_emission);
			this->Controls->Add(this->date_livraison);
			this->Controls->Add(this->id_adresse_facturation);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->text_id_livraison);
			this->Controls->Add(this->text_id_facturation);
			this->Controls->Add(this->text_date_emission);
			this->Controls->Add(this->text_date_livraison);
			this->Controls->Add(this->text_nom);
			this->Controls->Add(this->Reference);
			this->Controls->Add(this->text_Reference);
			this->Controls->Add(this->Annuler);
			this->Controls->Add(this->Valider);
			this->Controls->Add(this->Debug_button);

			this->Name = L"Commande_Forms";
			this->Text = L"Commande_Forms";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*	String^ nom_full = text_nom->Text;
		String^ nom = nom_full->ToUpper()->Remove(2);
		String^ prenom_full = text_prenom->Text;
		String^ prenom = prenom_full->ToUpper()->Remove(2);
		String^ date_full = text_date_emission->Text;
		String^ date = date_full->ToUpper()->Remove(10)->Substring(6);
		String^ ville_full = text_ville->Text;
		String^ ville = ville_full->ToUpper()->Remove(3);
		String^ id = id_reference->Text;
		text_Reference->Text = nom + prenom + date + ville + id; */
		int numero_client = Convert::ToInt32(text_numero_client->Text);
		String^ date_livraison = text_date_livraison->Text;
		String^ date_emission = text_date_emission->Text;
		int id_adresse_facturation = Convert::ToInt32(text_id_facturation->Text);
		int id_adresse_livraison = Convert::ToInt32(text_id_livraison->Text);
		String^ ref = text_Reference->Text;
		if (ref == "") {
			String^ reference = "";
			String^ nom = text_nom->Text;
			String^ prenom = text_prenom->Text;
			String^ year = text_annee->Text;
			String^ ville = text_ville->Text;
			for (int i = 0; i < 2; i++) {
				reference += nom[i];
			}
			for (int i = 0; i < 2; i++) {
				reference += prenom[i];
			}
			reference += year;
			for (int i = 0; i < 3; i++) {
				reference += ville[i];
			}
			reference += "1";
			Commande_Gestion tempo;
			int id_commande = tempo.ajouter(reference, numero_client, date_livraison, date_emission, id_adresse_facturation, id_adresse_livraison);
		}
		else if (ref != "" && ref[0].ToString() != " ") {
			String^ reference = text_Reference->Text;
			int id_commande = Convert::ToInt32(id_reference->Text);
			Commande_Gestion temp;
			temp.modifier(id_commande, reference, numero_client, date_livraison, date_emission, id_adresse_facturation, id_adresse_livraison);
		}
		this->Close();
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Debug_Click(System::Object^ sender, System::EventArgs^ e) {
		/*	Commande_Tableau Comm;
			String^ test = Comm.CLIENT();
			DebugBox->Text = test;
			*/
	}
	};
}
