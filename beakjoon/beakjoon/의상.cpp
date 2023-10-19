#include<iostream>
#include<unordered_map>
#include<string>
#include <vector>

using namespace std;



int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> um;
    int answer = 1;
    for (int i = 0; i < clothes.size(); i++)
    {
        um[clothes[i][1]] += 1;
    }
    for (auto n : um)
    {
        answer *= (n.second + 1);
    }
    return answer - 1;
}

int main()
{
    cout << solution({ {"yellow_hat", "headgear"} ,{"blue_sunglasses", "eyewear"},{"green_turban", "headgear"} });
}