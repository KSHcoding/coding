
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int balls, int share) {
    unsigned long long answer = 1;
    int j = 1;
    for (long i = share+1; i <= balls; ++i)
    {
        answer *= i;

        if (j >= 1 && j <= balls - share)
        {
            answer /= j;
            j++;
        }

    }

    return answer;


}
