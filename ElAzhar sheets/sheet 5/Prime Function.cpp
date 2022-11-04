#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;
 
void prime(int N)
{
 
		bool prime = true;
		if (N == 0 || N == 1)
		{
			cout << "NO" << endl;
			prime = false;
		
		}
 
		for (int i = 2; i <= sqrt(N); i++)
		{
			if (N % i == 0) {
				prime = false;
				cout << "NO" << endl;
				break;
			}
		}
		if (prime) { cout << "YES"<<endl; }
 
	}
 
 
 
int main()
{
	int tc;
	cin >> tc;
	int N;
 
 
 
while (tc--){
		cin >> N;
		prime(N);
 
	}
 
 
}