#include "Article_Gestion.h"
#include "BDD_CAD.h"
#include "Article_Tableau.h"

using namespace NS_Composants;

namespace NS_Svc {
	Article_Gestion::Article_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBARTICLE = gcnew Article_Tableau();
		dataSetArticle = gcnew DataSet();
	}
	DataSet^ Article_Gestion::listeArticle(int id_commande, String^ dataTableName) {
		dataSetArticle->Clear();
		dataSetArticle = cad->getRows(TBARTICLE->SELECT(id_commande), dataTableName);
		return dataSetArticle;
	}
	int Article_Gestion::ajouter(int id_commande, int id_stock, String^ prix_ttc, int nombre_article) {
		int id_adresse;
		TBARTICLE->setID_commande(id_commande);
		TBARTICLE->setID_stock(id_stock);
		TBARTICLE->setPrix_ttc(prix_ttc);
		TBARTICLE->setNombre_article(nombre_article);
		id_adresse = int(this->cad->actionRowsID(TBARTICLE->INSERT()));
		return id_adresse;
	}

	void Article_Gestion::modifier(int id_commande, int id_stock, String^ prix_ttc, int nombre_article) {
		//TBARTICLE->setID_adresse(id_adresse);
		TBARTICLE->setID_commande(id_commande);
		TBARTICLE->setID_stock(id_stock);
		TBARTICLE->setPrix_ttc(prix_ttc);
		TBARTICLE->setNombre_article(nombre_article);
		cad->actionRowsID(TBARTICLE->UPDATE());
	}

	void Article_Gestion::supprimer(int id_commande) {
		TBARTICLE->setID_commande(id_commande);
	//	TBARTICLE->setID_stock(id_stock);
	//	TBARTICLE->setPrix_ttc(prix_ttc);
	//	TBARTICLE->setNombre_article(nombre_article);
		cad->actionRowsID(TBARTICLE->DELETE());
	}
}