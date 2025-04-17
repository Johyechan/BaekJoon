#include<iostream>

using namespace std;

int main()
{
	// a = 하루 올라갈 수 있는 길이
	// b = 하루 미끄러지는 길이
	// v = 목표 길이
	// current = 현재 도착한 길이
	// answer = 목표 지점까지 걸린 날짜
	int a, b, v;
	int current = 0;
	int answer = 0;
	cin >> a >> b >> v; // 각 값 입력 받기

	// 1. 하루에 a - b 만큼 움직임
	// 2. v에 도착하면 더 이상 미끄러지지 않음
	// 3. a는 항상 b보다 큼
	// 그럼 전날에 v - b까지만 도착해도 됨
	// 그렇기에 일단 (v - b) / (a - b) + 1 
	// +1은 하루 더 올라가야 하기 때문임
	// 이제 여기서 올림 공식을 사용하여
	cout << (v - b - 1) / (a - b) + 1;


	// 이렇게 하면 너무 오래 걸림
	//// 목표 지점까지 도착할때 며칠이 걸렸는지 구하기 위해 반복
	//while (true)
	//{
	//	answer++; // 하루의 시작

	//	current += a; // 아침에 올라간 값

	//	if (current >= v) // 목표 지점에 도착하거나 넘어섰는지 확인
	//		break;

	//	current -= b; // 밤에 미끄러진 값
	//}
	
	//cout << answer;
}