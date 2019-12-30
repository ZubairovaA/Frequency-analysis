#include "BASE.h"
#include <iostream>
#include <string>
#include <map>
#include <set>


using namespace std;


void BASE::No_Spaces()
{

	map<string, int>::iterator it;
	for (it = BASE::mp.begin(); it != BASE::mp.end(); it++)
	{
		if ((res1 = BASE::Cipher1.find(it->first)) != -1)
		{
			BASE::keyBASE = it->second;
			break;
		}
		
	}
}

void BASE::Search_Set()
{
	set<string>::iterator it1;
	for (it1 = BASE::v1.begin(); it1 != BASE::v1.end(); it1++)
	{
		BASE::S = *it1;
		if (BASE::mp.find(S) != BASE::mp.end())
		{
			BASE::keyBASE = mp.find(S)->second;
			break;
		}
	}
}



