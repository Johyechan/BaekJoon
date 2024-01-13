#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;

// 실버 4
// 이 문제를 보니 힌트는 연결 그래프에 있었다. 연결 그래프란 모든 정점들에 대해서 어느 두 정점을 잡아도 갈 수 있는 경로가 존재하는 그래프이다. 
// 그래서 생각을 해보니 최소의 가중치를 지닌다.(가중치가 없음), 모든 노드가 연결 된다 -> MST였다
// MST는 최소 신장 트리로 간선의 가중치를 고려하여 최소 비용의 Spanning Tree를 선택하는 것 하여 특징으로는 
// 간선의 가중치의 합이 최소여야 하고, n개의 노드를 가지는 그래프에 대해서 반드시 n - 1개의 간선만을 사용해야 한다, 사이클이 포함되어서는 안된다. 
// 하여 답을 그냥 n - 1을 출력하게 했더니 답이 나왔다. 
// 사실 많이 헤맸는데 여기 저기 찾아보면서 새로운 것을 배웠다.
// https://gmlwjd9405.github.io/2018/08/28/algorithm-mst.html 여기서 MST관련된 것을 읽었다.

int main() 
{
	int T, N, M; // 테스트 케이스 수, 국가 수, 비행기 종류
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N >> M;
		v.resize(N + 1);
		for (int j = 0; j < M; j++)
		{
			int n1, n2;
			cin >> n1 >> n2;
		}
		cout << N - 1 << '\n';
	}
}