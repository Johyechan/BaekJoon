#include <iostream>
#include <vector>

using namespace std;
// ½Ç¹ö 3

int map[5][5];
int apple[5][5];
int dx[4] = { 0, 1, -1, 0 };
int dy[4] = { 1, 0, 0, -1 };
int ans = 0;

void DFS(int x, int y, int depth)
{
	if (depth == 3)
	{
		if (apple[x][y] >= 2)
			ans = 1;
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			int yy = y + dy[i];
			int xx = x + dx[i];

			if (yy >= 5 || xx >= 5 || yy < 0 || xx < 0) continue;

			if (map[xx][yy] == -1) continue;

			if (map[xx][yy] == 1)
				apple[xx][yy] = max(apple[xx][yy], apple[x][y] + 1);
			else
				apple[xx][yy] = max(apple[xx][yy], apple[x][y]);
			map[x][y] = -1;
			DFS(xx, yy, depth + 1);
		}
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> map[i][j];
			apple[i][j] = 0;
		}
	}

	int x, y;
	cin >> x >> y;

	DFS(x, y, 0);

	cout << ans;
}
