#include <iostream>
#include <string>

using namespace std;

// ����� 2

int main()
{
	string s; // ���ڿ��� ����
	int n1 = 0, n2 = 0, answer = 0;
	char c = 'A';
	cin >> s;
	int n3 = c;

	for (int i = 0; i < s.size(); i++) // ���ڿ� ũ�� ��ŭ �ݺ�
	{
		n1 = abs(s[i] - n3);	// ������� ������ �� ũ�⸦ ���Ѵ�.
		n2 = 26 - n1;			// �ݴ�� ������ ���� ũ�⸦ ���Ѵ�.

		answer += min(n1, n2);	// �� �� �� ���� ���� ���信 ���Ѵ�.
		n3 = s[i];				// ������ ���ĺ����� n3�� �ٽ� ������ �ش�.
	}

	cout << answer;
}