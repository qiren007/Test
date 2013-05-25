///////////////////////////////////////////////////////////
//  ServerManager.h
//  Implementation of the Class ServerManager
//  Created on:      18-3-2013 19:16:51
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_D7302FD2_6E3C_472c_8CA1_77299C7EF092__INCLUDED_)
#define EA_D7302FD2_6E3C_472c_8CA1_77299C7EF092__INCLUDED_

#include "ServerProvider.h"

class ServerManager
{

public:
	ServerManager();
	virtual ~ServerManager();

	static ServerProvider* getServerProvider();

private:
	ServerProvider *serverProvider;

};
#endif // !defined(EA_D7302FD2_6E3C_472c_8CA1_77299C7EF092__INCLUDED_)
