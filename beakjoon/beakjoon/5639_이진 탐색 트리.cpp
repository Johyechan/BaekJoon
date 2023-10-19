#include <iostream>
#include <vector>

using namespace std;

// °ñµå 5

struct Node
{
	int data = 0;
	struct Node* left = nullptr;
	struct Node* right = nullptr;
};

Node mainroot;

void InsertNode(Node* root, Node* node)
{
	if (root == NULL)
		root = node;
	else
	{
		if (root->data == node->data)
			return;
		else if (root->data < node->data)
		{
			if (root->right == NULL)
				root->right = node;
			else
				InsertNode(root->right, node);
		}
		else
		{
			if (root->left == NULL)
				root->left = node;
			else
				InsertNode(root->left, node);
		}
	}
}

Node* MakeNode(int num)
{
	Node* node = new Node;
	node->data = num;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void PostorTraverse(Node* node)
{
	if (node == NULL)
		return;
	PostorTraverse(node->left);
	PostorTraverse(node->right);
	if(node->data != 0)
	cout << node->data << "\n";
}

int main()
{
	int num;
	while (cin >> num)
	{
		if (num == -1)
			break;
		InsertNode(&mainroot, MakeNode(num));
	}

	PostorTraverse(&mainroot);
}