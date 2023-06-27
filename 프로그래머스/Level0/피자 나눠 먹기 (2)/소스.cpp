#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int solution(int n) {
    int answer = 0;

    int lcm = n * 6 / gcd(n, 6);

    return lcm / 6;
}
