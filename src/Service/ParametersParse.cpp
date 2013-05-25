///////////////////////////////////////////////////////////
//  ParametersParse.cpp
//  Implementation of the Class ParametersParse
//  Created on:      18-3-2013 19:16:50
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "ParametersParse.h"


ParametersParse::ParametersParse(){

}

ParametersParse::~ParametersParse(){

}

ConfigOptions ParametersParse::getConfigfOptions(){

	return  configOptions;
}

bool ParametersParse::ParaCmdParse(){

	return false;
}

bool ParametersParse::ParaConfigFileParse(){

	return false;
}
