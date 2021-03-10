#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class Paiement_Tableau
	{
	private:
		int id_paiement;
		int id_moyen_paiement;
		String^ date_paiement;
		float montant_paiement;
	public:
		Paiement_Tableau(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getID_paiement(void);
		void setID_paiement(int);
		int getID_moyen_paiement(void);
		void setID_moyen_paiement(int);
		String^ getDate_paiement(void);
		void setDate_paiement(String^);
		float getMontant_paiement(void);
		void setMontant_paiement(float);
	};
}
