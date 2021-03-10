#include "Personnel_Gestion.h"
#include "BDD_CAD.h"
#include "Personnel_Tableau.h"
using namespace NS_Composants;

namespace NS_Svc {
	Personnel_Gestion::Personnel_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBPERSONNEL = gcnew Personnel_Tableau();
		dataSetPersonnel = gcnew DataSet();
	}
	DataSet^ Personnel_Gestion::listePersonnel(String^ dataTableName) {
		dataSetPersonnel->Clear();
		dataSetPersonnel = cad->getRows(TBPERSONNEL->SELECT(), dataTableName);
		return dataSetPersonnel;
	}
	int Personnel_Gestion::ajouter(String^ nom, String^ prenom, String^ date_embauche, int id_superieur) {
		int id_personnel;
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDateEmbauche(date_embauche);
		TBPERSONNEL->setID_superieur(id_superieur);
		id_personnel = int(this->cad->actionRowsID(TBPERSONNEL->INSERT()));
		return id_personnel;
	}

	void Personnel_Gestion::modifier(int id_personnel, String^ nom, String^ prenom, String^ date_embauche, int id_superieur) {
		TBPERSONNEL->setID_personnel(id_personnel);
		TBPERSONNEL->setNom_personnel(nom);
		TBPERSONNEL->setPrenom_personnel(prenom);
		TBPERSONNEL->setDateEmbauche(date_embauche);
		TBPERSONNEL->setID_superieur(id_superieur);
		cad->actionRowsID(TBPERSONNEL->UPDATE());
	}

	void Personnel_Gestion::supprimer(int id_personnel) {
		TBPERSONNEL->setID_personnel(id_personnel);
		cad->actionRowsID(TBPERSONNEL->DELETE());
	}
}