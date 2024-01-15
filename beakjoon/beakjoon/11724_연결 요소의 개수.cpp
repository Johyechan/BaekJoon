#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// ½Ç¹ö 2

vector<vector<int>> linked;
bool visited[10001];
int answer = 0;

void BFS(int n)
{
	queue<int> q;
	q.push(n);
	visited[n] = true;
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int i = 0; i < linked[now].size(); i++)
		{
			if (!visited[linked[now][i]])
			{
				q.push(linked[now][i]);
				visited[linked[now][i]] = true;
			}
		}
	}
	answer++;
}

int main()
{
	int N, M;
	cin >> N >> M;
	linked.resize(N + 1);
	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		linked[u].push_back(v);
		linked[v].push_back(u);
	}
	for (int i = 1; i < N + 1; i++)
	{
		if (!visited[i])
		{
			BFS(i);
		}
	}
	cout << answer;
}