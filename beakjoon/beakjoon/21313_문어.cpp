#include <iostream>

using namespace std;

// ����� 2

int main()
{
	int N;		//���� ���� �޴� ����
	cin >> N;

	if (N % 2 == 0)		// ���� ���� ¦���� 1, 2�� ���� ����ŭ ��� // 4�� ��� 1 2 1 2
	{
		for (int i = 0; i < N; i++)
		{
			if (i % 2 == 0)
			{
				cout << 1 << " ";
			}
			else
				cout << 2 << " ";
		}
	}
	else				// ���� ���� Ȧ���� 1, 2�� �ݺ��ؼ� ��������� �������� 3��� // 5�� ��� 1 2 1 2 3
	{
		for (int i = 0; i < N; i++)
		{
			if (i == N - 1)
			{
				cout << 3 << " ";
			}
			else if (i % 2 == 0)
			{
				cout << 1 << " ";
			}
			else
				cout << 2 << " ";
		}
	}
}