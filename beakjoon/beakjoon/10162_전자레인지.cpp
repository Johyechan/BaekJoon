#include <iostream>

using namespace std;

// 브론즈 3

int ABC[] = { 300, 60, 10 };			// 몇 초인지 저장해둔 배열
int answerABC[] = { 0, 0, 0 };			// 몇 초를 몇 번 눌렀는지 저장해둔 배열

bool Greedy(int t)
{
	while (t > 0)	
	{	
		if (t >= ABC[0])				// 정해진 초보다 크거나 같아면 정해진 초만큼 빼고 그 초를 몇 번 눌렀는지 확인 하는 배열에 그 초를 눌렀다고 한 번 증가 시켜줌
		{
			t -= ABC[0];
			answerABC[0]++;
		}
		else if (t >= ABC[1])
		{
			t -= ABC[1];
			answerABC[1]++;
		}
		else
		{
			t -= ABC[2];
			answerABC[2]++;
		}
	}

	if (t < 0)
		return false;		// 만약 정해진 초로 완벽하게 데울 수 없으면 false를 반환

	return true;			// 아니라면 true를 반환
}

int main()
{
	int T;
	cin >> T;
	if (Greedy(T))				// 완벽하게 데울 수 있는지 확인
	{
		for (int i = 0; i < 3; i++)			// 가능하면 정해진 초를 몇 번씩 눌렀는지 출력해주는 반복문
		{
			cout << answerABC[i] << " ";	
		}
	}
	else						// 완벽하게 데울 수 없다면 
		cout << -1;				// -1을 출력
}