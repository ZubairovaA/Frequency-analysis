#pragma once
#include <iostream>
#include <string>
#include <map>
#include <set>


using namespace std;

class BASE
{
public:
	BASE(string Cipher, set<string>v) :Cipher1{ move(Cipher) }, v1{ move(v) } {};
	map<string, int>mp;

	int res1 = 0;
	string Cipher1, S;
	set<string>v1;

	void No_Spaces();
	void Search_Set();
	int keyBASE = 0;
	~BASE() {};

};



