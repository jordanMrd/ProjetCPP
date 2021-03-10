#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class Adresse_Tableau
	{
	private:
		int id_adresse;
		int numero_rue;
		String^ nom_rue;
		String^ nom_ville;
		int code_postal;
	public:
		Adresse_Tableau(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(int, int);
		String^ DELETE(void);
		int getID_adresse(void);
		void setID_adresse(int);
		int getNumero_rue(void);
		void setNumero_rue(int);
		String^ getNom_rue(void);
		void setNom_rue(String^);
		String^ getNom_ville(void);
		void setNom_ville(String^);
		int getCode_postal(void);
		void setCode_postal(int);

	};
}