#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (stk.empty())
        {
            stk.push_back(arr[i]);
            continue;
        }
        else if (stk.back() < arr[i])
        {
            stk.push_back(arr[i]);
            continue;
        }
        else if (stk.back() > arr[i])
        {
            stk.erase(stk.begin() + stk.size() - 1);
            i--;
        }
    }
    
    
    return stk;
}
