#include <iostream>

using namespace std;

// ����� 2

int main()
{
	int N, answer = 0, minvalue = 1000; // ���� ���� ����, ����, ���� Ȧ�� ���� ���� ���� ���� �����ϴ� ����
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a; // ���� ���� �� ���� ����
		cin >> a;
		answer += a;
		if (a % 2 == 1)
		{
			if (a < minvalue) //������ Ȧ�� ���� ��� minvalue���� ������ Ȯ���ϰ� �۴ٸ� minvalue�� a������ �ٲ��ش�.
				minvalue = a;
		}
	}
	if (answer % 2 == 1) // answer�� Ȧ����� ���� ���� Ȧ�� ���� ���ش�.
		answer -= minvalue;
	cout << answer;
}