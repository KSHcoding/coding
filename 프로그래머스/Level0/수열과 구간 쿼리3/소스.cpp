
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++)
    {
        for (int j = 0; j < queries[i].size(); j++)
        {
            swap(arr[queries[i][j]], arr[queries[i][j + 1]]);
            break;
        }

    }

    answer = arr;

    return answer;
}
