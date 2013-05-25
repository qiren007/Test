///////////////////////////////////////////////////////////
//  MySQLConnectionProvider.cpp
//  Implementation of the Class MySQLConnectionProvider
//  Created on:      18-3-2013 19:16:50
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "MySQLConnectionProvider.h"

MySQLConnectionProvider::~MySQLConnectionProvider()
{
	delete connection;
}

const string& MySQLConnectionProvider::getName() const
{
	return NAME;
}

const string& MySQLConnectionProvider::getDescription() const
{
	return DESCRIPTION;
}

const string& MySQLConnectionProvider::getAuthor() const 
{
	return AUTHOR;
}

const string& MySQLConnectionProvider::getHost() const
{
	return HOST;
}

const string& MySQLConnectionProvider::getDbUserName() const
{
	return DB_USER_NAME;
}

const string& MySQLConnectionProvider::getDbPassword() const
{
	return DB_PASSWORD;
}

Connection* MySQLConnectionProvider::getConnection()
{

	return connection;
}

void MySQLConnectionProvider::closeConnection()
{
	delete connection;
}
