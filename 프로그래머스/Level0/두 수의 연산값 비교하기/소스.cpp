#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int num = stoi(to_string(a) + to_string(b));
    
    if(num == 2 * a * b)
    {
        return num;
    }
    
    answer = max(num, 2*a*b);
    
    return answer;
}
