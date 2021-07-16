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

int arrSearch(int arr[], int start, int end, int val)
{
	for (int i = start; i <= end; i++)
	{
		if (arr[i] == val)
		{
			return i;
		}
	}

	return -1;
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{

	if (start > end)
	{
		return NULL;
	}

	static int idx = 0;
	int val = preorder[idx];
	idx++;

	Node *node = new Node(val);

	int curr = arrSearch(inorder, start, end, val);

	if (start != curr)
	{
		node->left = buildTree(preorder, inorder, start, curr - 1);
	}
	if (end != curr)
	{
		node->right = buildTree(preorder, inorder, curr + 1, end);
	}

	return node;
}

void postorderTrav(Node *root)
{
	if (root == NULL)
		return;

	postorderTrav(root->left);
	postorderTrav(root->right);
	cout << root->data << " ";

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

	int preorder[] = {1, 2, 4, 5, 3, 6, 7};
	int inorder[] = {4, 2, 5, 1, 6, 3, 7};

	int start = 0;
	int end = sizeof(preorder) / 4 - 1;

	Node *root = buildTree(preorder, inorder, start, end);
	postorderTrav(root);

	return 0;
}
