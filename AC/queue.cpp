#include <iostream>
using namespace std;
#define n 20

class queue
{
	int *arr;
	int front;
	int back;

public:
	queue()
	{
		arr = new int[n];
		front = -1;
		back = -1;
	}

	void enqueue(int num)
	{

		if (back == n - 1)
		{
			cout << "Queue overflowed" << endl;
			return;
		}

		back++;
		arr[back] = num;

		if (front == -1)
		{
			front++;
		}
	}

	void dequeue()
	{
		if (front == -1 || back < front)
		{
			cout << "No elements to pop" << endl;
			return;
		}

		front++;
	}

	int peek()
	{
		if (front == -1 || back < front)
		{
			cout << "No elements to peek" << endl;
			return -1;
		}

		return arr[front];
	}

	bool empty()
	{
		if (front == -1 || back < front)
		{
			return true;
		}

		return false;
	}
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	queue q;

	q.enqueue(10);
	q.enqueue(20);

	cout << q.peek() << endl;
	q.dequeue();

	cout << q.peek() << endl;
	q.dequeue();

	cout << q.empty() << endl;

	return 0;
}