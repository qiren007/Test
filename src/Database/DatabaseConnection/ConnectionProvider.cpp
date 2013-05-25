///////////////////////////////////////////////////////////
//  ConnectionProvider.cpp
//  Implementation of the Class ConnectionProvider
//  Created on:      18-����-2013 19:16:48
//  Original author: qiren
///////////////////////////////////////////////////////////

#include "ConnectionProvider.h"


ConnectionProvider::~ConnectionProvider(){

}


const string& ConnectionProvider::getName() const
{
	return NAME;
}


const string& ConnectionProvider::getDescription() const
{
	return DESCRIPTION;
}


const string& ConnectionProvider::getAuthor() const
{
	return AUTHOR;
}
