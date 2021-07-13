#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
	int data;
	Node *link;

public:
	Node(int d)
	{
		data = d;
		link = NULL;
	}
};

void insertAtTail(Node *&head, int val)
{
	Node *tail = new Node(val);

	Node *temp = head;

	while ((*temp).link != NULL)
	{
		temp = temp->link;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *head = new Node(0);

	insertAtTail(head, 20);
}
