#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// ½Ç¹ö 3

vector<vector<int>> computerlink;
bool visited[101] = { false, };
int answer = 0;

void BFS(int n)
{
	queue<int> q;
	q.push(n);
	visited[n] = true;
	while (!q.empty())
	{
		int num = q.front();
		q.pop();
		for (int i = 0; i < computerlink[num].size(); i++)
		{
			int linked = computerlink[num][i];

			if (!visited[linked])
			{
				visited[linked] = true;
				q.push(linked);
				answer++;
			}
		}
	}
}

int main()
{
	int computers, linked;
	cin >> computers >> linked;
	computerlink.resize(computers);
	for (int i = 0; i < linked; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		computerlink[n1 - 1].push_back(n2 - 1);
		computerlink[n2 - 1].push_back(n1 - 1);
	}

	BFS(0);

	cout << answer;
}