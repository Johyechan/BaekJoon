#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// ½Ç¹ö 4

bool visited[3][3] = { false, };
vector<vector<int>> Map;
int dx[2] = { 0, 1 };
int dy[2] = { 1, 0 };
int m_size;

string BFS(vector<vector<int>> v)
{
	queue<pair<int, int>> q;
	q.push({ 0,0 });
	visited[0][0] = true;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		if (v[x][y] == -1)
		{
			return "HaruHaru";
		}

		for (int i = 0; i < 2; i++)
		{
			int xx = x + dx[i] * v[x][y];
			int yy = y + dy[i] * v[x][y];

			if (0 <= xx && xx <= m_size - 1 && 0 <= yy && yy <= m_size - 1)
			{
				if (!visited[xx][yy])
				{
					visited[xx][yy] = true;
					q.push({ xx, yy });
				}
			}
		}
	}
	return "Hing";
}

int main()
{
	cin >> m_size;
	Map.resize(m_size, vector<int>(m_size));
	for (int i = 0; i < m_size; i++)
	{
		for (int j = 0; j < m_size; j++)
		{
			cin >> Map[i][j];
		}
	}
	cout << BFS(Map);
}