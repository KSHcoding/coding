
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string letter) {
    string answer = "";

    string morse[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
    stringstream Buffer(letter);

    string str;
    while (Buffer >> str) {

        for (size_t i = 0; i < 26; i++)
        {
            if (str == morse[i])
            {
                answer += (97 + i);
            }
        }

    }




    return answer;
}
