#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";

    int i = 0;
    int j = 0;
    int k = 0;

    while (k < str1.size() + str2.size())
    {
        if (k % 2 == 0)
        {
            answer += str1[i];
            i++;
            k++;
        }
        else
        {
            answer += str2[j];
            j++;
            k++;
        }
    }

    return answer;
}
