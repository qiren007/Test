///////////////////////////////////////////////////////////
//  MySQLConnectionProvider.h
//  Implementation of the Class MySQLConnectionProvider
//  Created on:      18-3-2013 19:16:50
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_507870CF_45F3_46c6_BB64_08DF91B55B35__INCLUDED_)
#define EA_507870CF_45F3_46c6_BB64_08DF91B55B35__INCLUDED_
#include <cstdlib>
#include <cstdio>
#include <cppconn/exception.h>

#include "ConnectionProvider.h"

using namespace sql;
class MySQLConnectionProvider : public ConnectionProvider
{

public:
	MySQLConnectionProvider() : NAME("MySQL 5.6.10"),
								DESCRIPTION("Centos mysql"),
								AUTHOR("qiren"),
								HOST("tcp://localhost:3306"),
								DB_USER_NAME("root"),
								DB_PASSWORD("ca$hc0w"){
									try {
										driver = get_driver_instance();
										connection = driver->connect(HOST, DB_USER_NAME, DB_PASSWORD);
									} catch (SQLException &e) {
										printf("# ERR: SQLException->MySQLConnectionProvider.cpp\n");
										printf("%s", e.what());
									}
								};
	virtual ~MySQLConnectionProvider();
	const string& getName() const;
	const string& getDescription() const;
	const string& getAuthor() const;
	const string& getHost() const;
	const string& getDbUserName() const;
	const string& getDbPassword() const;
	Connection* getConnection();
	void closeConnection();

private:
	const string NAME;
	const string DESCRIPTION;
	const string AUTHOR;
	const string HOST;
	const string DB_USER_NAME;
	const string DB_PASSWORD;
	Driver* driver;
	Connection* connection;
};
#endif // !defined(EA_507870CF_45F3_46c6_BB64_08DF91B55B35__INCLUDED_)
