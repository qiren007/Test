///////////////////////////////////////////////////////////
//  ConnectionManager.cpp
//  Implementation of the Class ConnectionManager
//  Created on:      18-3-2013 19:16:47
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "ConnectionManager.h"

ConnectionProvider* ConnectionManager::connectionProvider = new MySQLConnectionProvider;
Connection* ConnectionManager::connection = connectionProvider->getConnection();

ConnectionManager::ConnectionManager()
{

}

ConnectionManager::~ConnectionManager()
{
	connectionProvider->closeConnection();
	delete connectionProvider;
}

ConnectionProvider* ConnectionManager::getConnectionProvider()
{
	return connectionProvider;
}

Connection* ConnectionManager::getConnection()
{
	return connection;
}
