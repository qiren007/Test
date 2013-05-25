///////////////////////////////////////////////////////////
//  ParametersParse.h
//  Implementation of the Class ParametersParse
//  Created on:      18-3-2013 19:16:50
//  Original author: qiren
///////////////////////////////////////////////////////////

#if !defined(EA_9D729F86_DC60_4552_A999_7E5E5A1171EC__INCLUDED_)
#define EA_9D729F86_DC60_4552_A999_7E5E5A1171EC__INCLUDED_

#include "ConfigOptions.h"
#include <string>

using namespace std;

class ParametersParse
{

public:
	ParametersParse();
	virtual ~ParametersParse();
	ConfigOptions *m_ConfigOptions;

	ConfigOptions getConfigfOptions();

private:
	string command;
	string configFilePath;
	ConfigOptions configOptions;

	bool ParaCmdParse();
	bool ParaConfigFileParse();

};
#endif // !defined(EA_9D729F86_DC60_4552_A999_7E5E5A1171EC__INCLUDED_)
