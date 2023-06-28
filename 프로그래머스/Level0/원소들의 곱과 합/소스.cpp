#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int multi = 1;
    int sum = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        multi *= num_list[i];
        sum += num_list[i];
    }
    
    if(multi < pow(sum, 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    return answer;
}
