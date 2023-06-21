#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float temp = (float)num1 / (float)num2;
    answer = temp * 1000;
    cout << answer;
    return answer;
}
