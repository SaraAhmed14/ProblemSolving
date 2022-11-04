#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

//#include <regex>



int main()
{
	string s;
	cin >> s;
	int counter = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] < 97) counter++;
	}

	if (counter == s.size())
	{
		for (int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		cout << s << endl;
	}

	else if (s[0] >= 97 && counter == s.size() - 1)
	{
		s[0] = toupper(s[0]);
		for (int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
		cout << s << endl;
	}

	else cout << s << endl;
}

 