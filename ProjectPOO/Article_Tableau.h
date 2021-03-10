#pragma once
#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class Article_Tableau
	{
	private:
		int id_article;
		int id_commande;
		int id_stock;
		String^ prix_ttc;
		int nombre_article;
	public:
		Article_Tableau(void);
		String^ SELECT(int);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getID_article(void);
		void setID_article(int);
		int getID_commande(void);
		void setID_commande(int);
		int getID_stock(void);
		void setID_stock(int);
		String^ getPrix_ttc(void);
		void setPrix_ttc(String^);
		int getNombre_article(void);
		void setNombre_article(int);
	};
}