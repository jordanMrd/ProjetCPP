#include "BDD_CAD.h"
#include "Personnel_Tableau.h"

using namespace NS_Composants;
#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Personnel_Gestion {
	private:
		BDD_CAD^ cad;
		Personnel_Tableau^ TBPERSONNEL;
		DataSet^ dataSetPersonnel;
	public:
		Personnel_Gestion(void);
		DataSet^ listePersonnel(String^);
		int ajouter(String^, String^, String^, int);
		void modifier(int, String^, String^, String^, int);
		void supprimer(int);
	};

}