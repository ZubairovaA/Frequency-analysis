#pragma once
#include <iostream>
#include <string>
#include <map>
#include <set>
#include "BASE.h"


using namespace std;

class AND :virtual public BASE
{public:
	AND(string Cipher, set<string>v) : BASE(Cipher,v)  {};
	void Set_Map();
	~AND() {};

};



