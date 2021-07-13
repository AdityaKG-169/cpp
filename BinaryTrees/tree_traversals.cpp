#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int x)
	{
		data = x;
		left = NULL;
		right = NULL;
	}
};

void preorder(Node *root)
{
	cout << root->data << " ";

	if (root->left != NULL)
		preorder(root->left);
	else
		return;
	if (root->right != NULL)
		preorder(root->right);
	else
		return;
}

void postorder(Node *root)
{

	if (root->left != NULL)
		postorder(root->left);
	else
	{
		cout << root->data << " ";
		return;
	}
	if (root->right != NULL)
		postorder(root->right);
	else
	{
		cout << root->data << " ";
		return;
	}
	cout << root->data << " ";
}

void inorder(Node *root)
{
	if (root->left != NULL)
		inorder(root->left);
	else
	{
		cout << root->data << " ";
		return;
	}
	cout << root->data << " ";
	if (root->right != NULL)
		inorder(root->right);
	else
	{
		cout << root->data << " ";
		return;
	}
}

void levelOrder(Node *root)
{
	if (root == NULL)
		return;

	queue<Node *> q;
	q.push(root);

	while (!q.empty())
	{
		Node *node = q.front();
		cout << node->data << " ";
		q.pop();

		if (node->left != NULL)
		{
			q.push(node->left);
		}
		if (node->right != NULL)
		{
			q.push(node->right);
		}
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	levelOrder(root);
	return 0;
}
