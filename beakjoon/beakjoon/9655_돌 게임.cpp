#include <iostream>

using namespace std;

// 실버 5

int main()
{
	int n;				// 돌이 몇 개인지 알기 위한 변수
	cin >> n;			// 돌이 몇 개인지 받음
	if (n % 2 != 0)		// 돌의 개수가 홀수라면 SK의 승
	{
		cout << "SK";
	}
	else				// 돌의 개수가 짝수라면 CY의 승
		cout << "CY";
}