#include <iostream>

using namespace std;

// 브론즈 3

int change[4] = { 25, 10, 5, 1 };		// 거스름돈의 가치
int answerChange[4] = { 0, 0, 0, 0 };	// 거스름돈의 개수

void Greedy(int n)
{
	while (n != 0)
	{
		if (n >= change[0])				// 가치보다 크거나 같다면 가치 만큼 빼고 그 가치의 거스름돈의 개수를 늘려줌
		{
			n -= change[0];
			answerChange[0]++;
		}
		else if (n >= change[1])
		{
			n -= change[1];
			answerChange[1]++;
		}
		else if (n >= change[2])
		{
			n -= change[2];
			answerChange[2]++;
		}
		else if(n >= change[3])
		{
			n -= change[3];
			answerChange[3]++;
		}
	}
}

int main()
{
	int T;
	cin >> T;						// 테스트 케이스의 개수를 받음

	for (int i = 0; i < T; i++)		// 테스트 케이스 만큼 반복
	{
		int n;						// 얼마의 거스름돈이 필요한지 받을 변수
		cin >> n;					// 거스름돈의 가치를 받음
		Greedy(n);					// 거스름돈의 가치를 넣어줌
		for (int j = 0; j < 4; j++)
		{
			cout << answerChange[j] << " ";		// 각 거스름돈의 개수를 출력
		}
		fill_n(answerChange, 4, 0);			// 다음 테스트 케이스를 위해 거스름돈의 개수를 0으로 초기화
		cout << "\n";
	}

}