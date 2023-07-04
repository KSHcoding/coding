#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {

    int answer = 0;

    int num = 0;

    while (num < hp)
    {
        num += 5;
        answer++;
    }

    if (num == hp)
    {
        return answer;
    }

    num -= 5;
    answer--;

    while (num < hp)
    {
        num += 3;
        answer++;
    }

    if (num == hp)
    {
        return answer;
    }

    num -= 3;
    answer--;
    

    while (num < hp)
    {
        num += 1;
        answer++;
    }

    if (num == hp)
    {
        return answer;
    }




    return answer;
}
