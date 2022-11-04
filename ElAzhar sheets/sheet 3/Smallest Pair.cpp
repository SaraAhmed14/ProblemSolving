#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include<algorithm>


int main()
{
    int c, v=0,y,u=0;
    cin >> c;
    int arr[100000];
    while (c--)
    {
        cin >> y;
        for (int i = 1; i <= y; i++)
        {
            cin >> arr[i];
        }
        v = (arr[1] + arr[2] + 2 - 1 )+10;
        for (size_t i = 1; i < y; i++)
        {
            for (size_t j = i + 1; j <= y; j++)
            {
              
                u = arr[i] + arr[j] + j - i;
                if (u<v)
                {
                    v = u;
                 
                }
                
            }
          
        }
        cout << v << endl;
        
    }
 
	
  
   

}

 