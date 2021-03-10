#include "BDD_CAD.h"
#include "Commande_Gestion.h";
#include "Adresse_Gestion.h"
#include "Commande_Tableau.h"

using namespace NS_Composants;

namespace NS_Svc {
	Commande_Gestion::Commande_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBCOMMANDE = gcnew Commande_Tableau();
		dataSetCommande = gcnew DataSet();
	}

	DataSet^ Commande_Gestion::listeCommande(String^ dataTableName) {
		dataSetCommande->Clear();
		dataSetCommande = cad->getRows(TBCOMMANDE->SELECT(), dataTableName);
		return dataSetCommande;
	}

	int Commande_Gestion::ajouter(String^ reference, int numero_client, String^ date_livraison, String^ date_emission, int adresse_livraison, int adresse_facturation) {
		int id_commande;
		TBCOMMANDE->setReference(reference);
		TBCOMMANDE->setNumero_client(numero_client);
		TBCOMMANDE->setDate_Livraison(date_livraison);
		TBCOMMANDE->setDate_Emission(date_emission);
		TBCOMMANDE->setID_Livraison(adresse_livraison);
		TBCOMMANDE->setID_Facturation(adresse_facturation);
		id_commande = int(this->cad->actionRowsID(TBCOMMANDE->INSERT()));
		return id_commande;
	}

	void Commande_Gestion::modifier(int id_commande, String^ reference, int numero_client, String^ date_livraison, String^ date_emission, int adresse_livraison, int adresse_facturation) {
		TBCOMMANDE->setId_commande(id_commande);
		TBCOMMANDE->setReference(reference);
		TBCOMMANDE->setNumero_client(numero_client);
		TBCOMMANDE->setDate_Livraison(date_livraison);
		TBCOMMANDE->setDate_Emission(date_emission);
		TBCOMMANDE->setID_Livraison(adresse_livraison);
		TBCOMMANDE->setID_Facturation(adresse_facturation);
		cad->actionRowsID(TBCOMMANDE->UPDATE());
	} 

	void Commande_Gestion::getInfos(int Numero_Client) {
		TBCOMMANDE->setNumero_client(Numero_Client);
		cad->actionRowsID(TBCOMMANDE->CLIENT());
	}
	void Commande_Gestion::supprimer(int id_commande) {
		TBCOMMANDE->setId_commande(id_commande);
		cad->actionRowsID(TBCOMMANDE->DELETE());
	}
	DataSet^ Commande_Gestion::Get_commande(String^ dataTableName) {
		dataSetCommande->Clear();
		dataSetCommande = cad->getRows(TBCOMMANDE->GET_COMMANDE(), dataTableName);
		return dataSetCommande;
	}
}