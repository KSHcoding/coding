#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (int i = my_string.size(); i > 0; i--)
    {
        answer += my_string[i - 1];
    }
    
    return answer;
}
