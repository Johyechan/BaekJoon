#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s_arr[151];
	int N, K, count = 0;
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		s_arr[i] = s;
		count++;
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		string s;
		cin >> s;
		for (int i = 0; i < 151; i++)
		{
			if (s_arr[i] == s)
			{
				s_arr[i] = "";
				count--;
			}
		}
	}
	cout << count << "\n";
	for (int i = 0; i < 151; i++)
	{
		if (s_arr[i] == "")
			continue;
		cout << s_arr[i] << "\n";
	}
}