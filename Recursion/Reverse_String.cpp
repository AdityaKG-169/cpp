#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
	if (s.size() == 0)
		return;

	reverse(s.substr(1,s.size()-1));
	cout << s.at(0);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	reverse(s);

	return 0;
}
