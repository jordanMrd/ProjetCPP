#pragma once
#include "Forms2.h"
#include "Personnel_form.h"
#include "BDD_CAD.h"
#include "Personnel_Tableau.h"
#include "Personnel_Gestion.h"
#include "Client_Gestion.h"
#include "Commande_Gestion.h"
#include "Stock_Gestion.h"
#include "Stock_Gestion.h"
#include "Panier.h"
#include "Stock_forms.h"
#include "Client_form.h"
#include "Commande_Forms.h"
#include "Article_Gestion.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NS_Svc;
	//using namespace NS_Composants;

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Personnel;
	private: System::Windows::Forms::Button^ Client;
	private: System::Windows::Forms::Button^ Commande;
	private: System::Windows::Forms::Button^ Produit;
	private: System::Windows::Forms::Label^ Titre;
	protected:
	protected:
	private: System::Windows::Forms::Button^ Modifier_Personnel;
	private: System::Windows::Forms::Button^ Modifier_Client;
	private: System::Windows::Forms::Button^ Modifier_Stock;
	private: System::Windows::Forms::Button^ Modifier_Commande;
	private: System::Windows::Forms::Button^ Statistiques;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Supprimer_Personnel;
	private: System::Windows::Forms::Button^ Supprimer_Client;
	private: System::Windows::Forms::Button^ Supprimer_Stock;
	private: System::Windows::Forms::Button^ Supprimer_Commande;
	private: System::Windows::Forms::Label^ mode;
	private: System::Windows::Forms::Button^ Ajouter_Personnel;
	private: System::Windows::Forms::Button^ Ajouter_Client;
	private: System::Windows::Forms::Button^ Ajouter_Commande;
	private: System::Windows::Forms::Button^ Ajouter_Produit;
	private: System::Windows::Forms::Button^ Descendre;
	private: System::Windows::Forms::Button^ Monter;
	private: System::Windows::Forms::Button^ Afficher_Personnel;
	private: System::Windows::Forms::Button^ Afficher_Client;
	private: System::Windows::Forms::Button^ Afficher_Stock;
	private: System::Windows::Forms::Button^ Afficher_Commande;
	private: System::Windows::Forms::Button^ AfficherPanier;
	private: System::Windows::Forms::Button^ panier;

	private: int selection = 0;  //ligne s�lectionn�
		   int id;  //id actuelle selectionn� (premiere celulle de la ligne)
	private: System::Windows::Forms::Label^ id_select;
	private: System::Windows::Forms::Button^ PanierMoyen;
	private: System::Windows::Forms::Button^ ChiffreAffaire;
	private: System::Windows::Forms::Button^ seuilReapp;
	private: System::Windows::Forms::Button^ TotalAchat;
	private: System::Windows::Forms::Button^ Top10;
	private: System::Windows::Forms::Button^ Simulations;
	private: System::Windows::Forms::Button^ Bot10;
	private: System::Windows::Forms::Button^ ValeurCommerciale;
	private: System::Windows::Forms::Button^ ValeurAchat;
	private: System::Windows::Forms::TextBox^ textBoxMois;
	private: System::Windows::Forms::TextBox^ textBoxAnnee;


	private: System::Windows::Forms::Label^ labelMois;
	private: System::Windows::Forms::Label^ labelAnnee;




		   /// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Personnel = (gcnew System::Windows::Forms::Button());
			this->Client = (gcnew System::Windows::Forms::Button());
			this->Commande = (gcnew System::Windows::Forms::Button());
			this->Produit = (gcnew System::Windows::Forms::Button());
			this->Titre = (gcnew System::Windows::Forms::Label());
			this->Statistiques = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Supprimer_Personnel = (gcnew System::Windows::Forms::Button());
			this->Supprimer_Client = (gcnew System::Windows::Forms::Button());
			this->Supprimer_Stock = (gcnew System::Windows::Forms::Button());
			this->Supprimer_Commande = (gcnew System::Windows::Forms::Button());
			this->mode = (gcnew System::Windows::Forms::Label());
			this->Modifier_Personnel = (gcnew System::Windows::Forms::Button());
			this->Modifier_Client = (gcnew System::Windows::Forms::Button());
			this->Modifier_Stock = (gcnew System::Windows::Forms::Button());
			this->Modifier_Commande = (gcnew System::Windows::Forms::Button());
			this->Ajouter_Personnel = (gcnew System::Windows::Forms::Button());
			this->Ajouter_Client = (gcnew System::Windows::Forms::Button());
			this->Ajouter_Commande = (gcnew System::Windows::Forms::Button());
			this->Ajouter_Produit = (gcnew System::Windows::Forms::Button());
			this->Descendre = (gcnew System::Windows::Forms::Button());
			this->Monter = (gcnew System::Windows::Forms::Button());
			this->Afficher_Personnel = (gcnew System::Windows::Forms::Button());
			this->Afficher_Client = (gcnew System::Windows::Forms::Button());
			this->Afficher_Stock = (gcnew System::Windows::Forms::Button());
			this->Afficher_Commande = (gcnew System::Windows::Forms::Button());
			this->AfficherPanier = (gcnew System::Windows::Forms::Button());
			this->panier = (gcnew System::Windows::Forms::Button());
			this->id_select = (gcnew System::Windows::Forms::Label());
			this->PanierMoyen = (gcnew System::Windows::Forms::Button());
			this->ChiffreAffaire = (gcnew System::Windows::Forms::Button());
			this->seuilReapp = (gcnew System::Windows::Forms::Button());
			this->TotalAchat = (gcnew System::Windows::Forms::Button());
			this->Top10 = (gcnew System::Windows::Forms::Button());
			this->Simulations = (gcnew System::Windows::Forms::Button());
			this->Bot10 = (gcnew System::Windows::Forms::Button());
			this->ValeurCommerciale = (gcnew System::Windows::Forms::Button());
			this->ValeurAchat = (gcnew System::Windows::Forms::Button());
			this->textBoxMois = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAnnee = (gcnew System::Windows::Forms::TextBox());
			this->labelMois = (gcnew System::Windows::Forms::Label());
			this->labelAnnee = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Personnel
			// 
			this->Personnel->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Personnel->Location = System::Drawing::Point(84, 48);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Size = System::Drawing::Size(75, 23);
			this->Personnel->TabIndex = 0;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = false;
			this->Personnel->Click += gcnew System::EventHandler(this, &MyForm::Personnel_Click);
			// 
			// Client
			// 
			this->Client->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Client->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Client->Location = System::Drawing::Point(195, 48);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(75, 23);
			this->Client->TabIndex = 1;
			this->Client->Text = L"Client";
			this->Client->UseVisualStyleBackColor = false;
			this->Client->Click += gcnew System::EventHandler(this, &MyForm::Client_Click);
			// 
			// Commande
			// 
			this->Commande->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Commande->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Commande->Location = System::Drawing::Point(301, 48);
			this->Commande->Name = L"Commande";
			this->Commande->Size = System::Drawing::Size(75, 23);
			this->Commande->TabIndex = 2;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = false;
			this->Commande->Click += gcnew System::EventHandler(this, &MyForm::Commande_Click);
			// 
			// Produit
			// 
			this->Produit->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Produit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Produit->Location = System::Drawing::Point(409, 48);
			this->Produit->Name = L"Produit";
			this->Produit->Size = System::Drawing::Size(75, 23);
			this->Produit->TabIndex = 3;
			this->Produit->Text = L"Produit";
			this->Produit->UseVisualStyleBackColor = false;
			this->Produit->Click += gcnew System::EventHandler(this, &MyForm::Produit_Click);
			// 
			// Titre
			// 
			this->Titre->AutoSize = true;
			this->Titre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Titre->Location = System::Drawing::Point(247, 9);
			this->Titre->Name = L"Titre";
			this->Titre->Size = System::Drawing::Size(188, 25);
			this->Titre->TabIndex = 4;
			this->Titre->Text = L"Application de vente";
			// 
			// Statistiques
			// 
			this->Statistiques->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Statistiques->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Statistiques->Location = System::Drawing::Point(516, 48);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Size = System::Drawing::Size(75, 23);
			this->Statistiques->TabIndex = 5;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = false;
			this->Statistiques->Click += gcnew System::EventHandler(this, &MyForm::Statistiques_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			//this->dataGridView1->Location = System::Drawing::Point(35, 118);
			this->dataGridView1->Location = System::Drawing::Point(-1000, -1000);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(498, 359);
			this->dataGridView1->TabIndex = 6;
			// 
			// Supprimer_Personnel
			// 
			this->Supprimer_Personnel->BackColor = System::Drawing::Color::Red;
			this->Supprimer_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Supprimer_Personnel->Location = System::Drawing::Point(-1000, -1000);
			this->Supprimer_Personnel->Name = L"Supprimer_Personnel";
			this->Supprimer_Personnel->Size = System::Drawing::Size(75, 23);
			this->Supprimer_Personnel->TabIndex = 9;
			this->Supprimer_Personnel->Text = L"Supprimer";
			this->Supprimer_Personnel->UseVisualStyleBackColor = false;
			this->Supprimer_Personnel->Click += gcnew System::EventHandler(this, &MyForm::Supprimer_Personnel_Click);
			// 
			// Supprimer_Client
			// 
			this->Supprimer_Client->BackColor = System::Drawing::Color::Red;
			this->Supprimer_Client->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Supprimer_Client->Location = System::Drawing::Point(-1000, -1000);
			this->Supprimer_Client->Name = L"Supprimer_Client";
			this->Supprimer_Client->Size = System::Drawing::Size(75, 23);
			this->Supprimer_Client->TabIndex = 9;
			this->Supprimer_Client->Text = L"Supprimer";
			this->Supprimer_Client->UseVisualStyleBackColor = false;
			this->Supprimer_Client->Click += gcnew System::EventHandler(this, &MyForm::Supprimer_Client_Click);
			// 
			// Supprimer_Stock
			// 
			this->Supprimer_Stock->BackColor = System::Drawing::Color::Red;
			this->Supprimer_Stock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Supprimer_Stock->Location = System::Drawing::Point(-1000, -1000);
			this->Supprimer_Stock->Name = L"Supprimer_Stock";
			this->Supprimer_Stock->Size = System::Drawing::Size(75, 23);
			this->Supprimer_Stock->TabIndex = 9;
			this->Supprimer_Stock->Text = L"Supprimer";
			this->Supprimer_Stock->UseVisualStyleBackColor = false;
			this->Supprimer_Stock->Click += gcnew System::EventHandler(this, &MyForm::Supprimer_Stock_Click);
			// 
			// Supprimer_Commande
			// 
			this->Supprimer_Commande->BackColor = System::Drawing::Color::Red;
			this->Supprimer_Commande->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Supprimer_Commande->Location = System::Drawing::Point(-1000, -1000);
			this->Supprimer_Commande->Name = L"Supprimer_Commande";
			this->Supprimer_Commande->Size = System::Drawing::Size(75, 23);
			this->Supprimer_Commande->TabIndex = 9;
			this->Supprimer_Commande->Text = L"Supprimer";
			this->Supprimer_Commande->UseVisualStyleBackColor = false;
			this->Supprimer_Commande->Click += gcnew System::EventHandler(this, &MyForm::Supprimer_Commande_Click);
			// 
			// mode
			// 
			this->mode->AutoSize = true;
			this->mode->Location = System::Drawing::Point(32, 102);
			this->mode->Name = L"mode";
			this->mode->Size = System::Drawing::Size(0, 13);
			this->mode->TabIndex = 8;
			// 
			// Modifier_Personnel
			// 
			this->Modifier_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Modifier_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Modifier_Personnel->Location = System::Drawing::Point(-1000, -1000);
			this->Modifier_Personnel->Name = L"Modifier_Personnel";
			this->Modifier_Personnel->Size = System::Drawing::Size(75, 23);
			this->Modifier_Personnel->TabIndex = 9;
			this->Modifier_Personnel->Text = L"Modifier";
			this->Modifier_Personnel->UseVisualStyleBackColor = false;
			this->Modifier_Personnel->Click += gcnew System::EventHandler(this, &MyForm::Modifier_Personnel_Click);
			// 
			// Modifier_Client
			// 
			this->Modifier_Client->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Modifier_Client->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Modifier_Client->Location = System::Drawing::Point(-1000, -1000);
			this->Modifier_Client->Name = L"Modifier_Client";
			this->Modifier_Client->Size = System::Drawing::Size(75, 23);
			this->Modifier_Client->TabIndex = 9;
			this->Modifier_Client->Text = L"Modifier";
			this->Modifier_Client->UseVisualStyleBackColor = false;
			this->Modifier_Client->Click += gcnew System::EventHandler(this, &MyForm::Modifier_Client_Click);
			// 
			// Modifier_Stock
			// 
			this->Modifier_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Modifier_Stock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Modifier_Stock->Location = System::Drawing::Point(-1000, -1000);
			this->Modifier_Stock->Name = L"Modifier_Stock";
			this->Modifier_Stock->Size = System::Drawing::Size(75, 23);
			this->Modifier_Stock->TabIndex = 9;
			this->Modifier_Stock->Text = L"Modifier";
			this->Modifier_Stock->UseVisualStyleBackColor = false;
			this->Modifier_Stock->Click += gcnew System::EventHandler(this, &MyForm::Modifier_Stock_Click);
			// 
			// Modifier_Commande
			// 
			this->Modifier_Commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Modifier_Commande->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Modifier_Commande->Location = System::Drawing::Point(-1000, -1000);
			this->Modifier_Commande->Name = L"Modifier_Commande";
			this->Modifier_Commande->Size = System::Drawing::Size(75, 23);
			this->Modifier_Commande->TabIndex = 9;
			this->Modifier_Commande->Text = L"Modifier";
			this->Modifier_Commande->UseVisualStyleBackColor = false;
			this->Modifier_Commande->Click += gcnew System::EventHandler(this, &MyForm::Modifier_Commande_Click);
			// 
			// Ajouter_Personnel
			// 
			this->Ajouter_Personnel->BackColor = System::Drawing::Color::Lime;
			this->Ajouter_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ajouter_Personnel->Location = System::Drawing::Point(-1000, -1000);
			this->Ajouter_Personnel->Name = L"Ajouter_Personnel";
			this->Ajouter_Personnel->Size = System::Drawing::Size(75, 23);
			this->Ajouter_Personnel->TabIndex = 10;
			this->Ajouter_Personnel->Text = L"Ajouter";
			this->Ajouter_Personnel->UseVisualStyleBackColor = false;
			this->Ajouter_Personnel->Click += gcnew System::EventHandler(this, &MyForm::Ajouter_Personnel_Click);
			// 
			// Ajouter_Client
			// 
			this->Ajouter_Client->BackColor = System::Drawing::Color::Lime;
			this->Ajouter_Client->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ajouter_Client->Location = System::Drawing::Point(-1000, -1000);
			this->Ajouter_Client->Name = L"Ajouter_Client";
			this->Ajouter_Client->Size = System::Drawing::Size(75, 23);
			this->Ajouter_Client->TabIndex = 10;
			this->Ajouter_Client->Text = L"Ajouter";
			this->Ajouter_Client->UseVisualStyleBackColor = false;
			this->Ajouter_Client->Click += gcnew System::EventHandler(this, &MyForm::Ajouter_Client_Click);
			// 
			// Ajouter_Commande
			// 
			this->Ajouter_Commande->BackColor = System::Drawing::Color::Lime;
			this->Ajouter_Commande->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ajouter_Commande->Location = System::Drawing::Point(-1000, -1000);
			this->Ajouter_Commande->Name = L"Ajouter_Commande";
			this->Ajouter_Commande->Size = System::Drawing::Size(75, 23);
			this->Ajouter_Commande->TabIndex = 10;
			this->Ajouter_Commande->Text = L"Ajouter";
			this->Ajouter_Commande->UseVisualStyleBackColor = false;
			this->Ajouter_Commande->Click += gcnew System::EventHandler(this, &MyForm::Ajouter_Commande_Click);
			// 
			// Ajouter_Produit
			// 
			this->Ajouter_Produit->BackColor = System::Drawing::Color::Lime;
			this->Ajouter_Produit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ajouter_Produit->Location = System::Drawing::Point(-1000, -1000);
			this->Ajouter_Produit->Name = L"Ajouter_Produit";
			this->Ajouter_Produit->Size = System::Drawing::Size(75, 23);
			this->Ajouter_Produit->TabIndex = 10;
			this->Ajouter_Produit->Text = L"Ajouter";
			this->Ajouter_Produit->UseVisualStyleBackColor = false;
			this->Ajouter_Produit->Click += gcnew System::EventHandler(this, &MyForm::Ajouter_Produit_Click);
			// 
			// Descendre
			// 
			this->Descendre->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Descendre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Descendre->Location = System::Drawing::Point(-1000, -1000);
			this->Descendre->Name = L"Descendre";
			this->Descendre->Size = System::Drawing::Size(23, 23);
			this->Descendre->TabIndex = 11;
			this->Descendre->Text = L"v";
			this->Descendre->UseVisualStyleBackColor = false;
			this->Descendre->Click += gcnew System::EventHandler(this, &MyForm::Descendre_Click);
			// 
			// Monter
			// 
			this->Monter->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Monter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Monter->Location = System::Drawing::Point(-1000, -1000);
			this->Monter->Name = L"Monter";
			this->Monter->Size = System::Drawing::Size(23, 23);
			this->Monter->TabIndex = 12;
			this->Monter->Text = L"^";
			this->Monter->UseVisualStyleBackColor = false;
			this->Monter->Click += gcnew System::EventHandler(this, &MyForm::Monter_Click);
			// 
			// Afficher_Personnel
			// 
			this->Afficher_Personnel->BackColor = System::Drawing::SystemColors::Highlight;
			this->Afficher_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Afficher_Personnel->Location = System::Drawing::Point(-1000, -1000);
			this->Afficher_Personnel->Name = L"Afficher_Personnel";
			this->Afficher_Personnel->Size = System::Drawing::Size(75, 23);
			this->Afficher_Personnel->TabIndex = 9;
			this->Afficher_Personnel->Text = L"Afficher";
			this->Afficher_Personnel->UseVisualStyleBackColor = false;
			this->Afficher_Personnel->Click += gcnew System::EventHandler(this, &MyForm::Afficher_Personnel_Click);
			// 
			// Afficher_Client
			// 
			this->Afficher_Client->BackColor = System::Drawing::SystemColors::Highlight;
			this->Afficher_Client->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Afficher_Client->Location = System::Drawing::Point(-1000, -1000);
			this->Afficher_Client->Name = L"Afficher_Client";
			this->Afficher_Client->Size = System::Drawing::Size(75, 23);
			this->Afficher_Client->TabIndex = 9;
			this->Afficher_Client->Text = L"Afficher";
			this->Afficher_Client->UseVisualStyleBackColor = false;
			this->Afficher_Client->Click += gcnew System::EventHandler(this, &MyForm::Afficher_Client_Click);
			// 
			// Afficher_Stock
			// 
			this->Afficher_Stock->BackColor = System::Drawing::SystemColors::Highlight;
			this->Afficher_Stock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Afficher_Stock->Location = System::Drawing::Point(-1000, -1000);
			this->Afficher_Stock->Name = L"Afficher_Stock";
			this->Afficher_Stock->Size = System::Drawing::Size(75, 23);
			this->Afficher_Stock->TabIndex = 9;
			this->Afficher_Stock->Text = L"Afficher";
			this->Afficher_Stock->UseVisualStyleBackColor = false;
			this->Afficher_Stock->Click += gcnew System::EventHandler(this, &MyForm::Afficher_Stock_Click);
			// 
			// Afficher_Commande
			// 
			this->Afficher_Commande->BackColor = System::Drawing::SystemColors::Highlight;
			this->Afficher_Commande->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Afficher_Commande->Location = System::Drawing::Point(-1000, -1000);
			this->Afficher_Commande->Name = L"Afficher_Commande";
			this->Afficher_Commande->Size = System::Drawing::Size(75, 23);
			this->Afficher_Commande->TabIndex = 9;
			this->Afficher_Commande->Text = L"Afficher";
			this->Afficher_Commande->UseVisualStyleBackColor = false;
			this->Afficher_Commande->Click += gcnew System::EventHandler(this, &MyForm::Afficher_Commande_Click);
			// 
			// AfficherPanier
			// 
			this->AfficherPanier->BackColor = System::Drawing::Color::Yellow;
			this->AfficherPanier->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AfficherPanier->Location = System::Drawing::Point(-1000, -1000);
			this->AfficherPanier->Name = L"AfficherPanier";
			this->AfficherPanier->Size = System::Drawing::Size(75, 23);
			this->AfficherPanier->TabIndex = 13;
			this->AfficherPanier->Text = L"Ajouter_Panier";
			this->AfficherPanier->UseVisualStyleBackColor = false;
			this->AfficherPanier->Click += gcnew System::EventHandler(this, &MyForm::AfficherPanier_Click);
			// 
			// panier
			// 
			this->panier->BackColor = System::Drawing::Color::Purple;
			this->panier->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->panier->Location = System::Drawing::Point(-1000, -1000);
			this->panier->Name = L"panier";
			this->panier->Size = System::Drawing::Size(75, 23);
			this->panier->TabIndex = 13;
			this->panier->Text = L"Panier";
			this->panier->UseVisualStyleBackColor = false;
			this->panier->Click += gcnew System::EventHandler(this, &MyForm::Panier_Click);
			// 
			// id_select
			// 
			this->id_select->AutoSize = true;
			this->id_select->Location = System::Drawing::Point(492, 102);
			this->id_select->Name = L"id_select";
			this->id_select->Size = System::Drawing::Size(0, 13);
			this->id_select->TabIndex = 14;
			// 
			// PanierMoyen
			// 
			this->PanierMoyen->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->PanierMoyen->Location = System::Drawing::Point(-750, -812);
			this->PanierMoyen->Margin = System::Windows::Forms::Padding(2);
			this->PanierMoyen->Name = L"PanierMoyen";
			this->PanierMoyen->Size = System::Drawing::Size(130, 40);
			this->PanierMoyen->TabIndex = 15;
			this->PanierMoyen->Text = L"Panier Moyen";
			this->PanierMoyen->UseVisualStyleBackColor = false;
			this->PanierMoyen->Click += gcnew System::EventHandler(this, &MyForm::PanierMoyen_Click);
			// 
			// ChiffreAffaire
			// 
			this->ChiffreAffaire->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ChiffreAffaire->Location = System::Drawing::Point(-750, -812);
			this->ChiffreAffaire->Margin = System::Windows::Forms::Padding(2);
			this->ChiffreAffaire->Name = L"ChiffreAffaire";
			this->ChiffreAffaire->Size = System::Drawing::Size(130, 40);
			this->ChiffreAffaire->TabIndex = 16;
			this->ChiffreAffaire->Text = L"Chiffre d\'affaire d\'un mois";
			this->ChiffreAffaire->UseVisualStyleBackColor = false;
			this->ChiffreAffaire->Click += gcnew System::EventHandler(this, &MyForm::ChiffreAffaire_Click);
			// 
			// seuilReapp
			// 
			this->seuilReapp->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->seuilReapp->Location = System::Drawing::Point(-750, -812);
			this->seuilReapp->Margin = System::Windows::Forms::Padding(2);
			this->seuilReapp->Name = L"seuilReapp";
			this->seuilReapp->Size = System::Drawing::Size(130, 40);
			this->seuilReapp->TabIndex = 17;
			this->seuilReapp->Text = L"Produit sous le seuil de reapprovisionnement";
			this->seuilReapp->UseVisualStyleBackColor = false;
			this->seuilReapp->Click += gcnew System::EventHandler(this, &MyForm::seuilReapp_Click);
			// 
			// TotalAchat
			// 
			this->TotalAchat->Location = System::Drawing::Point(-750, -812);
			this->TotalAchat->Margin = System::Windows::Forms::Padding(2);
			this->TotalAchat->Name = L"TotalAchat";
			this->TotalAchat->Size = System::Drawing::Size(130, 40);
			this->TotalAchat->TabIndex = 18;
			this->TotalAchat->Text = L"Total achat pour un client";
			this->TotalAchat->UseVisualStyleBackColor = true;
			this->TotalAchat->Click += gcnew System::EventHandler(this, &MyForm::TotalAchat_Click);
			// 
			// Top10
			// 
			this->Top10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Top10->Location = System::Drawing::Point(-750, -812);
			this->Top10->Margin = System::Windows::Forms::Padding(2);
			this->Top10->Name = L"Top10";
			this->Top10->Size = System::Drawing::Size(130, 40);
			this->Top10->TabIndex = 19;
			this->Top10->Text = L"Les 10 articles les plus vendus";
			this->Top10->UseVisualStyleBackColor = true;
			this->Top10->Click += gcnew System::EventHandler(this, &MyForm::Top10_Click);
			// 
			// Simulations
			// 
			this->Simulations->Location = System::Drawing::Point(-750, -812);
			this->Simulations->Margin = System::Windows::Forms::Padding(2);
			this->Simulations->Name = L"Simulations";
			this->Simulations->Size = System::Drawing::Size(130, 40);
			this->Simulations->TabIndex = 20;
			this->Simulations->Text = L"SImulation de variations commerciales";
			this->Simulations->UseVisualStyleBackColor = true;
			this->Simulations->Click += gcnew System::EventHandler(this, &MyForm::Simulations_Click);
			// 
			// Bot10
			// 
			this->Bot10->Location = System::Drawing::Point(-750, -812);
			this->Bot10->Margin = System::Windows::Forms::Padding(2);
			this->Bot10->Name = L"Bot10";
			this->Bot10->Size = System::Drawing::Size(130, 40);
			this->Bot10->TabIndex = 21;
			this->Bot10->Text = L"Les 10 articles les moins vendus";
			this->Bot10->UseVisualStyleBackColor = true;
			this->Bot10->Click += gcnew System::EventHandler(this, &MyForm::Bot10_Click);
			// 
			// ValeurCommerciale
			// 
			this->ValeurCommerciale->Location = System::Drawing::Point(-750, -812);
			this->ValeurCommerciale->Margin = System::Windows::Forms::Padding(2);
			this->ValeurCommerciale->Name = L"ValeurCommerciale";
			this->ValeurCommerciale->Size = System::Drawing::Size(130, 40);
			this->ValeurCommerciale->TabIndex = 22;
			this->ValeurCommerciale->Text = L"Valeur commerciale du stock";
			this->ValeurCommerciale->UseVisualStyleBackColor = true;
			this->ValeurCommerciale->Click += gcnew System::EventHandler(this, &MyForm::ValeurCommerciale_Click);
			// 
			// ValeurAchat
			// 
			this->ValeurAchat->Location = System::Drawing::Point(-750, -812);
			this->ValeurAchat->Margin = System::Windows::Forms::Padding(2);
			this->ValeurAchat->Name = L"ValeurAchat";
			this->ValeurAchat->Size = System::Drawing::Size(130, 40);
			this->ValeurAchat->TabIndex = 23;
			this->ValeurAchat->Text = L"Valeur achat du stock";
			this->ValeurAchat->UseVisualStyleBackColor = true;
			this->ValeurAchat->Click += gcnew System::EventHandler(this, &MyForm::ValeurAchat_Click);
			// 
			// textBoxMois
			// 
			this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
			this->textBoxMois->Name = L"textBoxMois";
			this->textBoxMois->Size = System::Drawing::Size(55, 20);
			this->textBoxMois->TabIndex = 24;
			// 
			// textBoxAnnee
			// 
			this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
			this->textBoxAnnee->Name = L"textBoxAnnee";
			this->textBoxAnnee->Size = System::Drawing::Size(53, 20);
			this->textBoxAnnee->TabIndex = 25;
			// 
			// labelMois
			// 
			this->labelMois->AutoSize = true;
			this->labelMois->Location = System::Drawing::Point(352, 76);
			this->labelMois->Name = L"labelMois";
			this->labelMois->Size = System::Drawing::Size(0, 13);
			this->labelMois->TabIndex = 26;
			// 
			// labelAnnee
			// 
			this->labelAnnee->AutoSize = true;
			this->labelAnnee->Location = System::Drawing::Point(466, 76);
			this->labelAnnee->Name = L"labelAnnee";
			this->labelAnnee->Size = System::Drawing::Size(0, 13);
			this->labelAnnee->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(691, 488);
			this->Controls->Add(this->labelAnnee);
			this->Controls->Add(this->labelMois);
			this->Controls->Add(this->textBoxAnnee);
			this->Controls->Add(this->textBoxMois);
			this->Controls->Add(this->ValeurAchat);
			this->Controls->Add(this->ValeurCommerciale);
			this->Controls->Add(this->Bot10);
			this->Controls->Add(this->Simulations);
			this->Controls->Add(this->Top10);
			this->Controls->Add(this->TotalAchat);
			this->Controls->Add(this->seuilReapp);
			this->Controls->Add(this->ChiffreAffaire);
			this->Controls->Add(this->PanierMoyen);
			this->Controls->Add(this->id_select);
			this->Controls->Add(this->Afficher_Personnel);
			this->Controls->Add(this->Afficher_Client);
			this->Controls->Add(this->Afficher_Stock);
			this->Controls->Add(this->Afficher_Commande);
			this->Controls->Add(this->Monter);
			this->Controls->Add(this->Descendre);
			this->Controls->Add(this->Ajouter_Personnel);
			this->Controls->Add(this->Ajouter_Client);
			this->Controls->Add(this->Ajouter_Commande);
			this->Controls->Add(this->Ajouter_Produit);
			this->Controls->Add(this->Modifier_Personnel);
			this->Controls->Add(this->Modifier_Client);
			this->Controls->Add(this->Modifier_Stock);
			this->Controls->Add(this->Modifier_Commande);
			this->Controls->Add(this->mode);
			this->Controls->Add(this->Supprimer_Personnel);
			this->Controls->Add(this->Supprimer_Client);
			this->Controls->Add(this->Supprimer_Stock);
			this->Controls->Add(this->Supprimer_Commande);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Statistiques);
			this->Controls->Add(this->Titre);
			this->Controls->Add(this->Produit);
			this->Controls->Add(this->Commande);
			this->Controls->Add(this->Client);
			this->Controls->Add(this->Personnel);
			this->Controls->Add(this->panier);
			this->Controls->Add(this->AfficherPanier);
			this->Location = System::Drawing::Point(516, 114);
			this->Name = L"MyForm";
			this->Text = L"Projet POO groupe4";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode->Text = "Gestion de personnel";
	this->dataGridView1->Location = System::Drawing::Point(35, 118);
	this->Ajouter_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Produit->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Personnel->Location = System::Drawing::Point(600, 118);
	this->Modifier_Personnel->Location = System::Drawing::Point(600, 163);
	this->Modifier_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Personnel->Location = System::Drawing::Point(600, 208);
	this->Supprimer_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Personnel->Location = System::Drawing::Point(600, 257);
	this->Afficher_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Monter->Location = System::Drawing::Point(549, 163);
	this->Descendre->Location = System::Drawing::Point(549, 209);
	this->AfficherPanier->Location = System::Drawing::Point(-1000, -1000);
	this->panier->Location = System::Drawing::Point(-1000, -1000);
	this->PanierMoyen->Location = System::Drawing::Point(-1000, -1000);
	this->ChiffreAffaire->Location = System::Drawing::Point(-1000, -1000);
	this->seuilReapp->Location = System::Drawing::Point(-1000, -1000);
	this->TotalAchat->Location = System::Drawing::Point(-1000, -1000);
	this->Top10->Location = System::Drawing::Point(-1000, -1000);
	this->Simulations->Location = System::Drawing::Point(-1000, -1000);
	this->Bot10->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurCommerciale->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurAchat->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Personnel_Gestion perso;
	this->dataGridView1->DataSource = perso.listePersonnel("Personnel");
	this->dataGridView1->DataMember = "Personnel";
	this->dataGridView1->Rows[0]->Selected = true;
	selection = 0;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;
	}
