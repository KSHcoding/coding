#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    
    string str = "";
    vector<string> temp;

    
        for (int i = 0; i < numbers.size(); i++)
        {
            temp.push_back(to_string(numbers[i]));
        }

    sort(temp.begin(), temp.end(), comp);
    
    for (int i = 0; i < temp.size(); i++)
    {
        if (str != "0")
        {
            str += temp[i];
        }
    }

    return str;
}
