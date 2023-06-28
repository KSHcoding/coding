#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;

    vector<pair<int, bool>> arr;
    int temp = a;

    for (int i = 0; i < included.size(); i++)
    {
        pair<int, bool> p;
        p.first = temp;
        p.second = included[i];

        arr.push_back(p);
        temp += d;
    }

    for (int i = 0; i < included.size(); i++)
    {
        if (arr[i].second == true)
        {
            answer += arr[i].first;
        }
    }

    return answer;
}