private: System::Void Client_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode->Text = "Gestion de clients";
	this->dataGridView1->Location = System::Drawing::Point(35, 118);
	this->Ajouter_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Produit->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Client->Location = System::Drawing::Point(600, 118);
	this->Modifier_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Client->Location = System::Drawing::Point(600, 163);
	this->Modifier_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Client->Location = System::Drawing::Point(600, 208);
	this->Supprimer_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Client->Location = System::Drawing::Point(600, 257);
	this->Afficher_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Monter->Location = System::Drawing::Point(549, 163);
	this->Descendre->Location = System::Drawing::Point(549, 209);
	this->AfficherPanier->Location = System::Drawing::Point(-1000, -1000);
	this->panier->Location = System::Drawing::Point(-1000, -1000);
	this->PanierMoyen->Location = System::Drawing::Point(-1000, -1000);
	this->ChiffreAffaire->Location = System::Drawing::Point(-1000, -1000);
	this->seuilReapp->Location = System::Drawing::Point(-1000, -1000);
	this->TotalAchat->Location = System::Drawing::Point(-1000, -1000);
	this->Top10->Location = System::Drawing::Point(-1000, -1000);
	this->Simulations->Location = System::Drawing::Point(-1000, -1000);
	this->Bot10->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurCommerciale->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurAchat->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Client_Gestion client;
	this->dataGridView1->DataSource = client.listeClient("Client");
	this->dataGridView1->DataMember = "Client";
	this->dataGridView1->Rows[0]->Selected = true;
	selection = 0;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;

}
private: System::Void Commande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode->Text = "Gestion de commandes";
	this->dataGridView1->Location = System::Drawing::Point(35, 118);
	this->Ajouter_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Produit->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Commande->Location = System::Drawing::Point(600, 118);
	this->Modifier_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Commande->Location = System::Drawing::Point(600, 163);
	this->Supprimer_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Commande->Location = System::Drawing::Point(600, 208);	
	this->Afficher_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Commande->Location = System::Drawing::Point(600, 257);
	this->Monter->Location = System::Drawing::Point(549, 163);
	this->Descendre->Location = System::Drawing::Point(549, 209);
	this->AfficherPanier->Location = System::Drawing::Point(-1000, -1000);
	this->panier->Location = System::Drawing::Point(-1000, -1000);
	this->PanierMoyen->Location = System::Drawing::Point(-1000, -1000);
	this->ChiffreAffaire->Location = System::Drawing::Point(-1000, -1000);
	this->seuilReapp->Location = System::Drawing::Point(-1000, -1000);
	this->TotalAchat->Location = System::Drawing::Point(-1000, -1000);
	this->Top10->Location = System::Drawing::Point(-1000, -1000);
	this->Simulations->Location = System::Drawing::Point(-1000, -1000);
	this->Bot10->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurCommerciale->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurAchat->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Commande_Gestion commande;
	this->dataGridView1->DataSource = commande.listeCommande("Commande");
	this->dataGridView1->DataMember = "Commande";
	selection = 0;
	this->dataGridView1->Rows[0]->Selected = true;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;
}
private: System::Void Produit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode->Text = "Gestion de produits";
	this->dataGridView1->Location = System::Drawing::Point(35, 118);
	this->Ajouter_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Produit->Location = System::Drawing::Point(600, 118);
	this->Modifier_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Stock->Location = System::Drawing::Point(600, 163);
	this->Modifier_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Stock->Location = System::Drawing::Point(600, 208);
	this->Supprimer_Commande->Location = System::Drawing::Point(-1000, -1000);	
	this->Afficher_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Stock->Location = System::Drawing::Point(600, 257);
	this->Afficher_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->AfficherPanier->Location = System::Drawing::Point(600, 303);
	this->panier->Location = System::Drawing::Point(600, 349);
	this->Monter->Location = System::Drawing::Point(549, 163);
	this->Descendre->Location = System::Drawing::Point(549, 209);
	this->PanierMoyen->Location = System::Drawing::Point(-1000, -1000);
	this->ChiffreAffaire->Location = System::Drawing::Point(-1000, -1000);
	this->seuilReapp->Location = System::Drawing::Point(-1000, -1000);
	this->TotalAchat->Location = System::Drawing::Point(-1000, -1000);
	this->Top10->Location = System::Drawing::Point(-1000, -1000);
	this->Simulations->Location = System::Drawing::Point(-1000, -1000);
	this->Bot10->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurCommerciale->Location = System::Drawing::Point(-1000, -1000);
	this->ValeurAchat->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	//this->id_select->Location = System::Drawing::Point(492, 102);
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.listeStock("Stock");
	this->dataGridView1->DataMember = "Stock";
	this->dataGridView1->Rows[0]->Selected = true;
	selection = 0;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;
}
private: System::Void Statistiques_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode->Text = "Statistiques";
	this->dataGridView1->Location = System::Drawing::Point(35, 118);
	this->Ajouter_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Ajouter_Produit->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Modifier_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Supprimer_Commande->Location = System::Drawing::Point(-1000, -1000);	
	this->Afficher_Personnel->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Client->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Stock->Location = System::Drawing::Point(-1000, -1000);
	this->Afficher_Commande->Location = System::Drawing::Point(-1000, -1000);
	this->Monter->Location = System::Drawing::Point(-1000, -1000);
	this->Descendre->Location = System::Drawing::Point(-1000, -1000);
	this->AfficherPanier->Location = System::Drawing::Point(-1000, -1000);
	this->panier->Location = System::Drawing::Point(-1000, -1000);
	this->PanierMoyen->Location = System::Drawing::Point(545, 104);
	this->ChiffreAffaire->Location = System::Drawing::Point(545, 144);
	this->seuilReapp->Location = System::Drawing::Point(545, 184);
	this->TotalAchat->Location = System::Drawing::Point(545, 224);
	this->Top10->Location = System::Drawing::Point(545, 264);
	this->Simulations->Location = System::Drawing::Point(545, 424);
	this->Bot10->Location = System::Drawing::Point(545, 304);
	this->ValeurCommerciale->Location = System::Drawing::Point(545, 384);
	this->ValeurAchat->Location = System::Drawing::Point(545, 344);

	//this->id_select->Location = System::Drawing::Point(-1000, 1000);
	this->id_select->Text = "";

}

