#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// ½Ç¹ö 2
int answer[100001];
vector<bool> visited;
vector<int> tree[100001];

void BFS(int v)
{
	queue<int> q;
	q.push(v);
	visited[v] = true;
	while (!q.empty())
	{
		int n = q.front();
		q.pop();
		for (int i = 0; i < tree[n].size(); i++)
		{
			int x = tree[n][i];
			if (!visited[x])
			{
				q.push(x);
				visited[x] = true;
				answer[x] = n;
			}
		}
	}
}

int main()
{
	int N;
	cin >> N;
	visited.resize(N + 1, false);

	for (int i = 0; i < N - 1; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		tree[n1].push_back(n2);
		tree[n2].push_back(n1);
	}

	BFS(1);

	for (int i = 2; i <= N; i++)
		cout << answer[i] << '\n';
}