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
		left = nullptr;
		right = nullptr;
	}
};

int diam(Node *root)
{
	int maxRight;
	int maxLeft;

	if (root == nullptr)
		return 0;

	maxLeft = diam(root->left) + 1;
	maxRight = diam(root->right) + 1;

	return max(maxLeft, maxRight) + 1;
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

	cout << diam(root) << endl;

	return 0;
}

int pairSumSeq(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += pairSum(i, i + 1);
	}

	return sum;
}

pairSum(int a, int b)
{
	return a + b;
}