#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main() {
	int n, A=0,D=0;
	string x;
	cin >> n;
	
		cin >> x;
	
	for (int j = 0; j < x.length(); j++)
	{
		if (x[j]=='A')
		{
			A++;
		}
		else
		{
			D++;
		}
	}
	if (A>D)
	{
		cout << "Anton" << endl;
	}
	else if(D>A)
	{
		cout << "Danik" << endl;
	}
	else
	{
		cout<<"Friendship" << endl;
	}
}