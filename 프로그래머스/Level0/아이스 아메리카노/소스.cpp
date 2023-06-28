#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    
    int a = 0;
    int b = 0;
    
    a = money / 5500;
    b = money % 5500;
    
    answer.push_back(a);
    answer.push_back(b);
    
    return answer;
}
