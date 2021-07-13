#include <bits/stdc++.h>
using namespace std;

bool isFound(int arr[], int size, int el)
{

	int start = 0;
	int end = size - 1;

	int mid = (start + end) / 2;

	while (start <= end)
	{
		if (mid > el)
		{
			end = mid;
		}
		else if (mid < el)
		{
			start = mid;
		}
		else
			return true;
	}

	return false;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[] = {10, -2, 34, 55, -22, -34, -9, 9, 12};
	int b[] = {2, 34, 4, 5, 6, 7};

	int aSize = sizeof(a) / 4;
	int bSize = sizeof(b) / 4;

	vector<int> v1;

	for (int i = 0; i < aSize; i++)
	{
		v1.push_back(a[i]);
	}

	for (int i = 0; i < bSize; i++)
	{
		if (!isFound(a, aSize, b[i]))
		{
			v1.push_back(b[i]);
		}
	}

	cout << v1.size();

	return 0;
}