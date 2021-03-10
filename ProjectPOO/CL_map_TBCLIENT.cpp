#include "CL_map_TBCLIENT.h"

namespace NS_Composants {
	CL_map_TBCLIENT::CL_map_TBCLIENT(void) {
		this->id_client = -1;
		this->nom_client = "";
		this->prenom_client = "";
		this->date_naissance = "";
		this->date_premier_achat = "";
	}
	String^ CL_map_TBCLIENT::SELECT(void) {
		return "SELECT * FROM Client;";
	}
	String^ CL_map_TBCLIENT::INSERT(void) {
		return "INSERT INTO Client (nom,prenom,date_naissance,date_premier_achat) " +
			"VALUES('" + this->getNom_client() + "', '" + this->getPrenom_client() + "', '" + this->getDate_naissance() +
			"', '" + this->getDate_premier_achat() + "',);SELECT @@IDENTITY;";
	}
	String^ CL_map_TBCLIENT::UPDATE(void) {
		return "UPDATE Client SET nom='" + this->getNom_client() + "', " +
			"prenom = '" + this->getPrenom_client() + "', date_naissance = '" + this->getDate_naissance() +
			"', date_premier_achat = '" + this->getDate_premier_achat() + "' WHERE(numero_client = " + this->getID_client() + ");";
	}
	String^ CL_map_TBCLIENT::DELETE(void) {
		return "DELETE FROM Client WHERE(numero_client= " + this->getID_client() + ");";
	}
	void CL_map_TBCLIENT::setID_client(int id_client) {
		if (id_client > -1) {
			this->id_client = id_client;
		}
	}
	void CL_map_TBCLIENT::setPrenom_client(String^ prenom_client) {
		if (prenom_client != "") {
			this->prenom_client = prenom_client;
		}
	}
	void CL_map_TBCLIENT::setNom_client(String^ nom_client) {
		if (nom_client != "") {
			this->nom_client = nom_client;
		}
	}
	void CL_map_TBCLIENT::setDate_naissance(String^ date_naissance) {
		if (date_naissance != "") {
			this->date_naissance = date_naissance;
		}
	}
	void CL_map_TBCLIENT::setDate_premier_achat(String^ date_premier_achat) {
		if (date_premier_achat != "") {
			this->date_premier_achat = date_premier_achat;
		}
	}

	int CL_map_TBCLIENT::getID_client(void) {
		return this->id_client;
	}
	String^ CL_map_TBCLIENT::getNom_client(void) {
		return this->nom_client;
	}
	String^ CL_map_TBCLIENT::getPrenom_client(void) {
		return this->prenom_client;
	}
	String^ CL_map_TBCLIENT::getDate_naissance(void) {
		return this->date_naissance;
	}
	String^ CL_map_TBCLIENT::getDate_premier_achat(void) {
		return this->date_premier_achat;
	}
}