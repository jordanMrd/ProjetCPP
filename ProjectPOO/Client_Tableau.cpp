#include "Client_Tableau.h"

namespace NS_Composants {
	Client_Tableau::Client_Tableau(void) {
		this->id_client = -1;
		this->nom_client = "";
		this->prenom_client = "";
		this->date_naissance = "";
		this->date_premier_achat = "";
	}
	String^ Client_Tableau::SELECT(void) {
	//	return "SELECT * FROM Client;";

		return "SELECT Client.numero_client, nom, prenom, date_naissance, date_premier_achat, numero, rue, ville, code_postal " +
			"FROM Client INNER JOIN Personne " +
			"ON Personne.id_client = Client.numero_client " +
			"INNER JOIN Adresse ON Adresse.id_adresse = Personne.id_adresse;";
	}
	String^ Client_Tableau::INSERT(void) {
		return "INSERT INTO Client (nom,prenom,date_naissance,date_premier_achat) " +
			"VALUES('" + this->getNom_client() + "', '" + this->getPrenom_client() + "', '" + this->getDate_naissance() +
			"', '" + this->getDate_premier_achat() + "');SELECT @@IDENTITY;";
	}
	String^ Client_Tableau::UPDATE(void) {
		return "UPDATE Client SET nom='" + this->getNom_client() + "', " +
			"prenom = '" + this->getPrenom_client() + "', date_naissance = '" + this->getDate_naissance() +
			"', date_premier_achat = '" + this->getDate_premier_achat() + "' WHERE(numero_client = '" + this->getID_client() + "');";
	}
	String^ Client_Tableau::DELETE(void) {
		return "DELETE FROM Client WHERE(numero_client= " + this->getID_client() + ");";
	}
	void Client_Tableau::setID_client(int id_client) {
		//	if (id_client > -1) {
		this->id_client = id_client;
		//	}
	}
	void Client_Tableau::setPrenom_client(String^ prenom_client) {
		//	if (prenom_client != "") {
		this->prenom_client = prenom_client;
		//	}
	}
	void Client_Tableau::setNom_client(String^ nom_client) {
		//	if (nom_client != "") {
		this->nom_client = nom_client;
		//	}
	}
	void Client_Tableau::setDate_naissance(String^ date_naissance) {
		//	if (date_naissance != "") {
		this->date_naissance = date_naissance;
		//	}
	}
	void Client_Tableau::setDate_premier_achat(String^ date_premier_achat) {
		//	if (date_premier_achat != "") {
		this->date_premier_achat = date_premier_achat;
		//	}
	}

	int Client_Tableau::getID_client(void) {
		return this->id_client;
	}
	String^ Client_Tableau::getNom_client(void) {
		return this->nom_client;
	}
	String^ Client_Tableau::getPrenom_client(void) {
		return this->prenom_client;
	}
	String^ Client_Tableau::getDate_naissance(void) {
		return this->date_naissance;
	}
	String^ Client_Tableau::getDate_premier_achat(void) {
		return this->date_premier_achat;
	}
}