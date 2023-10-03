#include <iostream>

using namespace std;

// 브론즈 3

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, temp = 0, answer = 0;	// N은 첨탑 수, temp는 이전 첨탑의 길이를 저장하기 위한 변수, answer는 몇 번 밀어야 하는지 저장하는 변수
	cin >> N;						// 첨탑 수를 받음

	for (int i = 0; i < N; i++)		// 첨탑 수 만큼 반복
	{
		int n;						// 첨탑 길이를 받기 위한 변수
		cin >> n;
		if (temp <= n)				// 첨탑의 길이가 이전 첨탑의 길이보다 크다면 연속해서 넘어가지 않기 때문에 한 번 더 밀어야 됨
			answer++;				// 그래서 answer를 1 늘려줌
		temp = n;					// 그리고 현재 첨탑의 길이는 temp에 저장
	}

	cout << answer;					// 몇 번 밀어야 하는지 출력
}