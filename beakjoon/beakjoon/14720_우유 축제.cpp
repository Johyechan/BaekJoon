#include <iostream>
#include <vector>

using namespace std;

// 브론즈 3

vector<int> milkStore;
int answer = 0;

// 우유 마시는 순서 딸기 -> 초코 -> 바나나
void Greedy()
{
	int temp = 2;									// 이전 우유 가게 변수,2로 세팅 왜냐하면 바나나 우유 다음 딸기 우유를 마셔야 하기 때문에 편하게 코딩하기 위해 2로 세팅
	for (int i = 0; i < milkStore.size(); i++)		// 우유 가게 만큼 반복
	{
		if (temp == 2 && milkStore[i] == 0)			// 이전 우유가게가 바나나 우유 가게이고 현재 우유 가게가 딸기 우유 가게 인지 확인 
		{
			temp = milkStore[i];					// 맞다면 현재 우유 가게를 딸기 우유 가게로 하고 
			answer++;								// 마신 우유 개수를 늘림
		}
		else if (temp == 0 && milkStore[i] == 1)	// 이전이 딸기 인지 확인 현재가 초코인지 확인
		{
			temp = milkStore[i];					// 맞다면 현재 우유 가게는 초코
			answer++;								// 마신 우유 개수를 늘림
		}
		else if (temp == 1 && milkStore[i] == 2)	// 이전이 초코인지 확인 현재가 바나나인지 확인
		{
			temp = milkStore[i];					// 맞다면 현재 우유 가게는 바나나
			answer++;								// 마신 우유 개수를 늘림
		}
	}
}

int main()
{
	int N;								// 우유 가게의 개수를 받은 변수
	cin >> N;							// 우유 가게의 개수를 받음

	for (int i = 0; i < N; i++)			// 우유 가게의 개수 만큼 반복
	{
		int n;							// 무슨 우유 가게인지 받는 변수 (0은 딸기 우유, 1은 초코 우유, 2는 바나나 우유)
		cin >> n;
		milkStore.push_back(n);			// 가게의 순서를 알기 위한 벡터에 넣어줌
	}

	Greedy();							// 그리디 알고리즘을 돌림

	cout << answer;						// 마실 수 있는 최대의 우유 개수를 출력
}