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

Node *addEl(Node *root, int val)
{
	if (root == NULL)
		return new Node(val);

	if (val < root->data)
		root->left = addEl(root->left, val);
	else
		root->right = addEl(root->right, val);

	return root;
}

void inorder(Node *root)
{
	if (root == NULL)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(5);
	addEl(root, 1);
	addEl(root, 3);
	addEl(root, 4);
	addEl(root, 2);
	addEl(root, 7);

	inorder(root);

	return 0;
}