private: System::Void Panier_Click(System::Object^ sender, System::EventArgs^ e) {
	Panier^ panie = gcnew Panier();
	panie->Show();
}
private: System::Void AfficherPanier_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_stock = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prix_ht_stock = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	int nombre_exemplaire_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[3]->Value);
	String^ Conversion_Virgule = prix_ht_stock->Replace(".", ",");
	float CalculTTC = (float)(Convert::ToDouble(Conversion_Virgule) * 1.2);
	float Arrondir = round(CalculTTC * 100) / 100;
	String^ Conversion_String = Convert::ToString(Arrondir);
	String^ Conversion_Point = Conversion_String->Replace(",", ".");
	String^ PrixTTC = Conversion_String;
	int quantite_pour_remise_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[4]->Value);
	String^ pourcentage_remise_stock = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	int id_couleur_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[6]->Value);
	int seuil_reappro_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[7]->Value);
	MyForm1^ Forms2 = gcnew MyForm1(id.ToString(), nom_stock, prix_ht_stock, nombre_exemplaire_stock, quantite_pour_remise_stock, pourcentage_remise_stock, id_couleur_stock, seuil_reappro_stock, PrixTTC); // Commande pour ouvrir fen�tre validation ajout commande;

	Forms2->Show();


}
private: System::Void Afficher_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_personnel = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prenom_personnel = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	int id_superieur = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[3]->Value);
	String^ numero = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ rue = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ ville = dataGridView1->Rows[selection]->Cells[7]->Value->ToString();
	String^ cp = dataGridView1->Rows[selection]->Cells[8]->Value->ToString();
	String^ date_embauche;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_embauche += temp_date[i];
	}

	Personnel_form^ Perso = gcnew Personnel_form(" " + id.ToString(), nom_personnel, prenom_personnel, date_embauche, id_superieur.ToString(), numero, rue, ville, cp);
	Perso->Show();
}
private: System::Void Afficher_Client_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_client = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prenom_client = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp1_date = dataGridView1->Rows[selection]->Cells[3]->Value->ToString();
	String^ temp2_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	String^ numero = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ rue = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ ville = dataGridView1->Rows[selection]->Cells[7]->Value->ToString();
	String^ cp = dataGridView1->Rows[selection]->Cells[8]->Value->ToString();
	String^ date_naissance;
	String^ date_premier_achat;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_naissance += temp1_date[i];
	}
	for (int j = 0; j < 10; j++) {  //pour enlever l'heure de la date
		date_premier_achat += temp2_date[j];
	}

	Client_form^ Clie = gcnew Client_form(" " + id.ToString(), nom_client, prenom_client, date_naissance, date_premier_achat, numero, rue, ville, cp);
	Clie->Show();
}
private: System::Void Afficher_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_stock = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prix_ht_stock = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	int nombre_exemplaire_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[3]->Value);
	int quantite_pour_remise_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[4]->Value);
	String^ pourcentage_remise_stock = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	int id_couleur_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[6]->Value);
	int seuil_reappro_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[7]->Value);

	Stock_forms^ StockForms = gcnew Stock_forms(" " + id.ToString(), nom_stock, prix_ht_stock, nombre_exemplaire_stock.ToString(), quantite_pour_remise_stock.ToString(), pourcentage_remise_stock, id_couleur_stock.ToString(), seuil_reappro_stock.ToString());

	StockForms->Show();


	//Panier^ Panier1 = gcnew Panier();
	//Panier1->Show();

}
private: System::Void Afficher_Commande_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id_commande = dataGridView1->Rows[selection]->Cells[0]->Value->ToString();
	String^ reference = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ numero_client = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp1_date = dataGridView1->Rows[selection]->Cells[3]->Value->ToString();
	String^ temp2_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	String^ id_adresse_facturation = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ id_adresse_livraison = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ date_livraison;
	String^ date_emission;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_livraison += temp1_date[i];
	}
	for (int j = 0; j < 10; j++) {  //pour enlever l'heure de la date
		date_emission += temp2_date[j];
	}

	Commande_Forms^ CommandeF = gcnew Commande_Forms(id_commande," "+ reference, numero_client, date_livraison, date_emission, id_adresse_facturation, id_adresse_livraison);
	CommandeF->Show();


}
private: System::Void Ajouter_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	Personnel_form^ Perso = gcnew Personnel_form("", "", "", "", "", "", "", "", "");
	Perso->Show();
}
private: System::Void Ajouter_Client_Click(System::Object^ sender, System::EventArgs^ e) {
	Client_form^ Clie = gcnew Client_form("", "", "", "", "", "", "", "", "");
	Clie->Show();
}
private: System::Void Ajouter_Commande_Click(System::Object^ sender, System::EventArgs^ e) {
	Commande_Forms^ CommandeF = gcnew Commande_Forms("", "", "", "", "", "", "");
	CommandeF->Show();
}
private: System::Void Ajouter_Produit_Click(System::Object^ sender, System::EventArgs^ e) {

	Stock_forms^ StockForms = gcnew Stock_forms("", "", "", "", "", "", "", "");

	StockForms->Show();
}

