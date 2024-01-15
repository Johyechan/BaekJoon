#include <iostream>
#include <queue>

#define SIZE 1000010
using namespace std;

// ½Ç¹ö 3

long long a, k;
long long visited[SIZE];

int BFS(int a)
{
	queue<int> q;
	q.push(a);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		if (now == k)
		{
			return visited[now];
		}
		if (now + 1 <= SIZE && visited[now + 1] == 0)
		{
			q.push(now + 1);
			visited[now + 1] = visited[now] + 1;
		}
		if (now * 2 <= SIZE && visited[now * 2] == 0)
		{
			q.push(now * 2);
			visited[now * 2] = visited[now] + 1;
		}
	}
}

int main()
{
	cin >> a >> k;
	cout << BFS(a);
}