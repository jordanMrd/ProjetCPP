#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class Adresse_personne
	{
	private:
		int id_adresse;
		int numero_rue;
		String^ nom_rue;
		String^ nom_ville;
		int code_postal;
	public:
		Adresse_personne();

	};
}
//trouver comment g�rer le fait que adresse fasse partie de client et de personnel
//quelles m�thodes impl�menter?
//les accesseurs?
//faut il mettre les m�thodes UPDATE, DELETE, INSERT et SELECT?