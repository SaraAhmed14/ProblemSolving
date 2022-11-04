#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
int main()
{
	int arr[100];
	int x;
	cin >> x;
	arr[0] = 0;
	arr[1] = 1;
	for (size_t i = 2; i < x; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];

	}
	for (size_t i = 0; i < x; i++)
	{
		cout << arr[i] << " ";
	}
}