
#pragma once
#include "BDD_CAD.h"
#include "Commande_Tableau.h"
using namespace NS_Composants;
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Commande_Gestion {
	private:
		BDD_CAD^ cad;
		Commande_Tableau^ TBCOMMANDE;
		DataSet^ dataSetCommande;
	public:
		Commande_Gestion(void);
		DataSet^ listeCommande(String^);
		
		int ajouter(String^, int, String^, String^, int, int);
		void modifier(int, String^, int, String^, String^, int, int);
		
		void getInfos(int);
		void supprimer(int);
		DataSet^ Get_commande(String^);

	};

}
