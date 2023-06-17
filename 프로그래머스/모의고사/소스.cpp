#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    
    vector<int> answer;

    vector<int> supo1{1,2,3,4,5};
    vector<int> supo2{2,1,2,3,2,4,2,5};
    vector<int> supo3{3,3,1,1,2,2,4,4,5,5};

    vector<int> score{0,0,0};

    for (int i = 0; i < answers.size(); i++)
    {

        if (answers[i] == supo1[i % 5])
        {
            score[0] += 1;
        }

        if (answers[i] == supo2[i % 8])
        {
            score[1] += 1;
        }
        if (answers[i] == supo3[i % 10])
        {
            score[2] += 1;
        }
    }

    int max = *max_element(score.begin(), score.end());
    int index = find(score.begin(), score.end(), max) - score.begin();

    for(int j = 0; j < score.size(); j++)
    {
        if (score[j] == max)
        {
            answer.push_back(j + 1);
        }
    }

    sort(answer.begin(), answer.end());

    return answer;
}
