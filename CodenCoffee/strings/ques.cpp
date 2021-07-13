#include <iostream>
#include <string.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;

	if (s2.size() < s1.size())
	{
		cout << "False Strings" << endl;
		return 0;
	}

	for (int i = 0; i < s2.size(); i++)
	{
		if (s1.find(s2.at(i)) != string ::npos)
		{
			s1.erase(s1.find(s2.at(i)), 1);
		}
	}

	

	return 0;
}