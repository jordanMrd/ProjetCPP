#include "Personnel_Tableau.h"

namespace NS_Composants {
	Personnel_Tableau::Personnel_Tableau(void) {
		this->id_personnel = 3;
		this->nom_personnel = "";
		this->prenom_personnel = "";
		this->date_embauche = "";
		this->id_superieur = 5;
	}
	String^ Personnel_Tableau::SELECT(void) {
		//	return "SELECT * FROM Personnel;";
			//(id_personnel,nom,prenom,id_superieur,date_embauche,id_adresse,id_personnel)
		return "SELECT Personnel.id_personnel, nom, prenom, id_superieur, date_embauche, numero, rue, ville, code_postal " +
			"FROM Personnel INNER JOIN Personne " +
			"ON Personne.id_personnel = Personnel.id_personnel " +
			"INNER JOIN Adresse ON Adresse.id_adresse = Personne.id_adresse;";

	}
	String^ Personnel_Tableau::INSERT(void) {
		return "INSERT INTO Personnel (nom,prenom,date_embauche,id_superieur) " +
			"VALUES('" + this->getNom_personnel() + "', '" + this->getPrenom_personnel() + "', '" + this->getDateEmbauche() +
			"', '" + this->getID_superieur() + "');SELECT @@IDENTITY;";
	}
	String^ Personnel_Tableau::UPDATE(void) {
		return "UPDATE Personnel SET nom='" + this->getNom_personnel() + "', " +
			"prenom = '" + this->getPrenom_personnel() + "', date_embauche = '" + this->getDateEmbauche() +
			"', id_superieur = '" + this->getID_superieur() + "' WHERE(id_personnel = " + this->getID_personnel() + ");";
	}
	String^ Personnel_Tableau::DELETE(void) {
		return "DELETE FROM Personnel WHERE(id_personnel= '" + this->getID_personnel() + "');";
	}
	void Personnel_Tableau::setID_personnel(int id_personnel) {
		//if (id_personnel > -1) {
		this->id_personnel = id_personnel;
		//}
	}
	void Personnel_Tableau::setPrenom_personnel(String^ prenom_personnel) {
		//	if (prenom_personnel != "") {
		this->prenom_personnel = prenom_personnel;
		//	}
	}
	void Personnel_Tableau::setNom_personnel(String^ nom_personnel) {
		//	if (nom_personnel != "") {
		this->nom_personnel = nom_personnel;
		//	}
	}
	void Personnel_Tableau::setDateEmbauche(String^ date_embauche) {
		//	if (date_embauche != "") {
		this->date_embauche = date_embauche;
		//	}
	}
	void Personnel_Tableau::setID_superieur(int id_superieur) {
		//	if (id_superieur > -1) {
		this->id_superieur = id_superieur;
		//	}
	}

	int Personnel_Tableau::getID_personnel(void) {
		return this->id_personnel;
	}
	String^ Personnel_Tableau::getNom_personnel(void) {
		return this->nom_personnel;
	}
	String^ Personnel_Tableau::getPrenom_personnel(void) {
		return this->prenom_personnel;
	}
	String^ Personnel_Tableau::getDateEmbauche(void) {
		return this->date_embauche;
	}
	int Personnel_Tableau::getID_superieur(void) {
		return this->id_superieur;
	}
}