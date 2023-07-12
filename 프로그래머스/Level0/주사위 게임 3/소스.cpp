#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;

    vector<int> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    sort(v.begin(), v.end());

    if (a == b && b == c && c == d && d == a)
    {
        return 1111 * a;
    }
    if (v[0] != v[1] && v[1] == v[2] && v[2] == v[3])
    {
        return pow(10 * v[1] + v[0], 2);
    }
    if (v[0] == v[1] && v[1] == v[2] && v[2] != v[3])
    {
        return pow(10 * v[0] + v[3], 2);
    }
    if (v[0] == v[1] && v[1] != v[2] && v[2] == v[3])
    {
        return (v[0] + v[2]) * abs(v[0] - v[2]);
    }
    if (v[0] == v[1] && v[1] != v[2] && v[2] != v[3])
    {
        return v[2] * v[3];
    }
    if (v[0] != v[1] && v[1] != v[2] && v[2] == v[3])
    {
        return v[0] * v[1];
    }
    if (v[0] != v[1] && v[1] == v[2] && v[2] != v[3])
    {
        return v[0] * v[3];
    }
    if (v[0] != v[1] && v[1] != v[2] && v[2] != v[3])
    {
        return v[0];
    }

    return answer;
}
