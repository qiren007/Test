///////////////////////////////////////////////////////////
//  DbAuthorization.cpp
//  Implementation of the Class DbAuthorization
//  Created on:      18-3-2013 19:16:48
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "DbAuthorization.h"


DbAuthorization::DbAuthorization()
{

}

DbAuthorization::DbAuthorization(string username, string password)
{
	this->username = username;
	this->password = password;
}

DbAuthorization::~DbAuthorization()
{

}

bool DbAuthorization::isAuthorized()
{


	return false;
}

