#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
	int start = 0;
	int end = size - 1;

	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
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

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	int size = sizeof(arr) / sizeof(int);

	reverseArray(arr, size);
	printArray(arr, size);

	return 0;
}