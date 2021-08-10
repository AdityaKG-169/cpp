#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

void insertAtTail(Node *&head, int data)
{
	Node *newNode = new Node(data);

	if (head == NULL)
	{
		head = newNode;
		return;
	}

	Node *currentNode = head;

	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = newNode;

	return;
}

void insertAtHead(Node *&head, int data)
{

	Node *newNode = new Node(data);

	newNode->next = head;
	head = newNode;
	return;
}

void display(Node *head)
{
	if (head == NULL)
	{
		cout << "Linked List is empty!" << endl;
		return;
	}

	Node *currentNode = head;

	while (currentNode->next != NULL)
	{
		cout << currentNode->data << "-->";
		currentNode = currentNode->next;
	}

	cout << currentNode->data << endl;
	return;
}

void search(Node *head, int val)
{
	Node *currentNode = head;
	while (currentNode != NULL)
	{
		if (currentNode->data == val)
		{
			cout << "Found!" << endl;
			return;
		}
		currentNode = currentNode->next;
	}
	cout << "Not Found!" << endl;
	return;
}

void deletion(Node *&head, int key)
{
	Node *currentNode = head;
	Node *prevNode = head;

	if (head == NULL)
	{
		cout << "Head is null" << endl;
		return;
	}

	while (currentNode->data != key && currentNode->next != NULL)
	{
		prevNode = currentNode;
		currentNode = currentNode->next;
	}

	if (currentNode->data == key)
	{
		prevNode->next = currentNode->next;
		delete currentNode;
	}
	else
	{
		cout << "Data Not Found" << endl;
	}

	return;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *head = NULL;
	insertAtTail(head, 10);
	insertAtTail(head, 20);
	insertAtTail(head, 30);
	insertAtTail(head, 40);
	insertAtHead(head, -1);

	display(head);

	deletion(head, 20);

	display(head);

	return 0;
}
