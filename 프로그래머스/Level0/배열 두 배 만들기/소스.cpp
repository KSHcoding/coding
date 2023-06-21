#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        numbers[i] *= 2;
        answer.push_back(numbers[i]);
    }
    
    return answer;
}
