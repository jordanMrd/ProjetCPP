#include "BDD_CAD.h"
namespace NS_Composants
{
	//constructeur
	BDD_CAD::BDD_CAD(void)
	{
		this->rq_sql = "";
		this->cnx = "Data Source = localhost\\SQLEXPRESS; Initial Catalog = Projet; Integrated Security = True";
		this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}

	//pour les INSERT
	int BDD_CAD::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}

	//pour les UPDATE et DELETE
	void BDD_CAD::actionRows(String^ rq_sql) {
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}
	//pour les SELECT
	DataSet^ BDD_CAD::getRows(String^ rq_sql, String^ dataTableName) {
		this->setSQL(rq_sql);
		this->DA = gcnew SqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew DataSet();
		this->DA->Fill(this->DS, dataTableName);
		return this->DS;
	}

	//verification de la requete
	void BDD_CAD::setSQL(String^ rq_sql) {
		if (rq_sql == "" || rq_sql == "") {
			this->rq_sql = "";
		}
		else {
			this->rq_sql = rq_sql;
		}
	}
}