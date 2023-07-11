#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n == 1)
    {
        return 1;
    }

    float f_answer = answer;

    f_answer = (float)n / 7.f;

    return ceil(f_answer);
}
