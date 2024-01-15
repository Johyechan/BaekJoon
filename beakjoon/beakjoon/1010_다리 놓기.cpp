#include <iostream>

using namespace std;

// 이항 정리를 이용하는 문제라고 한다 https://m.blog.naver.com/heoyoonhomath/222815013280 - 이항정리란?
// https://velog.io/@jmink002/C1010 - 백준 풀이 & 설명

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		long long answer = 1;
		int r = 1;
		for (int j = n2; j > n2 - n1; j--)
		{
			answer *= j;
			answer /= r;
			r++;
		}
		cout << answer << '\n';
	}
}