#pragma once
#include <iostream>
#include <string>
#include <map>
#include <set>
#include "BASE.h"


using namespace std;

class THE :virtual public BASE
{public:
	THE(string Cipher, set<string>v) : BASE(Cipher, v) {};
	void Set_Map();
	~THE() {};

};

