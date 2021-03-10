#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {

	ref class Client_Tableau {
	private:
		int id_client;
		String^ nom_client;
		String^ prenom_client;
		String^ date_naissance;
		String^ date_premier_achat;
	public:
		Client_Tableau(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getID_client(void);
		void setID_client(int);
		String^ getNom_client(void);
		void setNom_client(String^);
		String^ getPrenom_client(void);
		void setPrenom_client(String^);
		String^ getDate_naissance(void);
		void setDate_naissance(String^);
		String^ getDate_premier_achat(void);
		void setDate_premier_achat(String^);
	};
}