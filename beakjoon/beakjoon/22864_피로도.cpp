#include <iostream>

using namespace std;

// 브론즈 2

int main()
{
	// 조건 피로도가 쌓여 일을 처리하거나 쉬는 것은 모두 1시간 간격이다.
	int A, B, C, M, Fatigue = 0, answer = 0; // 피로도가 쌓이는 정도, 한 번 쌓일 때 처리가능한 일, 줄어드는 피로도, 최대 피로도(한계치), 현재 피로도, 정답
	cin >> A >> B >> C >> M;

	for (int i = 0; i < 24; i++) // 하루는 24시간이기 때문에 24번 반복한다.
	{
		if (Fatigue + A <= M) // 일을 한 후의 피로도가 한계치를 넘지 않는 경우 피로도를 쌓고 일을 처리한다.
		{
			Fatigue += A;
			answer += B;
		}
		else					// 아니라면 쉬어서 피로도를 줄인다. 하지만 일은 처리되지 않는다.
		{
			Fatigue -= C;
			if (Fatigue < 0)	// 피로도는 0이 최하이다. 음수로 넘어가지 않게 해준다.
				Fatigue = 0;
		}
	}

	cout << answer;
}