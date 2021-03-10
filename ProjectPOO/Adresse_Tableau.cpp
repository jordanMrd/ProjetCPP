#include "Adresse_Tableau.h"
#include "Personnel_Tableau.h"
#include "Client_Tableau.h"

namespace NS_Composants
{
	Adresse_Tableau::Adresse_Tableau(void)
	{
		this->id_adresse = -1;
		this->numero_rue = -1;
		this->nom_rue = "";
		this->nom_ville = "";
		this->code_postal = -1;
	}

	String^ Adresse_Tableau::SELECT(void)
	{
		return "SELECT * FROM Adresse;";
	}
	String^ Adresse_Tableau::INSERT(void)
	{
		return "INSERT INTO Adresse (numero,rue,ville,code_postal) " +
			"VALUES('" + this->getNumero_rue() + "', '" + this->getNom_rue() + "', '" + this->getNom_ville() +
			"', '" + this->getCode_postal() + "');SELECT @@IDENTITY;";

	}
	String^ Adresse_Tableau::UPDATE(int id, int choix)
	{
		if (choix == 0) {
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
		}

	}
	String^ Adresse_Tableau::DELETE(void)
	{
		return "DELETE FROM Adresse WHERE(numero= '" + this->getNumero_rue() + "'AND " +
			"rue= '" + this->getNom_rue() + "'AND ville= '" + this->getNom_ville() + "'AND " +
			"code_postal= '" + this->getCode_postal() + "');";
	}
	int Adresse_Tableau::getID_adresse(void)
	{
		return id_adresse;
	}
	void Adresse_Tableau::setID_adresse(int id_adresse)
	{
		this->id_adresse = id_adresse;
	}
	int Adresse_Tableau::getNumero_rue(void)
	{
		return this->numero_rue;
	}
	void Adresse_Tableau::setNumero_rue(int numero_rue)
	{
		this->numero_rue = numero_rue;
	}
	String^ Adresse_Tableau::getNom_rue(void)
	{
		return this->nom_rue;
	}
	void Adresse_Tableau::setNom_rue(String^ nom_rue)
	{
		this->nom_rue = nom_rue;
	}
	String^ Adresse_Tableau::getNom_ville(void)
	{
		return this->nom_ville;
	}
	void Adresse_Tableau::setNom_ville(String^ nom_ville)
	{
		this->nom_ville = nom_ville;
	}
	int Adresse_Tableau::getCode_postal(void)
	{
		return this->code_postal;
	}
	void Adresse_Tableau::setCode_postal(int code_postal)
	{
		this->code_postal = code_postal;
	}

}
