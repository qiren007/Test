#ifndef QIREN__
#define QIREN__
#include <iostream>
#include "Database/DatabaseConnection/ConnectionManager.h"

using namespace std;

int main(int argc, char* argv[])
{	

	cout << ConnectionManager::getConnection()->getAutoCommit();
	return 0;
}
#endif
