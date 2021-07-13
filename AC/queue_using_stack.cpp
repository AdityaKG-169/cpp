#include <iostream>
#include <stack>
using namespace std;

class queue
{
	stack<int> s1;
	stack<int> s2;

public:
	void enqueue(int x)
	{
		s1.push(x);
	}

	int peek()
	{
		if (s1.empty())
		{
			cout << "No Elements found" << endl;
			return -1;
		}

		while (!s1.empty())
		{
			int top = s1.top();
			s1.pop();
			s2.push(top);
		}

		int peekTop = s2.top();

		while (!s2.empty())
		{
			int top = s2.top();
			s2.pop();
			s1.push(top);
		}

		return peekTop;
	}

	bool empty()
	{
		if (!s1.empty())
		{
			return true;
		}
		return false;
	}

	int dequeue()
	{
		if (s1.empty())
		{
			cout << "No Elements found" << endl;
			return;
		}

		int num = s1.top();
		s1.pop();
		if (s1.empty())
		{
			return num;
		}

		int item = dequeue();
		
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