///////////////////////////////////////////////////////////
//  DbAuthorization.h
//  Implementation of the Class DbAuthorization
//  Created on:      18-3-2013 19:16:48
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_396D41B6_2175_4ef0_965B_3C5728663337__INCLUDED_)
#define EA_396D41B6_2175_4ef0_965B_3C5728663337__INCLUDED_

#include <string>

using namespace std;

class DbAuthorization
{

public:
	DbAuthorization();
	DbAuthorization(string username, string password);
	virtual ~DbAuthorization();
	bool isAuthorized();

private:
	string password;
	string username;
};
#endif // !defined(EA_396D41B6_2175_4ef0_965B_3C5728663337__INCLUDED_)
