#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants
{
	ref class Personne_Tableau
	{
	private:
		int id_adresse;
		int id_client;
		int id_personnel;
	public:
		Personne_Tableau();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(int, int);
		int getID_adresse(void);
		void setID_adresse(int);
		int getID_client(void);
		void setID_client(int);
		int getID_personnel(void);
		void setID_personnel(int);


	};
}