#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int size = numbers.size();
    int count = 0;

    for (int i = 0; i < 2000 / size; i++)
    {
        for (size_t i = 0; i < size; i++)
        {
            numbers.push_back(numbers[i]);
        }
    }

    for (int i = 0; i < k - 1; i++)
    {
        count += 2;
    }

    answer = numbers[count];


    return answer;
}
