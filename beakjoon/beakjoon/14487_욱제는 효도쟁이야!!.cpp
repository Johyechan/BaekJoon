#include <iostream>
#include <vector>

using namespace std;

// 브론즈 2

int main()
{
	int n, notgo = 0, answer = 0, temp = 0; // 마을의 수, 안가도 되는 경로, 정답, 비용을 저장할 변수
	vector<int> expense; // i번째에서 i + 1번째 까지 가는데 드는 비용, 최대의 수를 n이라고 가정했을 때 n번째 가격은 n번째에서 1번째로 가는데 드는 비용이다.
	cin >> n; 

	for (int i = 0; i < n; i++) // 각 마을에서 마을로 갈 때 드는 비용들을 받음
	{
		int v;
		cin >> v;
		expense.push_back(v);
	}

	for (int i = 0; i < expense.size(); i++) // 가장 비용이 많이 드는 곳을 찾는 반복문
	{
		if (temp < expense[i])
		{
			notgo = i;
			temp = expense[i];
		}
	}

	for (int i = 0; i < expense.size(); i++) // 가장 비용이 많이 드는 곳은 무시함 결과적으로 최소 가격은 같음
	{
		if (i == notgo)
			continue;
		answer += expense[i];
	}

	cout << answer;
}