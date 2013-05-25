///////////////////////////////////////////////////////////
//  Function.h
//  Implementation of the Class Function
//  Created on:      18-3-2013 19:16:49
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_B8831AA7_D5B2_429c_8440_41187F20DE5B__INCLUDED_)
#define EA_B8831AA7_D5B2_429c_8440_41187F20DE5B__INCLUDED_
#include <string>

using namespace std;

class Function
{

public:
	Function();
	~Function();
	bool changePassword(string newPassword, string oringinalPassword, string username);
	bool match(string responderUsername, string requesterUsername);
	bool queryUserProfile(string password, string username);
	bool signIn(string password, string username);
	bool signOut();
	bool signUp(string name, string password, string username);
	bool uploadPhotos(string filePath);

};
#endif // !defined(EA_B8831AA7_D5B2_429c_8440_41187F20DE5B__INCLUDED_)
