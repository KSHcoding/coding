#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";

    int mode = 0;

    for (int i = 0; i < code.size(); i++)
    {
        if (mode == 0)
        {
            if (code[i] != '1')
            {
                if (i % 2 == 0)
                {
                    answer += code[i];
                }
                else
                {
                    continue;
                }

            }
            else
            {
                mode = 1;
                continue;
            }

        }
        if (mode == 1)
        {
            if (code[i] != '1')
            {
                if (i % 2 == 1)
                {
                    answer += code[i];
                }
                else
                {
                    continue;
                }

            }
            else
            {
                mode = 0;
                continue;
            }

        }

    }

    if (answer == "")
    {
        return "EMPTY";
    }

    return answer;
}
