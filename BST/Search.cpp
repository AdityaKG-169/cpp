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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node *root = new Node(3);

	root->left = new Node(2);
	root->right = new Node(7);

	root->left->left = new Node(1);

	root->right->left = new Node(5);
	root->right->right = new Node(8);

	root->right->left->left = new Node(4);
	root->right->left->right = new Node(6);

	return 0;
}
