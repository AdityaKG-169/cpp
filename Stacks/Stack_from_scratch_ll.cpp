#include <iostream>
using namespace std;
#define n 20

class Node
{
	int data;
	int *next;

public:
	Node(int x)
	{
		data = x;
		next = NULL;
	}

}

class Stack
{
	public:
	
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	Stack s;

	s.push(13);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	return 0;
}