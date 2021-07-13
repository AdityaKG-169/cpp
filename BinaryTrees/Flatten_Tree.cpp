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

void flatten(Node *root)
{

	if (root == NULL || (root->left == NULL && root->right == NULL))
		return;

	if (root->left != NULL)
	{
		flatten(root->left);

		Node *temp = root->right;
		root->right = root->left;
		root->left = NULL;

		Node *rightTail;
		while (root->right != NULL)
		{
			rightTail = root->right;
		}

		rightTail = temp;
	}

	flatten(root->right);
}

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

	flatten(root);

	preorder(root);	

	return 0;
}
