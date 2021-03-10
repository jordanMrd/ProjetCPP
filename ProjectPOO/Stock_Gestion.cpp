
#include "Stock_Gestion.h"
#include "BDD_CAD.h"
using namespace NS_Composants;

namespace NS_Svc {
	Stock_Gestion::Stock_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBSTOCK = gcnew Stock_Tableau();
		dataSetStock = gcnew DataSet();
	}

	DataSet^ Stock_Gestion::listeStock(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->SELECT(), dataTableName);
		return dataSetStock;
	}

	int Stock_Gestion::ajouter(String^ Nom_Art, String^ Prix_HT, int Nombre_Article, int Quantite_Pour_Remise, String^ Pourcentage_Remise, int ID_Couleur, int Seuil_Reapro) {
		int id_stock;
		TBSTOCK->set_Nom(Nom_Art);
		TBSTOCK->set_PrixHT(Prix_HT);
		TBSTOCK->set_Nombre_Exemplaire(Nombre_Article);
		TBSTOCK->set_Quantite_Pour_Remise(Quantite_Pour_Remise);
		TBSTOCK->set_Pourcentage_Remise(Pourcentage_Remise);
		TBSTOCK->set_ID_Couleur(ID_Couleur);
		TBSTOCK->set_Seuil_Reapro(Seuil_Reapro);
		id_stock = int(this->cad->actionRowsID(TBSTOCK->INSERT()));
		return id_stock;
	}

	void Stock_Gestion::supprimer(int Reference) {
		TBSTOCK->set_Reference(Reference);
		cad->actionRowsID(TBSTOCK->DELETE());
	}
	void Stock_Gestion::suppr_article(int Reference, int Nombre_Article) {
		TBSTOCK->set_Reference(Reference);
		TBSTOCK->set_Nombre_Exemplaire(Nombre_Article);
		cad->actionRowsID(TBSTOCK->UPDATE2());
	}
	void Stock_Gestion::modifier(int reference, String^ Nom_Art, String^ Prix_HT, int Nombre_Article, int Quantite_Pour_Remise, String^ Pourcentage_Remise, int ID_Couleur, int Seuil_Reapro) {
		TBSTOCK->set_Reference(reference);
		TBSTOCK->set_Nom(Nom_Art);
		TBSTOCK->set_PrixHT(Prix_HT);
		TBSTOCK->set_Nombre_Exemplaire(Nombre_Article);
		TBSTOCK->set_Quantite_Pour_Remise(Quantite_Pour_Remise);
		TBSTOCK->set_Pourcentage_Remise(Pourcentage_Remise);
		TBSTOCK->set_ID_Couleur(ID_Couleur);
		TBSTOCK->set_Seuil_Reapro(Seuil_Reapro);
		cad->actionRowsID(TBSTOCK->UPDATE());
	}
	DataSet^ Stock_Gestion::seuil(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->SEUIL_STAT(), dataTableName);
		return dataSetStock;
	}

	DataSet^ Stock_Gestion::top10(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->TOP10_STAT(), dataTableName);
		return dataSetStock;
	}

	DataSet^ Stock_Gestion::bot10(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->BOT10_STAT(), dataTableName);
		return dataSetStock;
	}
	DataSet^ Stock_Gestion::val_com(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->VAL_COM_STAT(), dataTableName);
		return dataSetStock;
	}
	DataSet^ Stock_Gestion::val_achat(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->VAL_ACHAT_STAT(), dataTableName);
		return dataSetStock;
	}
	DataSet^ Stock_Gestion::panier_moyen(String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->PANIER_MOYEN_STAT(), dataTableName);
		return dataSetStock;
	}
	DataSet^ Stock_Gestion::chiffre_affaire(String^ mois, String^ annee, String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->CHIFFRE_AFFAIRE_STAT(mois, annee), dataTableName);
		return dataSetStock;
	}
	DataSet^ Stock_Gestion::achat_client(String^ id_client, String^ dataTableName) {
		dataSetStock->Clear();
		dataSetStock = cad->getRows(TBSTOCK->ACHAT_CLIENT_STAT(id_client), dataTableName);
		return dataSetStock;
	}

}
