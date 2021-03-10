#pragma once
#pragma once
#include "BDD_CAD.h"
#include "Article_Tableau.h"

using namespace NS_Composants;

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Svc {
	ref class Article_Gestion {
	private:
		BDD_CAD^ cad;
		Article_Tableau^ TBARTICLE;
		DataSet^ dataSetArticle;
	public:
		Article_Gestion(void);
		DataSet^ listeArticle(int, String^);
		int ajouter(int, int, String^, int);
		void modifier(int, int, String^, int);
		void supprimer(int);
	};

}