#include <iostream>

using namespace std;

// ���� ������ �̿��ϴ� ������� �Ѵ� https://m.blog.naver.com/heoyoonhomath/222815013280 - ����������?
// https://velog.io/@jmink002/C1010 - ���� Ǯ�� & ����

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