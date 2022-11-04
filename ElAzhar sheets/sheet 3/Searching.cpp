#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>

int main()
{
     int arr[100000];
  int x,y,v=0,o=0;
  cin >> x;
  for (size_t i = 0; i < x; i++)
  {
      cin >> arr[i];
  }
  cin >> y;
  for (size_t i = 0; i <x; i++)
  {
      if (arr[i]==y)
      {
           v++;
           o = i;
          break;
      } 
  }
  if (v>0)
  {
      cout << o;
  }
  else
  {
      cout << "-1";
  }

}