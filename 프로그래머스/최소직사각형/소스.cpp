#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int x = 0;
    int y = 0;

    for (int i = 0; i < sizes.size(); i++) 
    {
        vector<int> v = sizes[i];

        for (int j = 0; j < v.size(); j++)
        {
            if (x < max(v[j], v[j + 1]))
            {
                x = max(v[j], v[j + 1]);
            }
            if (y < min(v[j], v[j + 1]))
            {
                y = min(v[j], v[j + 1]);
            }
            break;
        }
    }


    int answer = x*y;
    return answer;
}
