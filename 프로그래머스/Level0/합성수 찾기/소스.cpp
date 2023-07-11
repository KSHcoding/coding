#include <string>
#include <vector>

using namespace std;

int divisor(int i, int count)
{
    for(int j = 1; j <= i; j++)
    {
        if(i % j == 0)
        {
            count++;
        }
    }
    
    return count;
    
}


int solution(int n) {
    int answer = 0;
    int count = 0;
    
    for(int i = 2; i <= n; i++)
    {
        if(divisor(i, count) >= 3)
        {
            answer++;
        }
        
    }
    
    return answer;
}
