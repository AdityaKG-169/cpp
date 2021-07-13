#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	getline(cin, s);

	stack<string> st;
	string temp;

	for (int i = 0; i < s.size(); i++)
	{
		if (s.at(i) != ' ')
		{
			temp = temp + s.at(i);
		}
		else if (s.at(i) == ' ' || i == s.size() - 1)
		{
			st.push(temp);
			temp = "";
		}
	}

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
		cout << " ";
	}

	return 0;
}
