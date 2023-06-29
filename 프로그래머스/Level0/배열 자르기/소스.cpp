#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;

    answer = numbers;

    numbers.erase(numbers.begin() + num1, numbers.begin() + num2 + 1);

    for (int i = 0; i < numbers.size(); i++)
    {
        answer.erase(find(answer.begin(), answer.end(), numbers[i]));
    }

    return answer;
}