private: System::Void Modifier_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_personnel = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prenom_personnel = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	int id_superieur = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[3]->Value);
	String^ numero = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ rue = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ ville = dataGridView1->Rows[selection]->Cells[7]->Value->ToString();
	String^ cp = dataGridView1->Rows[selection]->Cells[8]->Value->ToString();
	String^ date_embauche;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_embauche += temp_date[i];
	}
	//NS_Composants::Personnel_Tableau temp;
	//int a = id;
	//temp.setID_personnel(id);
	//temp.setNom_personnel(nom_personnel);
	//temp.setPrenom_personnel(prenom_personnel);
	//temp.setDateEmbauche(date_embauche);
	//temp.setID_superieur(id_superieur);
	//Personnel_Gestion tempo;
	//tempo.modifier(a, nom_personnel, prenom_personnel, date_embauche, id_superieur);
	//this->mode->Text = temp.getNom_personnel();

	Personnel_form^ Perso = gcnew Personnel_form(id.ToString(), nom_personnel, prenom_personnel, date_embauche, id_superieur.ToString(), numero, rue, ville, cp);
	Perso->Show();
}
private: System::Void Modifier_Client_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_client = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prenom_client = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp1_date = dataGridView1->Rows[selection]->Cells[3]->Value->ToString();
	String^ temp2_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	String^ numero = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ rue = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ ville = dataGridView1->Rows[selection]->Cells[7]->Value->ToString();
	String^ cp = dataGridView1->Rows[selection]->Cells[8]->Value->ToString();
	String^ date_naissance;
	String^ date_premier_achat;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_naissance += temp1_date[i];
	}
	for (int j = 0; j < 10; j++) {  //pour enlever l'heure de la date
		date_premier_achat += temp2_date[j];
	}

	Client_form^ Clie = gcnew Client_form(id.ToString(), nom_client, prenom_client, date_naissance, date_premier_achat, numero, rue, ville, cp);
	Clie->Show();

}
private: System::Void Modifier_Stock_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ nom_stock = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prix_ht_stock = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	int nombre_exemplaire_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[3]->Value);
	int quantite_pour_remise_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[4]->Value);
	String^ pourcentage_remise_stock = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	int id_couleur_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[6]->Value);
	int seuil_reappro_stock = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[7]->Value);

	Stock_forms^ StockForms = gcnew Stock_forms(id.ToString(), nom_stock, prix_ht_stock, nombre_exemplaire_stock.ToString(), quantite_pour_remise_stock.ToString(), pourcentage_remise_stock, id_couleur_stock.ToString(), seuil_reappro_stock.ToString());

	StockForms->Show();

}
private: System::Void Modifier_Commande_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id_commande = dataGridView1->Rows[selection]->Cells[0]->Value->ToString();
	String^ reference = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ numero_client = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp1_date = dataGridView1->Rows[selection]->Cells[3]->Value->ToString();
	String^ temp2_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	String^ id_adresse_facturation = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ id_adresse_livraison = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ date_livraison;
	String^ date_emission;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_livraison += temp1_date[i];
	}
	for (int j = 0; j < 10; j++) {  //pour enlever l'heure de la date
		date_emission += temp2_date[j];
	}
	Commande_Forms^ CommandeF = gcnew Commande_Forms(id_commande, reference, numero_client, date_livraison, date_emission, id_adresse_facturation, id_adresse_livraison);
	CommandeF->Show();

}

