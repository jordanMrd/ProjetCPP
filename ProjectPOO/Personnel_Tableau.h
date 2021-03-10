#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {

	ref class Personnel_Tableau {
	private:
		int id_personnel;
		String^ nom_personnel;
		String^ prenom_personnel;
		int id_superieur;
		String^ date_embauche;
	public:
		Personnel_Tableau(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getID_personnel(void);
		void setID_personnel(int);
		String^ getNom_personnel(void);
		void setNom_personnel(String^);
		String^ getPrenom_personnel(void);
		void setPrenom_personnel(String^);
		String^ getDateEmbauche(void);
		void setDateEmbauche(String^);
		int getID_superieur(void);
		void setID_superieur(int);
	};
}
