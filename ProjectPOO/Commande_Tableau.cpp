#include "Commande_Tableau.h"
#include "BDD_CAD.h"

namespace NS_Composants {
    Commande_Tableau::Commande_Tableau(void) {
    }
    String^ Commande_Tableau::SELECT(void) {
        return "SELECT * FROM Commande;";
    }

    String^ Commande_Tableau::TEST(void) {
        int TNumero_Client = this->getNumero_Client();

        return "SELECT Client.numero_client, Client.nom, Client.prenom, Adresse.ville FROM Client" +
            "INNER JOIN Personne ON Client.numero_client = Personne.id_client" +
            "INNER JOIN Adresse ON Personne.id_adresse = Adresse.id_adresse" +
            "WHERE Client.numero_client = '" + TNumero_Client + "'" +
            "ORDER BY Adresse.id_adresse" +
            "LIMIT 1";
        /*  String^ TNom = Rows[]
          String^ TPrenom = row.prenom
          String^ TVille = row.ville
          */
    }
    String^ Commande_Tableau::CLIENT(void) {

        return "SELECT nom, prenom FROM Client WHERE numero_client ='" + getNumero_Client() + "'" +
            "SELECT ville FROM Adresse INNER JOIN Personne ON Adresse.id_adresse = Personne.id_adresse AND Personne.id_client='" + getNumero_Client() + "'" +
            "SELECT CONVERT (date, SYSDATETIME())";

    }
    
    String^ Commande_Tableau::INSERT(void) {
        return "INSERT INTO Commande (reference,numero_client,date_livraison,date_emission, id_adresse_facturation, id_adresse_livraison) " +
            "VALUES('" + this->getReference() + "', '" + this->getNumero_Client() + "', '" + this->getDate_Livraison() +
            "', '" + this->getDate_Emission() + "', '" + this->getID_Facturation() + "', '" + this->getID_Livraison() + "');SELECT @@IDENTITY;";
    }
    String^ Commande_Tableau::UPDATE(void) {
        return "UPDATE Commande SET reference='" + this->getReference() + "', " +
            "numero_client = '" + this->getNumero_Client() + "', date_livraison = '" + this->getDate_Livraison() +
            "', date_emission = '" + this->getDate_Emission() + "', id_adresse_facturation = '" + this->getID_Facturation() + 
            "', id_adresse_livraison = '" +this->getID_Livraison() + "' WHERE(id_commande = '" + this->getId_commande() + "');";
    } 
  
    String^ Commande_Tableau::DELETE(void) {
        return "DELETE FROM Commande WHERE(id_commande= " + this->getId_commande() + ");";
    }

    String^ Commande_Tableau::GET_COMMANDE(void) {
        return "SELECT MAX(id_commande) FROM Commande;";
    }
    int Commande_Tableau::getId_commande(void) {
        return this->id_commande;
    }
    void Commande_Tableau::setId_commande(int id_commande) {
      //  if (id_commande > -1) {
            this->id_commande = id_commande;
     //   }
    }
    String^ Commande_Tableau::getReference(void) {
        return this->Reference;
    }

    void Commande_Tableau::setReference(String^ Reference) {
     //   if (Reference != "") {
            this->Reference = Reference;
    //    }
    }

    int Commande_Tableau::getNumero_Client(void) {
        return this->Numero_Client;
    }

    void Commande_Tableau::setNumero_client(int Numero_Client) {
    //    if (Numero_Client > -1) {
            this->Numero_Client = Numero_Client;
    //    }
    }

    String^ Commande_Tableau::getDate_Livraison(void) {
        return this->Date_Livraison;
    }

    void Commande_Tableau::setDate_Livraison(String^ Date_Livraison) {
        if (Date_Livraison != "") {
            this->Date_Livraison = Date_Livraison;
        }
    }

    String^ Commande_Tableau::getDate_Emission(void) {
        return this->Date_Emission;
    }

    void Commande_Tableau::setDate_Emission(String^ Date_Emission) {
     //   if (Date_Emission != "") {
            this->Date_Emission = Date_Emission;
     //   }
    }

    int Commande_Tableau::getID_Facturation(void) {
        return this->ID_Facturation;
    }

    void Commande_Tableau::setID_Facturation(int ID_Facturation) {
    //    if (ID_Facturation > -1) {
            this->ID_Facturation = ID_Facturation;
       // }
    }

    int Commande_Tableau::getID_Livraison(void) {
        return this->ID_Livraison;
    }

    void Commande_Tableau::setID_Livraison(int ID_Livraison) {
     //   if (ID_Livraison > -1) {
            this->ID_Livraison = ID_Livraison;
     //   }
    }
}
