#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;

    if (direction == "right")
    {
        int back = numbers.back();
        numbers.erase(numbers.end() - 1);

        vector<int> temp;

        temp.push_back(back);

        for (size_t i = 0; i < numbers.size(); i++)
        {
            temp.push_back(numbers[i]);
        }

        answer = temp;
    }
    else if (direction == "left")
    {
        int front = numbers.front();
        numbers.erase(numbers.begin());
        numbers.push_back(front);

        answer = numbers;
    }

    return answer;
}
