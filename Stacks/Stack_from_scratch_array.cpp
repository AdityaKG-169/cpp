#include <iostream>
#include <string.h>
using namespace std;
#define n 20

class Stack
{
	int *arr;
	int start;
	int end;

public:
	Stack()
	{
		arr = new int[n];
		start = -1;
		end = -1;
	}

	void push(int x)
	{

		if (end == n - 1)
		{
			cout << "Stack Overflow" << endl;
			return;
		}

		if (start == -1)
			start++;

		end++;
		arr[end] = x;
		return;
	}

	void pop()
	{
		if (start == -1 || start > end)
		{
			cout << "No element to pop" << endl;
			return;
		}

		start++;
	}

	int top()
	{
		if (start == -1 || start > end)
		{
			cout << "No elements in the stack" << endl;
			return -1;
		}

		return arr[start];
	}

	bool empty()
	{
		if (start == -1 || start > end)
			return true;

		return false;
	}
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	return 0;
}