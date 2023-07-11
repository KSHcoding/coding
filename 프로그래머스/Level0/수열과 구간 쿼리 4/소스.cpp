#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> temp;

    for (int i = 0; i < queries.size(); i++)
    {
        for (int k = queries[i][0]; k <= queries[i][1]; k++)
        {
            if (k >= arr.size())
            {
                break;
            }

            if (k % queries[i][2] == 0)
            {
                arr[k] += 1;
                continue;
            }
            if (k == 0)
            {
                arr[k] += 1;
            }
            
        }

    }

    answer = arr;

    return answer;
}
