#include <iostream>

using namespace std;

// 브론즈 2

int answer = 0;				// 거스름돈의 개수

void Greedy(int n)			// 최소의 거스름돈을 구하는 함수
{
	while (n != 0)			// 딱 거스름돈을 맞춰서 주면 끝
	{
		if (n >= 500)		// 500엔보다 받아야 할 거스름 돈이 같거나 크다면 500엔을 주고 거스름돈에서 빼고 거스름돈 개수를 1개 늘림
		{
			n -= 500;
			answer++;
		}
		else if (n >= 100)	// 몇 엔인지만 다르고 위와 같음, 아래도 마찬가지
		{
			n -= 100;
			answer++;
		}
		else if (n >= 50)
		{
			n -= 50;
			answer++;
		}
		else if (n >= 10)
		{
			n -= 10;
			answer++;
		}
		else if (n >= 5)
		{
			n -= 5;
			answer++;
		}
		else if (n >= 1)
		{
			n -= 1;
			answer++;
		}
	}
}

int main()
{
	int n;				// 가격이 얼마인지 받기 위한 변수
	cin >> n;			// 가격이 얼마인지 받음

	Greedy(1000 - n);	// 가진 돈 1000엔에서 가격을 빼서 함수에 넣어줌

	cout << answer;		// 거스름 돈의 개수를 출력
}