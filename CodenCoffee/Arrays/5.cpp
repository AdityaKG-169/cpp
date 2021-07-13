#include <bits/stdc++.h>
using namespace std;

void correctArr(int arr[], int size)
{

	int start = 0;
	int end = size - 1;

	while (start < end)
	{
		if (arr[start] <= 0)
			start++;
		if (arr[end] >= 0)
			end--;

		else
		{
			swap(arr[start], arr[end]);
			start++;
			end--;
		}
	}
}

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[] = {10, -2, 34, 55, -22, -34, -9, 9, 12};
	int size = sizeof(arr) / 4;
	correctArr(arr, size);
	printArr(arr, size);

	return 0;
}