///////////////////////////////////////////////////////////
//  PocoServerProvider.h
//  Implementation of the Class PocoServerProvider
//  Created on:      18-3-2013 19:16:51
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_B5A61C9C_712D_4988_9158_32A950899168__INCLUDED_)
#define EA_B5A61C9C_712D_4988_9158_32A950899168__INCLUDED_

#include "ServerProvider.h"

class PocoServerProvider : public ServerProvider
{

public:
	PocoServerProvider();
	virtual ~PocoServerProvider();

	const string& getAuthor() const;
	const string& getDescription() const;
	const string& getName() const;
	virtual bool workerScheduleStop();
	virtual bool workScheduleRun();

protected:
	virtual bool workerInit();

private:
	const string AUTHOR;
	const string DESCRIPTION;
	const string NAME;

};
#endif // !defined(EA_B5A61C9C_712D_4988_9158_32A950899168__INCLUDED_)
