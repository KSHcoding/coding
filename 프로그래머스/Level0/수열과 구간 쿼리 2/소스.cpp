#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> temp;
    bool exist = 0;

    for (int i = 0; i < queries.size(); i++)
    {
        for (int k = queries[i][0]; k <= queries[i][1]; k++)
        {
            if (k >= arr.size())
            {
                break;
            }

            temp.push_back(arr[k]);
        }

        sort(temp.begin(), temp.end());

        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] > queries[i][2])
            {
                answer.push_back(temp[j]);
                exist = 1;
                break;
            }
        }

        if (exist == 0)
        {
            answer.push_back(-1);
        }

        
        exist = 0;
        temp.clear();

    }

    return answer;
}
