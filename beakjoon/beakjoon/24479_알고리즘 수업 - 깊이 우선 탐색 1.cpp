#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 실버 2

vector<vector<unsigned int>> arr(100001); // 그래프
int visited[100001] = { 0, }; // 방문 확인
int n = 0;

void DFS(int v)
{
	n++;
	visited[v] = n;
	for (int i = 0; i < arr[v].size(); i++)
	{
		if (visited[arr[v][i]] == 0)
		{
			DFS(arr[v][i]);
		}
	}
}


int main()
{
	int N, M, R; // 정점 수, 간선 수, 시작 정점
	cin >> N >> M >> R;

	for (int i = 0; i < M; i++)
	{
		int u, v; // 양방향 간선(연결된 정점 표시)
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	for (int i = 0; i < N; i++)
	{
		sort(arr[i].begin(), arr[i].end());
	}

	DFS(R);

	for (int i = 1; i <= N; i++)
	{
		cout << visited[i] << "\n";
	}
}