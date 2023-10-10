#include <iostream>

using namespace std;

// 브론즈 2

int main()
{
	int N;		//문어 수를 받는 변수
	cin >> N;

	if (N % 2 == 0)		// 문어 수가 짝수면 1, 2를 문어 수만큼 출력 // 4의 경우 1 2 1 2
	{
		for (int i = 0; i < N; i++)
		{
			if (i % 2 == 0)
			{
				cout << 1 << " ";
			}
			else
				cout << 2 << " ";
		}
	}
	else				// 문어 수가 홀수면 1, 2를 반복해서 출력하지만 마지막에 3출력 // 5의 경우 1 2 1 2 3
	{
		for (int i = 0; i < N; i++)
		{
			if (i == N - 1)
			{
				cout << 3 << " ";
			}
			else if (i % 2 == 0)
			{
				cout << 1 << " ";
			}
			else
				cout << 2 << " ";
		}
	}
}