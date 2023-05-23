#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> temp;
    vector<int> answer;
    int count = 0;
    int answerCount = 0;

    for (int i = 0; i < progresses.size(); i++)
    {
        if ((100 - progresses[i]) % speeds[i] != 0)
        {
            temp.push_back(((100 - progresses[i]) / speeds[i]) + 1);
        }
        else
        {
            temp.push_back((100 - progresses[i]) / speeds[i]);
        }


    }

    count = temp[0];

    reverse(temp.begin(), temp.end());

    for (int j = temp.size() - 1; j > -1; j--)
    {

        if (count >= temp[j])
        {
            answerCount++;
            temp.pop_back();
            if (j == 0)
            {
                answer.push_back(answerCount);
                break;
            }
            if (count < temp[j-1])
            {
                answer.push_back(answerCount);
                answerCount = 0;
            }
            continue;
        }
        else
        {
            count = temp[j];
            answerCount++;
            temp.pop_back();
            if (j == 0)
            {
                answer.push_back(answerCount);
                break;
            }
            if (count < temp[j - 1])
            {
                answer.push_back(answerCount);
                answerCount = 0;
            }
            continue;
        }

        
    }

    return answer;
}
