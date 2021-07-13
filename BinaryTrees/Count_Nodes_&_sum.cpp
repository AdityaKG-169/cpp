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

int countSum(Node *root)
{
	if (root == NULL)
		return 0;
	return countSum(root->left) + countSum(root->right) + root->data;
}

int countNodes(Node *root)
{
	int rootNode = 1;
	int leftTree = 0;
	int rightTree = 0;

	if (root != NULL)
		leftTree = countNodes(root->left);
	else
		return 0;
	if (root != NULL)
		rightTree = countNodes(root->right);
	else
		return 0;

	int total = rootNode + leftTree + rightTree;

	return total;
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

	cout << countNodes(root) << endl;
	cout << countSum(root) << endl;

	return 0;
}
