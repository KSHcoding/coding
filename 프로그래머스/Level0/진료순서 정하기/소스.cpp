#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int size = emergency.size();

    vector<pair<int, int>> temp;

    pair<int, int> p;

    for (int i = 0; i < size; i++)
    {
        p.first = emergency[i];
        temp.push_back(p);
    }

    for (int i = 0; i < size; i++)
    {

        int index = max_element(emergency.begin(), emergency.end()) - emergency.begin();
        emergency[index] = 0;

        temp[index].second = i + 1;

    }

    for (int i = 0; i < size; i++)
    {

        answer.push_back(temp[i].second);

    }

    return answer;
}
