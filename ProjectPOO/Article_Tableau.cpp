#include "Article_Tableau.h"
#include "Stock_Tableau.h"
#include "Commande_Tableau.h"

namespace NS_Composants
{
	Article_Tableau::Article_Tableau(void)
	{
		this->id_article = -1;
		this->id_commande = -1;
		this->id_stock = -1;
		this->prix_ttc = "";
		this->nombre_article = -1;
	}

	String^ Article_Tableau::SELECT(int id_commande)
	{
		return "SELECT * FROM Article WHERE id_commande = '" + id_commande + "';";
	}
	String^ Article_Tableau::INSERT(void)
	{
		return "INSERT INTO Article (id_commande,id_stock,prix_ttc,nombre_article) " +
			"VALUES('" + this->getID_commande() + "', '" + this->getID_stock() + "', '" + this->getPrix_ttc() +
			"', '" + this->getNombre_article() + "');SELECT @@IDENTITY;";

	}
	String^ Article_Tableau::UPDATE(void)
	{
		/*if (choix == 0) {
			return "UPDATE Adresse SET numero='" + this->getNumero_rue() + "', " +
				"rue = '" + this->getNom_rue() + "', ville = '" + this->getNom_ville() +
				"', code_postal = '" + this->getCode_postal() + "' " +
				"FROM Adresse INNER JOIN  Personne ON Adresse.id_adresse = Personne.id_adresse " +
				"INNER JOIN Personnel ON Personne.id_personnel = '" + id + "' " +
				"WHERE(Adresse.id_adresse = Personne.id_adresse);";
		}
		else if (choix == 1) {
			return "UPDATE Adresse SET numero='" + this->getNumero_rue() + "', " +
				"rue = '" + this->getNom_rue() + "', ville = '" + this->getNom_ville() +
				"', code_postal = '" + this->getCode_postal() + "' " +
				"FROM Adresse INNER JOIN  Personne ON Adresse.id_adresse = Personne.id_adresse " +
				"INNER JOIN Client ON Personne.id_client = '" + id + "' " +
				"WHERE(Adresse.id_adresse = Personne.id_adresse);"; 
		} */
		return "";
	}
	String^ Article_Tableau::DELETE(void)
	{
		return "DELETE FROM Article WHERE(id_commande= '" + this->getID_commande() + "');";
	}
	int Article_Tableau::getID_article(void)
	{
		return id_article;
	}
	void Article_Tableau::setID_article(int id_article)
	{
		this->id_article = id_article;
	}
	int Article_Tableau::getID_commande(void)
	{
		return this->id_commande;
	}
	void Article_Tableau::setID_commande(int id_commande)
	{
		this->id_commande = id_commande;
	}
	int Article_Tableau::getID_stock(void)
	{
		return this->id_stock;
	}
	void Article_Tableau::setID_stock(int id_stock)
	{
		this->id_stock = id_stock;
	}
	String^ Article_Tableau::getPrix_ttc(void)
	{
		return this->prix_ttc;
	}
	void Article_Tableau::setPrix_ttc(String^ prix_ttc)
	{
		this->prix_ttc = prix_ttc;
	}
	int Article_Tableau::getNombre_article(void)
	{
		return this->nombre_article;
	}
	void Article_Tableau::setNombre_article(int nombre_article)
	{
		this->nombre_article = nombre_article;
	}

}
