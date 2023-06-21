#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a%b);
    }
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int count = 0;

    int k = denom1; 
    int temp;

    int num = gcd(denom1, denom2);

    if (num == 1)
    {
        temp = denom1 * denom2;

        numer1 *= temp / denom1;
        numer2 *= temp / denom2;
    }
    else if (denom1 == num)
    {
        temp = num;
    }
    else
    {
        temp = denom1 * num;

        numer1 *= temp / denom1;
        numer2 *= temp / denom2;
    }

    int num2 = gcd(numer1 + numer2, temp);


    answer.push_back((numer1 + numer2) / num2);
    answer.push_back(temp / num2);

    return answer;
}
