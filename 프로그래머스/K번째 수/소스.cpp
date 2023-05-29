#include <string>
#include <vector>
#include <algorithm>

using namespace std;



vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    vector<int> temp;
    
    for(int idx = 0; idx < commands.size(); idx++)
    {
        for(int i = commands.at(idx).at(0); 
            i<=commands.at(idx).at(1); i++)
        {
            temp.push_back(array.at(i-1));
        }
    
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[commands.at(idx).at(2) - 1]);
        
        temp.clear();
    
    
        
    }
    
    
    return answer;
}