private: System::Void Supprimer_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_personnel = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prenom_personnel = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	int id_superieur = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[3]->Value);
	int numero = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[5]->Value);
	String^ rue = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ ville = dataGridView1->Rows[selection]->Cells[7]->Value->ToString();
	int cp = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[8]->Value);
	String^ date_embauche;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_embauche += temp_date[i];
	}
	int choix = 0;
	Personne_Gestion per;
	per.supprimer(id, choix);

	Personnel_Tableau temp;
	temp.setID_personnel(id);
	Personnel_Gestion perso;
	perso.supprimer(id);

	Adresse_Gestion ad;
	ad.supprimer(numero, rue, ville, cp);

	selection = 0;
	this->dataGridView1->DataSource = perso.listePersonnel("Personnel");
	this->dataGridView1->DataMember = "Personnel";
	this->dataGridView1->Rows[0]->Selected = true;
}
private: System::Void Supprimer_Client_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom_client = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ prenom_client = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp1_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	String^ temp2_date = dataGridView1->Rows[selection]->Cells[3]->Value->ToString();
	int numero = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[5]->Value);
	String^ rue = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ ville = dataGridView1->Rows[selection]->Cells[7]->Value->ToString();
	int cp = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[8]->Value);
	String^ date_naissance;
	String^ date_premier_achat;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_naissance += temp1_date[i];
	}
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_premier_achat += temp2_date[i];
	}
	int choix = 1;
	Personne_Gestion per;
	per.supprimer(id, choix);

	Client_Tableau temp;
	temp.setID_client(id);
	Client_Gestion perso;
	perso.supprimer(id);

	Adresse_Gestion ad;
	ad.supprimer(numero, rue, ville, cp);

	selection = 0;
	this->dataGridView1->DataSource = perso.listeClient("Client");
	this->dataGridView1->DataMember = "Client";
	this->dataGridView1->Rows[0]->Selected = true;
}
private: System::Void Supprimer_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock_Tableau temp;
	temp.set_Reference(id);
	Stock_Gestion stock;
	stock.supprimer(id);
	selection = 0;
	this->dataGridView1->DataSource = stock.listeStock("Stock");
	this->dataGridView1->DataMember = "Stock";
	this->dataGridView1->Rows[0]->Selected = true;
}
private: System::Void Supprimer_Commande_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id_commande = dataGridView1->Rows[selection]->Cells[0]->Value->ToString();
	String^ reference = dataGridView1->Rows[selection]->Cells[1]->Value->ToString();
	String^ numero_client = dataGridView1->Rows[selection]->Cells[2]->Value->ToString();
	String^ temp1_date = dataGridView1->Rows[selection]->Cells[3]->Value->ToString();
	String^ temp2_date = dataGridView1->Rows[selection]->Cells[4]->Value->ToString();
	String^ id_adresse_facturation = dataGridView1->Rows[selection]->Cells[5]->Value->ToString();
	String^ id_adresse_livraison = dataGridView1->Rows[selection]->Cells[6]->Value->ToString();
	String^ date_livraison;
	String^ date_emission;
	for (int i = 0; i < 10; i++) {  //pour enlever l'heure de la date
		date_livraison += temp1_date[i];
	}
	for (int j = 0; j < 10; j++) {  //pour enlever l'heure de la date
		date_emission += temp2_date[j];
	}
	Article_Gestion tempo;
	tempo.supprimer(id);
	Commande_Tableau temp;
	temp.setId_commande(id);
	Commande_Gestion commande;
	commande.supprimer(id);
	selection = 0;
	this->dataGridView1->DataSource = commande.listeCommande("Commande");
	this->dataGridView1->DataMember = "Commande";
	this->dataGridView1->Rows[0]->Selected = true;
	this->dataGridView1->Rows[selection]->Selected = true;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;
}
private: System::Void Monter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Rows[selection]->Selected = false;
	if (selection > 0) {
		selection -= 1;
	}
	this->dataGridView1->Rows[selection]->Selected = true;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;

}
private: System::Void Descendre_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Rows[selection]->Selected = false;
	if (Convert::ToInt32(dataGridView1->Rows[selection+1]->Cells[0]->Value) != NULL) {
		selection += 1;
	}

	this->dataGridView1->Rows[selection]->Selected = true;
	id = Convert::ToInt32(dataGridView1->Rows[selection]->Cells[0]->Value);
	this->id_select->Text = "id = " + id;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void PanierMoyen_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.panier_moyen("Stock");
	this->dataGridView1->DataMember = "Stock";
}
private: System::Void ChiffreAffaire_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->labelMois->Text = "Mois";
	this->labelAnnee->Text = "Annee";
	this->textBoxMois->Location = System::Drawing::Point(355, 92);
	this->textBoxAnnee->Location = System::Drawing::Point(469, 92);
	String^ mois = textBoxMois->Text;
	String^ annee = textBoxAnnee->Text;
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.chiffre_affaire(mois, annee, "Stock");
	this->dataGridView1->DataMember = "Stock";
}
private: System::Void seuilReapp_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.seuil("Stock");
	this->dataGridView1->DataMember = "Stock";

}
private: System::Void TotalAchat_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->labelAnnee->Text = "Numero client";
	this->textBoxAnnee->Location = System::Drawing::Point(469, 92);
	String^ id_client = textBoxAnnee->Text;
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.achat_client(id_client, "Stock");
	this->dataGridView1->DataMember = "Stock";
}
private: System::Void Top10_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.top10("Stock");
	this->dataGridView1->DataMember = "Stock";

}
private: System::Void Simulations_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
}
private: System::Void Bot10_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.bot10("Stock");
	this->dataGridView1->DataMember = "Stock";
}
private: System::Void ValeurCommerciale_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.val_com("Stock");
	this->dataGridView1->DataMember = "Stock";
}
private: System::Void ValeurAchat_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBoxMois->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxAnnee->Location = System::Drawing::Point(-1000, -1000);
	this->textBoxMois->Text = "";
	this->textBoxAnnee->Text = "";
	this->labelMois->Text = "";
	this->labelAnnee->Text = "";
	Stock_Gestion stock;
	this->dataGridView1->DataSource = stock.val_achat("Stock");
	this->dataGridView1->DataMember = "Stock";
}
};
}
