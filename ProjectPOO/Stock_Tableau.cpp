
#include "Stock_Tableau.h"

namespace NS_Composants {
	Stock_Tableau::Stock_Tableau(void) {
	}

	String^ Stock_Tableau::SELECT(void) {
		return "SELECT * FROM Stock;";
	}

	String^ Stock_Tableau::INSERT(void) {
		return "INSERT INTO Stock (nom, prix_ht, nombre_exemplaire, quantite_pour_remise, pourcentage_remise, id_couleur, seuil_reappro)" +
			"VALUES ('" + this->get_Nom() + "','" + this->get_PrixHT() + "','" + this->get_Nombre_Exemplaire() + "','" + this->get_Quantite_Pour_Remise() +
			"','" + this->get_Pourcentage_Remise() + "' ,'" + this->get_ID_Couleur() + "','" + this->get_Seuil_Reapro() + "');";
	}

	String^ Stock_Tableau::DELETE(void) {
		return "DELETE FROM Stock WHERE(reference= " + this->get_Reference() + ");";
	}

	String^ Stock_Tableau::UPDATE(void) {
		return "UPDATE Stock SET nom='" + this->get_Nom() + "', " + "prix_ht = '" + this->get_PrixHT() + "', nombre_exemplaire = '" + this->get_Nombre_Exemplaire() +
			"', quantite_pour_remise = '" + this->get_Quantite_Pour_Remise() + "', pourcentage_remise = '" + this->get_Pourcentage_Remise() +
			"',id_couleur = '" + this->get_ID_Couleur() + "', seuil_reappro = '" + this->get_Seuil_Reapro() + "' WHERE(reference = " + this->get_Reference() + ");";
	}
	String^ Stock_Tableau::UPDATE2(void) {
		return "UPDATE Stock SET nombre_exemplaire = (" + this->get_Nombre_Exemplaire() + ") WHERE(reference = '" + this->get_Reference() + "');";
	}
	String^ Stock_Tableau::PANIER(void) {
		return "0";
	}

	String^ Stock_Tableau::SEUIL_STAT(void) {
		return "SELECT reference, nom, nombre_exemplaire, seuil_reappro FROM Stock "+
			"WHERE nombre_exemplaire < seuil_reappro;";
	}

	String^ Stock_Tableau::TOP10_STAT(void) {
		return "SELECT TOP 10 id_stock AS ID, nom AS Nom, SUM(nombre_article) AS Nombre FROM Article "+
			"INNER JOIN Stock ON id_stock = reference "+
			"GROUP BY id_stock, nom "+
			"ORDER BY Nombre DESC;";
	}

	String^ Stock_Tableau::BOT10_STAT(void) {
		return "SELECT TOP 10 id_stock AS ID, nom AS Nom, SUM(nombre_article) AS Nombre FROM Article "+
			"INNER JOIN Stock ON id_stock = reference "+
			"GROUP BY id_stock, nom "+
			"ORDER BY Nombre;";
	}

	String^ Stock_Tableau::VAL_COM_STAT(void) {
		return "SELECT SUM(prix_ht* nombre_exemplaire) AS Valeur_Commerciale FROM Stock;";
	}

	String^ Stock_Tableau::VAL_ACHAT_STAT(void) {
		return "SELECT SUM(prix_ht * nombre_exemplaire)* 1.2 AS Valeur_Achat FROM Stock;";
	}
	String^ Stock_Tableau::PANIER_MOYEN_STAT(void) {
		return "SELECT AVG(m) AS Moyenne " +
			"FROM(SELECT AVG(montant_ttc) AS m " +
			"FROM Paiements " +
			"GROUP BY id_commande " +
			") AS Pay;";
	}
	String^ Stock_Tableau::CHIFFRE_AFFAIRE_STAT(String^ mois, String^ annee) {
		return "SELECT SUM(somme) AS Chiffre_Affaire " +
			"FROM(SELECT SUM(montant_ttc) AS somme " +
			"FROM Paiements " +
			"WHERE MONTH(date_paiement) = '" + mois + "' AND YEAR(date_paiement) = '" + annee + "' " +
			"GROUP BY date_paiement) as ca; ";
	}
	String^ Stock_Tableau::ACHAT_CLIENT_STAT(String^ id_client) {
		return "SELECT  SUM(montant_ttc) FROM Paiements " +
			"INNER JOIN Commande ON Commande.id_commande = Paiements.id_commande " +
			"WHERE Commande.numero_client = '" + id_client + "' " +
			"GROUP BY Commande.numero_client; ";
	}
	void Stock_Tableau::set_Reference(int Reference) {
		if (Reference > -1) {
			this->Reference = Reference;
		}
	}
	void Stock_Tableau::set_Nom(String^ Nom) {
		if (Nom != "") {
			this->Nom = Nom;
		}
	}
	void Stock_Tableau::set_PrixHT(String^ PrixHT) {
		if (PrixHT != "") {
			this->PrixHT = PrixHT;
		}
	}
	void Stock_Tableau::set_Nombre_Exemplaire(int Nombre_Exemplaire) {
		if (Nombre_Exemplaire > -1) {
			this->Nombre_Exemplaire = Nombre_Exemplaire;
		}
	}
	void Stock_Tableau::set_Quantite_Pour_Remise(int Quantite_Pour_Remise) {
		if (Quantite_Pour_Remise > -1) {
			this->Quantite_Pour_Remise = Quantite_Pour_Remise;
		}
	}
	void Stock_Tableau::set_Pourcentage_Remise(String^ Pourcentage_Remise) {
		if (Pourcentage_Remise != "") {
			this->Pourcentage_Remise = Pourcentage_Remise;
		}
	}
	void Stock_Tableau::set_ID_Couleur(int ID_Couleur) {
		if (ID_Couleur > -1) {
			this->ID_Couleur = ID_Couleur;
		}
	}
	void Stock_Tableau::set_Seuil_Reapro(int Seuil_Reapro) {
		if (Seuil_Reapro > -1) {
			this->Seuil_Reapro = Seuil_Reapro;
		}
	}

	int Stock_Tableau::get_Reference(void) {
		return this->Reference;
	}
	String^ Stock_Tableau::get_Nom(void) {
		return this->Nom;
	}
	String^ Stock_Tableau::get_PrixHT(void) {
		return this->PrixHT;
	}
	int Stock_Tableau::get_Nombre_Exemplaire(void) {
		return this->Nombre_Exemplaire;
	}
	int Stock_Tableau::get_Quantite_Pour_Remise(void) {
		return this->Quantite_Pour_Remise;
	}
	String^ Stock_Tableau::get_Pourcentage_Remise(void) {
		return this->Pourcentage_Remise;
	}
	int Stock_Tableau::get_ID_Couleur(void) {
		return this->ID_Couleur;
	}
	int Stock_Tableau::get_Seuil_Reapro(void) {
		return this->Seuil_Reapro;
	}
}
