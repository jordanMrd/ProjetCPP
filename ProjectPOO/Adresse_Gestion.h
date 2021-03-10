#pragma once
#include "BDD_CAD.h"
#include "Adresse_Tableau.h"

using namespace NS_Composants;

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Adresse_Gestion {
	private:
		BDD_CAD^ cad;
		Adresse_Tableau^ TBADRESSE;
		DataSet^ dataSetAdresse;
	public:
		Adresse_Gestion(void);
		DataSet^ listeAdresse(String^);
		int ajouter(int, String^, String^, int);
		void modifier(int, String^, String^, int, int, int);
		void supprimer(int, String^, String^, int);
	};

}