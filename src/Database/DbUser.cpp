///////////////////////////////////////////////////////////
//  DbUser.cpp
//  Implementation of the Class DbUser
//  Created on:      18-3-2013 19:16:49
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "DbUser.h"

const string DbUser::LOAD_USER_BY_ID_FROM_DB = "";
const string LOAD_USER_BY_USERNAME_FROM_DB = "";
const string SAVE_USER_TO_DB = "";
const string INSERT_USER_TO_DB = "";

/*
 * Load user by id from database
 */
DbUser::DbUser(int id)
{
	this->id = id;
	if (loadUserFromDb()) {
		//load user successfully, code for how to do next
	} else {
		//code for handle errors
	}
}

/*
 * Load user by user name from database
 */
DbUser::DbUser(string username)
{
	this->username = username;
	if (loadUserFromDb()) {
		//load user successfully, code for how to do next
	} else {
		//code for handle errors
	}
}

/*
 * Insert a new user record into database
 */
DbUser::DbUser(string name, string username, string password, string filePath)
{
	this->name = name;
	this->username = username;
	this->password = password;
	this->filePath = filePath;
}


DbUser::~DbUser(){

}


int DbUser::getID()
{
	return id;
}


string DbUser::getName()
{

	return  name;
}


string DbUser::getPassword()
{

	return  password;
}


string DbUser::getUsername()
{

	return  username;
}


string DbUser::getFilePath()
{

	return  filePath;
}


unsigned int DbUser::getMatchid()
{
	return matchid;
}


void DbUser::setName(string name)
{
	this->name = name;
}


void DbUser::setUsername(string username)
{
	this->username = username;
}


void DbUser::setPassword(string password)
{
	this->password = password;
}


void DbUser::setFilePath(string filePath)
{
	this->filePath = filePath;
}


void DbUser::setMatchid(unsigned int matchid)
{

}


bool DbUser::loadUserFromDb()
{

	return false;
}


bool DbUser::saveUserToDb()
{
	return false;
}


bool DbUser::insertUserToDb()
{
	return false;
}
