#pragma once
#pragma once
#include <string>
#include <iostream>
#include "Stock_Gestion.h"
#include "Article_Gestion.h"
#include "Article_Tableau.h"
#include "Commande_Gestion.h"
#include "Commande_Tableau.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace NS_Svc;
	//using namespace NS_Composants;


	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(String^ reference, String^ nom, String^ prix_ht, int nombre_exemplaire, int quantite_pour_remise, String^ pourcentage_remise, int id_couleur, int seuil_reappro, String^ PrixTTC)
		{
			InitializeComponent(reference, nom, prix_ht, nombre_exemplaire, quantite_pour_remise, pourcentage_remise, id_couleur, seuil_reappro, PrixTTC);
			//
			//TODO: ajoutez ici le code du constructeur
			//

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NomArt;
	private: System::Windows::Forms::TextBox^ text_nombre_article;
	private: System::Windows::Forms::Label^ Quantite_Affichage;
	private: System::Windows::Forms::Label^ Ghetto_txt;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ En_Stock;
	private: System::Windows::Forms::Button^ Valider;
	private: System::Windows::Forms::Button^ Bouton_Reduction;
	private: System::Windows::Forms::Button^ Retour;
	private: System::Windows::Forms::Label^ PrixHT_Affichage;
	private: System::Windows::Forms::Label^ Reduction_Nombre;
	private: System::Windows::Forms::Label^ PrixTTC_Affichage;
	private: System::Windows::Forms::Label^ PrixHT;
	private: System::Windows::Forms::Label^ PrixTTC;
	private: System::Windows::Forms::TextBox^ id_perso;






	protected:

	protected:

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
		void InitializeComponent(String^ reference, String^ nom, String^ prix_ht, int nombre_exemplaire, int quantite_pour_remise, String^ pourcentage_remise, int id_couleur, int seuil_reappro, String^ PrixTTC)
		{
			this->NomArt = (gcnew System::Windows::Forms::Label());
			this->text_nombre_article = (gcnew System::Windows::Forms::TextBox());
			this->Quantite_Affichage = (gcnew System::Windows::Forms::Label());
			this->Valider = (gcnew System::Windows::Forms::Button());
			this->Bouton_Reduction = (gcnew System::Windows::Forms::Button());
			this->Ghetto_txt = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Retour = (gcnew System::Windows::Forms::Button());
			this->PrixHT_Affichage = (gcnew System::Windows::Forms::Label());
			this->Reduction_Nombre = (gcnew System::Windows::Forms::Label());
			this->PrixTTC_Affichage = (gcnew System::Windows::Forms::Label());
			this->En_Stock = (gcnew System::Windows::Forms::Label());
			this->PrixHT = (gcnew System::Windows::Forms::Label());
			this->PrixTTC = (gcnew System::Windows::Forms::Label());
			this->id_perso = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// id_perso
			// 
			this->id_perso->Enabled = false;
			this->id_perso->Location = System::Drawing::Point(443, 30);
			this->id_perso->Name = L"id_perso";
			this->id_perso->Size = System::Drawing::Size(75, 20);
			this->id_perso->TabIndex = 11;
			this->id_perso->TextChanged += gcnew System::EventHandler(this, &MyForm1::IdBox_TextChanged);
			this->id_perso->Text = reference;
			// 
			// NomArt
			// 
			this->NomArt->AutoSize = true;
			this->NomArt->Location = System::Drawing::Point(248, 42);
			this->NomArt->Name = L"NomArt";
			this->NomArt->Size = System::Drawing::Size(60, 13);
			this->NomArt->TabIndex = 0;
			this->NomArt->Text = nom;
			//
			//
			//
			String^ Nbr_BDD = Convert::ToString(nombre_exemplaire);
			this->En_Stock->AutoSize = true;
			this->En_Stock->Location = System::Drawing::Point(251, 102);
			this->En_Stock->Name = L"PrixHT_Affichage";
			this->En_Stock->Size = System::Drawing::Size(120, 20);
			this->En_Stock->TabIndex = 10;
			this->En_Stock->Text = "En stock :" + Nbr_BDD;
			// 
			// text_nombre_article
			// 
			String^ Nombre_Article_Temp;
			this->text_nombre_article->Location = System::Drawing::Point(251, 79);
			this->text_nombre_article->AutoSize = true;
			this->text_nombre_article->Name = L"text_nombre_article";
			this->text_nombre_article->Size = System::Drawing::Size(120, 20);
			this->text_nombre_article->TabIndex = 21;
			this->text_nombre_article->Text = Nombre_Article_Temp;
			// 
			// Quantite_Affichage
			// 
			this->Quantite_Affichage->AutoSize = true;
			this->Quantite_Affichage->Location = System::Drawing::Point(169, 81);
			this->Quantite_Affichage->Name = L"Quantite_Affichage";
			this->Quantite_Affichage->Size = System::Drawing::Size(47, 13);
			this->Quantite_Affichage->TabIndex = 7;
			this->Quantite_Affichage->Text = L"Quantité";
			// 
			// Ghetto_txt
			// 
			this->Ghetto_txt->AutoSize = true;
			this->Ghetto_txt->Location = System::Drawing::Point(-1000, -100);
			this->Ghetto_txt->Name = L"Quantite_Affichage";
			this->Ghetto_txt->Size = System::Drawing::Size(47, 13);
			this->Ghetto_txt->TabIndex = 7;
			this->Ghetto_txt->Text = pourcentage_remise;
			// 
			// Valider
			// 
			this->Valider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Valider->Location = System::Drawing::Point(409, 258);
			this->Valider->Name = L"Valider";
			this->Valider->Size = System::Drawing::Size(122, 29);
			this->Valider->TabIndex = 8;
			this->Valider->Text = L"Ajouter au panier";
			this->Valider->UseVisualStyleBackColor = false;
			this->Valider->Click += gcnew System::EventHandler(this, &MyForm1::Valider_Click);
			// 
			// Retour
			// 
			this->Retour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Retour->Location = System::Drawing::Point(34, 258);
			this->Retour->Name = L"Retour";
			this->Retour->Size = System::Drawing::Size(122, 29);
			this->Retour->TabIndex = 9;
			this->Retour->Text = L"Retour";
			this->Retour->UseVisualStyleBackColor = false;
			this->Retour->Click += gcnew System::EventHandler(this, &MyForm1::buttonRetour_Click);
			// 
			// Reduction_Nombre
			// 
			this->Reduction_Nombre->AutoSize = true;
			this->Reduction_Nombre->Location = System::Drawing::Point(380, 81);
			this->Reduction_Nombre->Name = L"Reduction_Nombre";
			this->Reduction_Nombre->Size = System::Drawing::Size(42, 13);
			this->Reduction_Nombre->TabIndex = 10;
			this->Reduction_Nombre->Text = L"Nombre articles pour reduction :" + quantite_pour_remise;
			//
			// Bouton_Reduction
			//
			this->Bouton_Reduction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Bouton_Reduction->Location = System::Drawing::Point(380, 100);
			this->Bouton_Reduction->Name = L"Bouton_Reduction";
			this->Bouton_Reduction->Size = System::Drawing::Size(150, 29);
			this->Bouton_Reduction->TabIndex = 8;
			this->Bouton_Reduction->Text = L"Appliquer reduction";
			this->Bouton_Reduction->UseVisualStyleBackColor = false;
			this->Bouton_Reduction->Click += gcnew System::EventHandler(this, &MyForm1::button_reduction);
			// 
			// PrixHT_Affichage
			// 
			this->PrixHT_Affichage->AutoSize = true;
			this->PrixHT_Affichage->Location = System::Drawing::Point(169, 126);
			this->PrixHT_Affichage->Name = L"PrixHT_Affichage";
			this->PrixHT_Affichage->Size = System::Drawing::Size(42, 13);
			this->PrixHT_Affichage->TabIndex = 10;
			this->PrixHT_Affichage->Text = L"Prix HT";
			// 
			// PrixTTC_Affichage
			// 
			this->PrixTTC_Affichage->AutoSize = true;
			this->PrixTTC_Affichage->Location = System::Drawing::Point(169, 163);
			this->PrixTTC_Affichage->Name = L"PrixTTC_Affichage";
			this->PrixTTC_Affichage->Size = System::Drawing::Size(48, 13);
			this->PrixTTC_Affichage->TabIndex = 11;
			this->PrixTTC_Affichage->Text = L"Prix TTC";
			// 
			// PrixHT
			// 
			this->PrixHT->AutoSize = true;
			this->PrixHT->Location = System::Drawing::Point(331, 126);
			this->PrixHT->Name = L"PrixHT";
			this->PrixHT->Size = System::Drawing::Size(40, 13);
			this->PrixHT->TabIndex = 12;
			this->PrixHT->Text = prix_ht;
			// 
			// PrixTTC
			// 
			this->PrixTTC->AutoSize = true;
			this->PrixTTC->Location = System::Drawing::Point(331, 163);
			this->PrixTTC->Name = L"PrixTTC";
			this->PrixTTC->Size = System::Drawing::Size(40, 13);
			this->PrixTTC->TabIndex = 13;
			this->PrixTTC->Text = PrixTTC; //+ "€";
			// 
			// dataGridView1
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(-1000, -1000);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(498, 359);
			this->dataGridView2->TabIndex = 14;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(556, 315);
			this->Controls->Add(this->En_Stock);
			this->Controls->Add(this->PrixTTC);
			this->Controls->Add(this->id_perso);
			this->Controls->Add(this->PrixHT);
			this->Controls->Add(this->PrixTTC_Affichage);
			this->Controls->Add(this->Reduction_Nombre);
			this->Controls->Add(this->PrixHT_Affichage);
			this->Controls->Add(this->Retour);
			this->Controls->Add(this->Valider);
			this->Controls->Add(this->Bouton_Reduction);
			this->Controls->Add(this->Quantite_Affichage);
			this->Controls->Add(this->text_nombre_article);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->NomArt);
			this->Name = L"MyForm1";
			this->Text = L"Ajouter article";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NomArt_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Valider_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Nombre_Article_BDD = text_nombre_article->Text; //Recupere le nombre d'article souhaite
		int Nbr_Art = Convert::ToInt32(Nombre_Article_BDD); //Nombre souhaite en INT
		String^ ttt = En_Stock->Text; // Recupere En Stock : NombreBDD
		String^ id = id_perso->Text;
		int ID_Txt = Convert::ToInt32(id); //Recupere L'ID et le change en INT
		String^ Affichage_Stock = ttt->Replace("En stock :", ""); // Enleve le En Stock
		int NbrBDD = Convert::ToInt32(Affichage_Stock); // Nombre article dans la BDD en Int
		int Nouv_Nbr_Art = NbrBDD - Nbr_Art; // Calcul le nouveau Stock
		String^ Nbr_Reduc_Txt = Reduction_Nombre->Text->Replace("Nombre articles pour reduction :", "");
		int Nbr_Reduction = Convert::ToInt32(Nbr_Reduc_Txt);
		String^ prix_ttc = PrixTTC->Text;
		//int id_commande = 6;
		if (Nbr_Art < NbrBDD) {
			
			Stock_Gestion soupp;
			soupp.suppr_article(ID_Txt, Nouv_Nbr_Art); //Permets de supprimer le nombre d'articles ajouter au panier soupp.

			Commande_Gestion testt;
			this->dataGridView2->DataSource = testt.Get_commande("Commande");
			this->dataGridView2->DataMember = "Commande";
			int id_commande = Convert::ToInt32(dataGridView2->Rows[0]->Cells[0]->Value);

			Article_Gestion temp;
			int id_article = temp.ajouter(id_commande, ID_Txt, prix_ttc, Nbr_Art);

		//	int id_personnel = perso.ajouter(nom, prenom, date_embauche, id_superieur);
		//	int id_adresse = adres.ajouter(numero, rue, ville, cp);
		//	person.ajouter(id_adresse, -1, id_personnel);

			Close();
		}
		

	}
	private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button_reduction(System::Object^ sender, System::EventArgs^ e) {
		String^ Nombre_Article_BDD = text_nombre_article->Text; //Recupere le nombre d'article souhaite
		int Nbr_Art = Convert::ToInt32(Nombre_Article_BDD); //Nombre souhaite en INT
		String^ Nbr_Reduc_Txt = Reduction_Nombre->Text->Replace("Nombre articles pour reduction :", "");
		int Nbr_Reduction = Convert::ToInt32(Nbr_Reduc_Txt);
		if (Nbr_Art > Nbr_Reduction)
		{
			double Prix = Convert::ToDouble(PrixTTC->Text);
			double Reduction = Convert::ToDouble(Ghetto_txt->Text);
			double Pourcentage = (100 - Reduction) / 100;
			float Prix_Reduit = Prix * Pourcentage;
			float Arrondir = round(Prix_Reduit * 100) / 100;
			String^ Prix_Final = Convert::ToString("" + Arrondir + "");

			PrixTTC->Text = Prix_Final;
		}

	}
	private: System::Void PrixHT_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IdBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PrixTTC_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_nombre_article_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

