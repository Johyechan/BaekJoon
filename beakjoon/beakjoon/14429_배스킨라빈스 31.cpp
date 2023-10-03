#include <iostream>

using namespace std;

// 브론즈 1

int answerNum = 0;
int answerLength = 10000;

int VictoryPlan(int j, int m) // 승리 공식
{
	int answer = 1;						
	int r = j % m;
	while (r != j)
	{
		r += m;
		answer++;
	}
	return answer;
}

int main()
{
	int n, j, m;									// n은 플레이 할 판수 j는 전체 개수이자 말하면 지는 수, m은 한 턴에 한 번에 말할 수 있는 최대 자연수의 개수

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		cin >> j >> m;
		temp = VictoryPlan(j - 1, 1 + m);	// 승리 공식을 통해 몇 번 말해야 이길 수 있는지 temp에 저장
		if (answerLength > temp)			// 가장 짧은 승리 턴 횟수를 구함
		{
			answerLength = temp;
			answerNum = i + 1;
		}
	}

	cout << answerNum << " " << answerLength * 2;	// 몇 번째 게임이 가장 빨리 끝날 수 있는지와 그 턴을 순서대로 출력
}