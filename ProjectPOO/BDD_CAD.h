#pragma once
using namespace System;

//#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class BDD_CAD
	{
	private:
		String^ cnx;
		String^ rq_sql;
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA;
		DataSet^ DS;
		void setSQL(String^);
	public:
		BDD_CAD(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}