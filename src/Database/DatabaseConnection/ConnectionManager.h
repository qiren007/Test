///////////////////////////////////////////////////////////
//  ConnectionManager.h
//  Implementation of the Class ConnectionManager
//  Created on:      18-����-2013 19:16:47
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_3F45E780_0594_496b_8658_AA2B49E84862__INCLUDED_)
#define EA_3F45E780_0594_496b_8658_AA2B49E84862__INCLUDED_

#include "ConnectionProvider.h"
#include "MySQLConnectionProvider.h"

class ConnectionManager
{

public:
	ConnectionManager();
	virtual ~ConnectionManager();
	static ConnectionProvider* getConnectionProvider();
	static Connection* getConnection();

private:
	static ConnectionProvider* connectionProvider;
	static Connection* connection;

};
#endif // !defined(EA_3F45E780_0594_496b_8658_AA2B49E84862__INCLUDED_)
