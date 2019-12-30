
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <thread>
#include <algorithm>
#include "THE.h"
#include "AND.h"
#include "BASE.h"


using namespace std;

string Encryption(string& Text, string& Cipher, int& Key1)      //Finding out the original text
{

	for (int i = 0; i < (int)Cipher.size(); i++)
	{
		if (Cipher[i] != ' ')
		{
			char x = ((int)(Cipher[i]) - Key1);
			if (x >= 'a' && x <= 'z')
			{
				Text += (char)((int)(Cipher[i]) - Key1);
			}
			else
			{
				Text += (char)((int)(Cipher[i]) + 26 - Key1);
			}
		}
		else
		{
			Text += Cipher[i];
		}
	}
	return Text;
}


int main()
{
	string Cipher = "";
	getline(cin, Cipher);

	string S = "", Answer="";
	string Text = "";
	int Key1;
	int res = 0, pp = 0;

	set<string>v;
	while ((res = Cipher.find_first_of(' ', res)) != -1)
	{
		S = Cipher.substr(pp, res - pp);
		if (S.size() == 3)
		{
			v.insert(S);
		}
		pp = res + 1;
		res++;
	}
	if (S.size() == 3)
	{
		v.insert(Cipher.substr(pp, res - pp));
	}

	
	THE A(Cipher,v);
	A.Set_Map();

	AND B(Cipher, v);
	B.Set_Map();

	cout << "Does the text has any spaces?";
	cin >> Answer;	
	transform(Answer.begin(), Answer.end(), Answer.begin(), tolower);
	int Ans = (Answer == "yes") ? 1 : 0;

	if (Ans == 0) {
		thread tTHE1([&A]() {A.No_Spaces(); });
		thread tAND1([&B]() {B.No_Spaces(); });
		tTHE1.join();
		tAND1.join();
	}
	else{
		thread tTHE([&A]() {A.Search_Set(); });
		thread tAND([&B]() {B.Search_Set(); });
		tTHE.join();
		tAND.join();
	}


	if((A.keyBASE > 0 && B.keyBASE > 0 && A.keyBASE != B.keyBASE)||(A.keyBASE==0 && B.keyBASE==0))
	{
		cout << "The text is not encrypted by the displacement on a fixed number of letters";
	}
	else {
		Key1 = ((A.keyBASE > 0) && (B.keyBASE > 0) && (A.keyBASE == B.keyBASE)) ? A.keyBASE : (A.keyBASE > B.keyBASE) ? A.keyBASE : B.keyBASE;
		cout << Encryption(Text, Cipher, Key1);
	}
	
	
	

	return 0;
}

