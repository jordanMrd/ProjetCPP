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
//trouver comment gérer le fait que adresse fasse partie de client et de personnel
//quelles méthodes implémenter?
//les accesseurs?
//faut il mettre les méthodes UPDATE, DELETE, INSERT et SELECT?