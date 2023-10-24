#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// ½Ç¹ö 2

vector<vector<int>> arr(100001);
int n = 0;
int visited[100001];
queue<int> q;

void BFS(int v)
{
	n++;
	visited[v] = n;
	q.push(v);
	while (!q.empty())
	{
		int num = q.front();
		q.pop();
		for (int i = 0; i < arr[num].size(); i++)
		{
			if (visited[arr[num][i]] == 0)
			{
				n++;
				visited[arr[num][i]] = n;
				q.push(arr[num][i]);
			}
		}
	}
}

int main()
{
	int N, M, R;
	cin >> N >> M >> R;

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	for (int i = 1; i <= N; i++)
	{
		sort(arr[i].begin(), arr[i].end(), greater<>());
	}

	BFS(R);

	for (int i = 1; i <= N; i++)
	{
		cout << visited[i] << "\n";
	}
}