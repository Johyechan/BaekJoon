#include <iostream>
#include <vector>

using namespace std;

// 실버 4

vector<vector<char>> floors;
bool visited[51][51] = { false, };
int answer = 0;
char now = '-';

void DFS(int n1, int n2)
{
	if (floors[n1][n2] != now) return;
	visited[n1][n2] = true;
	if (floors[n1][n2] == '-')
	{
		if (n2 + 1 < floors[n1].size())
		{
			if (!visited[n1][n2 + 1])
				DFS(n1, n2 + 1);
		}
	}
	else
	{
		if (n1 + 1 < floors.size())
		{
			if (floors[n1 + 1][n2] == '|')
			{
				if (!visited[n1 + 1][n2])
					DFS(n1 + 1, n2);
			}
		}
	}
}

int main()
{
	int N, M;
	cin >> N >> M;
	floors.resize(N, vector<char>(M));
	for (int i = 0; i < N; i++) // 세로
	{
		for (int j = 0; j < M; j++) // 가로
		{
			cin >> floors[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (!visited[i][j])
			{
				visited[i][j] = true;
				answer++;
				if(floors[i][j] == '-')
				{
					if (j + 1 < M)
					{
						if (!visited[i][j + 1])
						{
							now = '-';
							DFS(i, j + 1);
						}
					}
				}
				else
				{
					if (i + 1 < N)
					{
						if (!visited[i + 1][j])
						{
							now = '|';
							DFS(i + 1, j);
						}
					}
					
				}
			}
		}
	}

	cout << answer;
}