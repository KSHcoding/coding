#include <string>
#include <vector>

using namespace std;

int factorial(int count, int n, int num)
{
    count++;
    num *= count;

    if (num > n)
    {
        return count;
    }


    return factorial(count, n, num);
}

int solution(int n) {
    int answer = 0;
    int count = 0;
    int num = 1;

    count = factorial(count, n, num);

    answer = count - 1;

    return answer;
}
