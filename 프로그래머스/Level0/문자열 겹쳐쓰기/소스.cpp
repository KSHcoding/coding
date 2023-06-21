#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    for (size_t i = s; i < s + overwrite_string.size(); i++)
    {
        my_string[i] = overwrite_string[i-s];
    }
    
    
    string answer = my_string;
    return answer;
}
