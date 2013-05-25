///////////////////////////////////////////////////////////
//  DbUser.h
//  Implementation of the Class DbUser
//  Created on:      18-3-2013 19:16:49
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_84B7361B_D716_421b_B519_4F8981024363__INCLUDED_)
#define EA_84B7361B_D716_421b_B519_4F8981024363__INCLUDED_

#include <string>

#include "DatabaseConnection/ConnectionManager.h"

using namespace std;

class DbUser
{

public:
	DbUser(int id);
	DbUser(string username);
	DbUser(string name, string username, string password, string filePath);
	~DbUser();
	int getID();
	string getName();
	string getPassword();
	string getUsername();
	string getFilePath();
	unsigned int getMatchid();
	void setFilePath(string filePath);
	void setName(string name);
	void setPassword(string password);
	void setUsername(string username);
	void setMatchid(unsigned int matchid);

private:
	int id;
	string name;
	string username;
	string password;
	string filePath;
	unsigned int matchid;

	//DATABASE QUERY STATEMENTS
	static const string LOAD_USER_BY_ID_FROM_DB;
	static const string LOAD_USER_BY_USERNAME_FROM_DB;
	static const string SAVE_USER_TO_DB;
	static const string INSERT_USER_TO_DB;

	//DATABASE OPERATING FUNCTION
	bool loadUserFromDb();
	bool saveUserToDb();
	bool insertUserToDb();

};
#endif // !defined(EA_84B7361B_D716_421b_B519_4F8981024363__INCLUDED_)
