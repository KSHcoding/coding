#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    int back1 = 0;
    int back2 = 0;

    back1 = num_list.back();
    num_list.pop_back();
    back2 = num_list.back();
    num_list.push_back(back1);

    if (back2 < back1)
    {
        num_list.push_back(back1 - back2);
    }
    if (back1 <= back2)
    {
        num_list.push_back(back1 * 2);
    }

    answer = num_list;

    return answer;
}
