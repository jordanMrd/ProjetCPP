#pragma once
#include "BDD_CAD.h"
#include "Client_Tableau.h"

using namespace NS_Composants;

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Client_Gestion {
	private:
		BDD_CAD^ cad;
		Client_Tableau^ TBCLIENT;
		DataSet^ dataSetClient;
	public:
		Client_Gestion(void);
		DataSet^ listeClient(String^);
		int ajouter(String^, String^, String^, String^);
		void modifier(int, String^, String^, String^, String^);
		void supprimer(int);
	};

}