///////////////////////////////////////////////////////////
//  PocoServerProvider.cpp
//  Implementation of the Class PocoServerProvider
//  Created on:      18-3-2013 19:16:51
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "PocoServerProvider.h"


PocoServerProvider::PocoServerProvider(){

}

PocoServerProvider::~PocoServerProvider(){

}

const string& PocoServerProvider::getAuthor() const
{

	return  NULL;
}

const string& PocoServerProvider::getDescription() const
{

	return  NULL;
}

const string& PocoServerProvider::getName() const
{

	return  NULL;
}

bool PocoServerProvider::workerInit()
{

	return false;
}


bool PocoServerProvider::workerScheduleStop()
{

	return false;
}


bool PocoServerProvider::workScheduleRun()
{

	return false;
}
