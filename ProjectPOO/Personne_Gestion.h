#pragma once
#include "BDD_CAD.h"
#include "Personne_Tableau.h"


using namespace NS_Composants;
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Personne_Gestion {
	private:
		BDD_CAD^ cad;
		Personne_Tableau^ TBPERSONNE;
		DataSet^ dataSetPersonne;
	public:
		Personne_Gestion(void);
		DataSet^ listePersonne(String^);
		void ajouter(int, int, int);
		void modifier(int, int, int);
		void supprimer(int, int);
	};

}
