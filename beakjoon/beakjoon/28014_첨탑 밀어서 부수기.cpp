#include <iostream>

using namespace std;

// ����� 3

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, temp = 0, answer = 0;	// N�� ÷ž ��, temp�� ���� ÷ž�� ���̸� �����ϱ� ���� ����, answer�� �� �� �о�� �ϴ��� �����ϴ� ����
	cin >> N;						// ÷ž ���� ����

	for (int i = 0; i < N; i++)		// ÷ž �� ��ŭ �ݺ�
	{
		int n;						// ÷ž ���̸� �ޱ� ���� ����
		cin >> n;
		if (temp <= n)				// ÷ž�� ���̰� ���� ÷ž�� ���̺��� ũ�ٸ� �����ؼ� �Ѿ�� �ʱ� ������ �� �� �� �о�� ��
			answer++;				// �׷��� answer�� 1 �÷���
		temp = n;					// �׸��� ���� ÷ž�� ���̴� temp�� ����
	}

	cout << answer;					// �� �� �о�� �ϴ��� ���
}