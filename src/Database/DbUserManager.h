///////////////////////////////////////////////////////////
//  DbUserManager.h
//  Implementation of the Class DbUserManager
//  Created on:      18-3-2013 19:16:49
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_D71B0F65_9121_4504_AEFD_881B559043F1__INCLUDED_)
#define EA_D71B0F65_9121_4504_AEFD_881B559043F1__INCLUDED_
#include "DbUser.h"

class DbUserManager
{

public:
	DbUserManager();
	virtual ~DbUserManager();

	bool createNewUser(string filePath, string password, string username, string name);
	bool deleteUser(string username, string password);
	bool findUser(string username);
	DbUser retrieveUser(string username);

private:
	//DATABASE QUERY STATEMENTS
	static const string DELETE_USER_BY_ID_FROM_DB;
	static const string DELETE_USER_BY_USERNAME_FROM_DB;

};
#endif // !defined(EA_D71B0F65_9121_4504_AEFD_881B559043F1__INCLUDED_)
