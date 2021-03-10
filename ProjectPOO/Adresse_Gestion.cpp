#include "Adresse_Gestion.h"
#include "BDD_CAD.h"
#include "Adresse_Tableau.h"

using namespace NS_Composants;

namespace NS_Svc {
	Adresse_Gestion::Adresse_Gestion(void) {
		cad = gcnew BDD_CAD();
		TBADRESSE = gcnew Adresse_Tableau();
		dataSetAdresse = gcnew DataSet();
	}
	DataSet^ Adresse_Gestion::listeAdresse(String^ dataTableName) {
		dataSetAdresse->Clear();
		dataSetAdresse = cad->getRows(TBADRESSE->SELECT(), dataTableName);
		return dataSetAdresse;
	}
	int Adresse_Gestion::ajouter(int numero, String^ rue, String^ nom, int cp) {
		int id_adresse;
		TBADRESSE->setNumero_rue(numero);
		TBADRESSE->setNom_rue(rue);
		TBADRESSE->setNom_ville(nom);
		TBADRESSE->setCode_postal(cp);
		id_adresse = int(this->cad->actionRowsID(TBADRESSE->INSERT()));
		return id_adresse;
	}

	void Adresse_Gestion::modifier(int numero, String^ rue, String^ nom, int cp, int id, int choix) {
		//TBADRESSE->setID_adresse(id_adresse);
		TBADRESSE->setNumero_rue(numero);
		TBADRESSE->setNom_rue(rue);
		TBADRESSE->setNom_ville(nom);
		TBADRESSE->setCode_postal(cp);
		cad->actionRowsID(TBADRESSE->UPDATE(id, choix));
	}

	void Adresse_Gestion::supprimer(int numero, String^ rue, String^ ville, int cp) {
		TBADRESSE->setNumero_rue(numero);
		TBADRESSE->setNom_rue(rue);
		TBADRESSE->setNom_ville(ville);
		TBADRESSE->setCode_postal(cp);
		cad->actionRowsID(TBADRESSE->DELETE());
	}
}