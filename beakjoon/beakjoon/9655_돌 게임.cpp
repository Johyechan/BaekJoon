#include <iostream>

using namespace std;

// �ǹ� 5

int main()
{
	int n;				// ���� �� ������ �˱� ���� ����
	cin >> n;			// ���� �� ������ ����
	if (n % 2 != 0)		// ���� ������ Ȧ����� SK�� ��
	{
		cout << "SK";
	}
	else				// ���� ������ ¦����� CY�� ��
		cout << "CY";
}