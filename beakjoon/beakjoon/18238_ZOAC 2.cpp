#include <iostream>
#include <string>

using namespace std;

// 브론즈 2

int main()
{
	string s; // 문자열을 받음
	int n1 = 0, n2 = 0, answer = 0;
	char c = 'A';
	cin >> s;
	int n3 = c;

	for (int i = 0; i < s.size(); i++) // 문자열 크기 만큼 반복
	{
		n1 = abs(s[i] - n3);	// 원래대로 돌았을 때 크기를 구한다.
		n2 = 26 - n1;			// 반대로 보았을 때의 크기를 구한다.

		answer += min(n1, n2);	// 둘 중 더 작은 값을 정답에 더한다.
		n3 = s[i];				// 결정된 알파벳으로 n3을 다시 지정해 준다.
	}

	cout << answer;
}