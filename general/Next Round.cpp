#include <iostream>
 
using namespace std;
 
int main()
{
	int x, y;
	cin >> x >> y;
	int v = 0;
	int arr[100];
	for (size_t i = 1; i <= x; i++)
	{
		cin >> arr[i];
		
	}
 
	for (size_t i = 1; i <= x; i++)
	{
		
		if (arr[i]>=arr[y]&&arr[i]>0)
		{
			v += 1;
		}
	}
	cout << v;
  
}