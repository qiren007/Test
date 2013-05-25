///////////////////////////////////////////////////////////
//  DbUserManager.cpp
//  Implementation of the Class DbUserManager
//  Created on:      18-3-2013 19:16:49
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "DbUserManager.h"

const string DbUserManager::DELETE_USER_BY_ID_FROM_DB = "";
const string DbUserManager::DELETE_USER_BY_USERNAME_FROM_DB = "";


DbUserManager::DbUserManager()
{

}


DbUserManager::~DbUserManager()
{

}


bool DbUserManager::createNewUser(string filePath, string password, string username, string name)
{

	return false;
}


bool DbUserManager::deleteUser(string username, string password)
{

	return false;
}


bool DbUserManager::findUser(string username)
{

	return false;
}


DbUser DbUserManager::retrieveUser(string username)
{
	DbUser user(username);
	return  user;
}
