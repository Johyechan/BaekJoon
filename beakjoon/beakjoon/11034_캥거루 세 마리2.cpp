#include<iostream>

using namespace std;

// 브론즈 3

int main()
{
	int A, B, C;								// 캥거루의 좌표를 받기 위한 변수
	while (cin >> A >> B >> C)					// 캥거루의 좌표를 받음
	{												
		cout << max(B - A, C - B) - 1 << "\n";	// 두 좌표의 사이 값중 누가 더 큰지 구하고 거기서 1을 빼면 캥거루가 최대로 움직 일 수 있는 수 가 나옴
	}
}