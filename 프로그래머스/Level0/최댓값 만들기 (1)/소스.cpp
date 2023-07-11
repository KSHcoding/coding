#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 1;

    sort(numbers.begin(), numbers.end());

    answer *= numbers.back();
    numbers.erase(numbers.end() - 1);
    answer *= numbers.back();
    

    return answer;
}
