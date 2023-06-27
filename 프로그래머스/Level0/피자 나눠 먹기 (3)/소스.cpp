#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;

    float f_answer = (float)n / (float)slice;

    return ceil(f_answer);
}
