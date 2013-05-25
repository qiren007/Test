///////////////////////////////////////////////////////////
//  ServerProvider.h
//  Implementation of the Interface ServerProvider
//  Created on:      18-3-2013 19:16:52
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_D55E8B34_C793_40e9_BADA_B8789481520E__INCLUDED_)
#define EA_D55E8B34_C793_40e9_BADA_B8789481520E__INCLUDED_

#include <string>

using namespace std;

class ServerProvider
{

public:
	ServerProvider();
	virtual ~ServerProvider();

	const string& getAuthor() const;
	const string& getDescription() const;
	const string& getName() const;
	virtual bool workerScheduleStop() = 0;
	virtual bool workScheduleRun() = 0;

protected:
	virtual bool workerInit() = 0;

private:
	const string AUTHOR;
	const string DESCRIPTION;
	const string NAME;

};
#endif // !defined(EA_D55E8B34_C793_40e9_BADA_B8789481520E__INCLUDED_)
