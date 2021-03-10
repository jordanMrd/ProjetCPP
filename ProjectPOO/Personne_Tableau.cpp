#include "Personne_Tableau.h"

namespace NS_Composants
{
	Personne_Tableau::Personne_Tableau()
	{
		this->id_adresse = -1;
		this->id_client = -1;
		this->id_personnel = -1;
	}

	String^ Personne_Tableau::SELECT(void)
	{
		return "SELECT * FROM Personne;";
	}
	String^ Personne_Tableau::INSERT(void)
	{
			if (getID_client() > 0) {
				return "INSERT INTO Personne (id_adresse, id_client) " +
					"VALUES('" + this->getID_adresse() + "', '" + this->getID_client() + "');SELECT @@IDENTITY;";
			}
			else if (getID_personnel() > 0) {

				return "INSERT INTO Personne (id_adresse, id_personnel) " +
					"VALUES('" + this->getID_adresse() + "', '" + this->getID_personnel() + "'); SELECT @@IDENTITY;";
			}
	}
	String^ Personne_Tableau::UPDATE(void)
	{
		if (getID_client() > 0) {

		}
		else if (getID_personnel() > 0) {
			return "UPDATE Personne SET id_adresse='" + this->getID_adresse() + "', " +
				"id_client = '" + this->getID_client() + "', id_personnel = '" + this->getID_personnel() + ");";
		}

	}
	String^ Personne_Tableau::DELETE(int id, int choix)
	{
		if (choix == 0) {
			return "DELETE FROM Personne WHERE(id_personnel= '" + id + "');";
		}
		else if (choix == 1) {
			return "DELETE FROM Personne WHERE(id_client= '" + id + "');";
		}
	}
	int Personne_Tableau::getID_adresse(void)
	{
		return this->id_adresse;
	}
	void Personne_Tableau::setID_adresse(int id_adresse)
	{
		this->id_adresse = id_adresse;
	}
	int Personne_Tableau::getID_client(void)
	{
		return this->id_client;
	}
	void Personne_Tableau::setID_client(int id_client)
	{
		this->id_client = id_client;
	}
	int Personne_Tableau::getID_personnel(void)
	{
		return this->id_personnel;
	}
	void Personne_Tableau::setID_personnel(int id_personnel)
	{
		this->id_personnel = id_personnel;
	}








}