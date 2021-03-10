#include "Client_Gestion.h"
#include "BDD_CAD.h"
#include "Client_Tableau.h"

using namespace NS_Composants;

namespace NS_Svc {
	Client_Gestion::Client_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBCLIENT = gcnew Client_Tableau();
		dataSetClient = gcnew DataSet();
	}
	DataSet^ Client_Gestion::listeClient(String^ dataTableName) {
		dataSetClient->Clear();
		dataSetClient = cad->getRows(TBCLIENT->SELECT(), dataTableName);
		return dataSetClient;
	}
	int Client_Gestion::ajouter(String^ nom, String^ prenom, String^ date_naissance, String^ date_premier_achat) {
		int id_client;
		TBCLIENT->setNom_client(nom);
		TBCLIENT->setPrenom_client(prenom);
		TBCLIENT->setDate_naissance(date_naissance);
		TBCLIENT->setDate_premier_achat(date_premier_achat);
		id_client = int(this->cad->actionRowsID(TBCLIENT->INSERT()));
		return id_client;
	}

	void Client_Gestion::modifier(int id_client, String^ nom, String^ prenom, String^ date_naissance, String^ date_premier_achat) {
		TBCLIENT->setID_client(id_client);
		TBCLIENT->setNom_client(nom);
		TBCLIENT->setPrenom_client(prenom);
		TBCLIENT->setDate_naissance(date_naissance);
		TBCLIENT->setDate_premier_achat(date_premier_achat);
		cad->actionRowsID(TBCLIENT->UPDATE());
	}

	void Client_Gestion::supprimer(int id_client) {
		TBCLIENT->setID_client(id_client);
		cad->actionRowsID(TBCLIENT->DELETE());
	}
}