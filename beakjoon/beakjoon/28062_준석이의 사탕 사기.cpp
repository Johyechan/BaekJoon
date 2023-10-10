#include <iostream>

using namespace std;

// 브론즈 2

int main()
{
	int N, answer = 0, minvalue = 1000; // 사탕 묶음 개수, 정답, 사탕 홀수 개중 가장 작은 값을 저장하는 변수
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a; // 사탕 묶음 당 사탕 개수
		cin >> a;
		answer += a;
		if (a % 2 == 1)
		{
			if (a < minvalue) //사탕이 홀수 개인 경우 minvalue보다 작은지 확인하고 작다면 minvalue를 a값으로 바꿔준다.
				minvalue = a;
		}
	}
	if (answer % 2 == 1) // answer가 홀수라면 가장 작은 홀수 값을 빼준다.
		answer -= minvalue;
	cout << answer;
}