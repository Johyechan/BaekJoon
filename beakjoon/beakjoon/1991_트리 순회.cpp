#include <iostream>
#include <map>

using namespace std;

// 실버 1, 수업 들은 것

void preorder(char ch);
void inorder(char ch);
void postorder(char ch);
map<char, pair<char, char>>node;

int main()
{
	int N;
	char node1, node2, node3;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> node1 >> node2 >> node3;
		node[node1] = { node2, node3 };
	}
	preorder('A');
	cout << "\n";
	inorder('A');
	cout << "\n";
	postorder('A');
	cout << "\n";
}

void preorder(char ch)
{
	if (ch == '.')
		return;
	cout << ch;
	preorder(node[ch].first);
	preorder(node[ch].second);
}

void inorder(char ch)
{
	if (ch == '.')
		return;
	inorder(node[ch].first);
	cout << ch;
	inorder(node[ch].second);
}

void postorder(char ch)
{
	if (ch == '.')
		return;
	postorder(node[ch].first);
	postorder(node[ch].second);
	cout << ch;
}
