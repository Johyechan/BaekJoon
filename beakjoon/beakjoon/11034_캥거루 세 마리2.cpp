#include<iostream>

using namespace std;

// ����� 3

int main()
{
	int A, B, C;								// Ļ�ŷ��� ��ǥ�� �ޱ� ���� ����
	while (cin >> A >> B >> C)					// Ļ�ŷ��� ��ǥ�� ����
	{												
		cout << max(B - A, C - B) - 1 << "\n";	// �� ��ǥ�� ���� ���� ���� �� ū�� ���ϰ� �ű⼭ 1�� ���� Ļ�ŷ簡 �ִ�� ���� �� �� �ִ� �� �� ����
	}
}