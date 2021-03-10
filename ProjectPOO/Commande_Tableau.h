
#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {

	ref class Commande_Tableau {
	private:
		int id_commande;
		String^ Reference;
		int Numero_Client;
		String^ Date_Livraison;
		String^ Date_Emission;
		int ID_Facturation;
		int ID_Livraison;
	public:
		Commande_Tableau(void);
		String^ SELECT(void);
		String^ TEST(void);
		String^ CLIENT(void);
		
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ GET_COMMANDE(void);

		int getId_commande(void);
		void setId_commande(int);
		String^ DELETE(void);
		String^ getReference(void);
		int getNumero_Client(void);
		String^ getDate_Livraison(void);
		String^ getDate_Emission(void);
		int getID_Facturation(void);
		int getID_Livraison(void);
		void setReference(String^);
		void setNumero_client(int);
		void setDate_Livraison(String^);
		void setDate_Emission(String^);
		void setID_Facturation(int);
		void setID_Livraison(int);

	};
}