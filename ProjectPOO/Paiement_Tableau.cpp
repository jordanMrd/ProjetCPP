#include "Paiement_Tableau.h"

namespace NS_Composants
{
	Paiement_Tableau::Paiement_Tableau(void)
	{
		this->id_paiement = -1;
		this->id_moyen_paiement = -1;
		this->date_paiement = "";
		this->montant_paiement = -1.0;
	}
	String^ Paiement_Tableau::SELECT(void)
	{
		return "SELECT * FROM Paiements;";
	}
	String^ Paiement_Tableau::INSERT(void)
	{
		return "INSERT INTO Paiements (id_paiement,id_moyen_paiement,date_paiement,montant_ttc) " +
			"VALUES('" + this->getID_paiement() + "', '" + this->getID_moyen_paiement() + "', '" + this->getDate_paiement() +
			"', '" + this->getMontant_paiement() + "',);SELECT @@IDENTITY;";
	}
	String^ Paiement_Tableau::UPDATE(void)
	{
		return "UPDATE Paiements SET id_paiement='" + this->getID_paiement() + "', " +
			"id_moyen_paiement = '" + this->getID_moyen_paiement() + "', date_paiement = '" + this->getDate_paiement() +
			"', montant_ttc = '" + this->getMontant_paiement() + "' WHERE(id_paiement = " + this->getID_paiement() + ");";
	}
	String^ Paiement_Tableau::DELETE(void)
	{
		return "DELETE FROM Paiements WHERE(id_paiement= " + this->getID_paiement() + ");";
	}
	int Paiement_Tableau::getID_paiement(void)
	{
		return this->id_paiement;
	}
	void Paiement_Tableau::setID_paiement(int id_paiement)
	{
		this->id_paiement = id_paiement;
	}
	int Paiement_Tableau::getID_moyen_paiement(void)
	{
		return this->id_moyen_paiement;
	}
	void Paiement_Tableau::setID_moyen_paiement(int id_moyen_paiement)
	{
		this->id_moyen_paiement = id_moyen_paiement;
	}
	String^ Paiement_Tableau::getDate_paiement(void)
	{
		return this->date_paiement;
	}
	void Paiement_Tableau::setDate_paiement(String^ date)
	{
		this->date_paiement = date;
	}
	float Paiement_Tableau::getMontant_paiement(void)
	{
		return montant_paiement;
	}
	void Paiement_Tableau::setMontant_paiement(float montant)
	{
		this->montant_paiement = montant;
	}
}