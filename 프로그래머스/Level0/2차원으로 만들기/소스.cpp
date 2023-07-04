#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> temp;
    int j = 0;

    for (int i = 0; i < num_list.size();)
    {
        temp.clear();
        for (j = 0; j < n; j++)
        {
            temp.push_back(num_list[i]);
            i++;
        }

        answer.push_back(temp);


    }

    return answer;
}
