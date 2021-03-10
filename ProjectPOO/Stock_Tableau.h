
#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {

	ref class Stock_Tableau {
	private:
		int Reference;
		String^ Nom;
		String^ PrixHT;
		int Nombre_Exemplaire;
		int Quantite_Pour_Remise;
		String^ Pourcentage_Remise;
		int ID_Couleur;
		int Seuil_Reapro;

	public:
		Stock_Tableau(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ UPDATE2(void);
		String^ DELETE(void);
		String^ PANIER(void);
		String^ SEUIL_STAT(void);
		String^ TOP10_STAT(void);
		String^ BOT10_STAT(void);
		String^ VAL_COM_STAT(void);
		String^ VAL_ACHAT_STAT(void);
		String^ PANIER_MOYEN_STAT(void);
		String^ CHIFFRE_AFFAIRE_STAT(String^, String^);
		String^ ACHAT_CLIENT_STAT(String^);
		int get_Reference(void);
		void set_Reference(int);
		String^ get_Nom(void);
		void set_Nom(String^);
		String^ get_PrixHT(void);
		void set_PrixHT(String^);
		int get_Nombre_Exemplaire(void);
		void set_Nombre_Exemplaire(int);
		int get_Quantite_Pour_Remise(void);
		void set_Quantite_Pour_Remise(int);
		String^ get_Pourcentage_Remise(void);
		void set_Pourcentage_Remise(String^);
		int get_ID_Couleur(void);
		void set_ID_Couleur(int);
		int get_Seuil_Reapro(void);
		void set_Seuil_Reapro(int);
	};
}