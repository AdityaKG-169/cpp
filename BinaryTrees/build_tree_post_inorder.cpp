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

Node *buildTree(int postorder[], int inorder[], int start, int end)
{
	if (start > end)
		return NULL;

	static int idx = 6;
	int val = postorder[idx];
	idx--;

	Node *node = new Node(val);

	int curr = arrSearch(inorder, start, end, val);

	if (end != curr)
	{
		node->right = buildTree(postorder, inorder, curr + 1, end);
	}
	if (start != curr)
	{
		node->left = buildTree(postorder, inorder, start, curr - 1);
	}

	return node;
}

void preorder(Node *root)
{
	if (root == NULL)
		return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);

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

	int postorder[] = {1, 2, 4, 5, 3, 6, 7};
	int inorder[] = {4, 2, 5, 1, 6, 3, 7};

	int start = 0;
	int end = (sizeof(postorder) / 4) - 1;

	Node *root = buildTree(postorder, inorder, start, end);
	preorder(root);

	return 0;
}
