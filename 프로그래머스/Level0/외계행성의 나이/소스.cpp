#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    
    string s_age = to_string(age);
    
    for(int i = 0; i<s_age.size(); i++)
    {
        int temp = s_age[i] - '0' + 97;
        answer += temp;
        
    }
    
    return answer;
}
