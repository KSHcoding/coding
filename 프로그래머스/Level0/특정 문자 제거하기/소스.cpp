#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter)
{
    string answer = "";

    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] == letter[0])
        {
            my_string.erase(my_string.begin() + i);
            i = -1;
        }
    }

    answer = my_string;

    return answer;

}
