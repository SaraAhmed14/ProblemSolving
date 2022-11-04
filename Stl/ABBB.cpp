#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define space " "
#define en endl

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		stack<char> st;
		st.push(s[0]);
		for (int i = 1; i < s.size(); i++)
		{
			if (st.empty())
			{
				st.push(s[i]);
			}
			else if (st.top() == 'A' && s[i] == 'B')
			{
				st.pop();
			}
			else if (st.top() == 'B' && s[i] == 'B')
			{
				st.pop();
			}
			else
			{
				st.push(s[i]);
			}
		}
		cout << st.size() << en;
	}
}