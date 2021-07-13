#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	if (n == 0 || n == 1)
		return n;

	int fibona = fibo(n - 1) + fibo(n - 2);
	return fibona;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << fibo(n) << "\n";

	return 0;
}
