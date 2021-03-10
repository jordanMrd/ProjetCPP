#include "Personne_Gestion.h"
#include "BDD_CAD.h"
#include "Personne_Tableau.h"
using namespace NS_Composants;

namespace NS_Svc {
	Personne_Gestion::Personne_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBPERSONNE = gcnew Personne_Tableau();
		dataSetPersonne = gcnew DataSet();
	}
	DataSet^ Personne_Gestion::listePersonne(String^ dataTableName) {
		dataSetPersonne->Clear();
		dataSetPersonne = cad->getRows(TBPERSONNE->SELECT(), dataTableName);
		return dataSetPersonne;
	}
	void Personne_Gestion::ajouter(int id_adresse, int id_client, int id_personnel) {
		//int id_ad;
		TBPERSONNE->setID_adresse(id_adresse);
		TBPERSONNE->setID_client(id_client);
		TBPERSONNE->setID_personnel(id_personnel);
		//id_ad = int(this->cad->actionRows(TBPERSONNE->INSERT()));
		this->cad->actionRows(TBPERSONNE->INSERT());
		//return id_ad;
	}

	void Personne_Gestion::modifier(int id_adresse, int id_client, int id_personnel) {
		TBPERSONNE->setID_adresse(id_adresse);
		TBPERSONNE->setID_client(id_client);
		TBPERSONNE->setID_personnel(id_personnel);
		cad->actionRowsID(TBPERSONNE->UPDATE());
	}

	void Personne_Gestion::supprimer(int id, int choix) {
		//TBPERSONNE->setID_personnel(id_adresse);
		cad->actionRowsID(TBPERSONNE->DELETE(id, choix));
	}
}