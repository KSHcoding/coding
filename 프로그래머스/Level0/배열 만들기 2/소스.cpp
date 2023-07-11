#include <string>
#include <vector>

using namespace std;

vector<string> num;

vector<int> solution(int l, int r) {
    vector<int> answer;
    int trigger = 0;

    for (int i = 1; i <= 1000000; i++)
    {
        num.push_back(to_string(i));
    }

    for (l; l <= r; l++)
    {
        if (num[l - 1].find("5") != std::string::npos)
        {
            for (int i = 1; i <= 4; i++)
            {
                if (num[l - 1].find(to_string(i)) != std::string::npos)
                {
                    trigger = 1;
                    break;
                }
            }
            for (int i = 6; i <= 9; i++)
            {
                if (num[l - 1].find(to_string(i)) != std::string::npos)
                {
                    trigger = 1;
                    break;
                }
            }
            
            if (trigger == 0)
            {
                answer.push_back(l);
            }

        }
        else if (num[l - 1].find("5") != std::string::npos && num[l - 1].find("0") != std::string::npos)
        {
            answer.push_back(l);

        }
        trigger = 0;
    }
    
if (answer.empty()) { answer.push_back(-1); }
    
    return answer;
}
