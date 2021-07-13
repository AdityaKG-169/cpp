#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *link;

	Node(int val)
	{
		data = val;
		link = NULL;
	}
};

void insertAtTail(Node *&head, int val)
{
	Node newNode = Node(val);
	auto addressOfNewNode = &newNode;

	if (head == NULL)
	{
		head = addressOfNewNode;
		return;
	}

	Node *addressofLastNode = head;
	while ((*addressofLastNode).link != NULL)
	{
		addressofLastNode = (*addressofLastNode).link;
	}
	(*addressofLastNode).link = addressOfNewNode;
}

void display(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << (*temp).data << "->";
		temp = (*temp).link;
	}
}

int main()
{
	Node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);

	display(head);
}