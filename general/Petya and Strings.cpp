#include <iostream>
using namespace std;
 
int main()
{
	string x, v;
	cin >> x >> v;
	for (size_t i = 0; i < x.length(); i++)
	{
		x[i] = towlower(x[i]);
		v[i] = towlower(v[i]);
	}
		if (x==v)
		{
			cout << "0" << endl;
		}
		else 
		{
			for (size_t i = 0; i < x.length(); i++)
			{
				if (x[i]<v[i])
				{
					cout << "-1" << endl;
					break;
				}
				else if(x[i] > v[i])
				{
					cout << "1" << endl;
					break;
 
				}
 
			}
 
 
		}
	
	
 
}