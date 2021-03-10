
#pragma once
#include "BDD_CAD.h"
#include "Stock_Tableau.h"

using namespace NS_Composants;
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Stock_Gestion {
	private:
		BDD_CAD^ cad;
		Stock_Tableau^ TBSTOCK;
		DataSet^ dataSetStock;
	public:

		Stock_Gestion(void);
		DataSet^ listeStock(String^);
		int ajouter(String^, String^, int, int, String^, int, int);
		void supprimer(int);
		void suppr_article(int, int);
		void modifier(int, String^, String^, int, int, String^, int, int);
		DataSet^ seuil(String^);
		DataSet^ top10(String^);
		DataSet^ bot10(String^);
		DataSet^ val_com(String^);
		DataSet^ val_achat(String^);
		DataSet^ panier_moyen(String^);
		DataSet^ chiffre_affaire(String^, String^, String^);
		DataSet^ achat_client(String^, String^);
	};

}