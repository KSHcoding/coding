#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> temp(1000);

int solution(vector<int> array) {
    int answer = 0;

    fill(temp.begin(), temp.begin() + 1000, 0);

    for (size_t i = 0; i < array.size(); i++)
    {
        temp[array[i]] += 1;
    }

    answer = max_element(temp.begin(), temp.end()) - temp.begin();
    int num = *max_element(temp.begin(), temp.end());

    if (count(temp.begin(), temp.end(), num) > 1)
    {
        answer = -1;
    }

    return answer;
}
