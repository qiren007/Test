///////////////////////////////////////////////////////////
//  ConnectionProvider.h
//  Implementation of the Class ConnectionProvider
//  Created on:      18-3-2013 19:16:48
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_BEA49685_497E_4701_BA53_6EA6053FBF55__INCLUDED_)
#define EA_BEA49685_497E_4701_BA53_6EA6053FBF55__INCLUDED_

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#include <winsock.h>
#endif

#include <string>
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/driver.h>

using namespace std;
using namespace sql;


class ConnectionProvider
{
public:
	ConnectionProvider() : NAME(""), DESCRIPTION(""), AUTHOR(""){};
	virtual ~ConnectionProvider();
	virtual const string& getName() const;
	virtual const string& getDescription() const;
	virtual const string& getAuthor() const;
	virtual Connection* getConnection() = 0;
	virtual void closeConnection() = 0;
	
private:
	const string NAME;
	const string DESCRIPTION;
	const string AUTHOR;

};
#endif // !defined(EA_BEA49685_497E_4701_BA53_6EA6053FBF55__INCLUDED_)
