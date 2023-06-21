#include <iostream>

using namespace std;

int main(void) 
{
    int size = 17;
    char str[17];

    str[0] = 33;
    str[1] = 64;
    str[2] = 35;
    str[3] = 36;
    str[4] = 37;
    str[5] = 94;
    str[6] = 38;
    str[7] = 42;
    str[8] = 40;
    str[9] = 92;
    str[10] = 39;
    str[11] = 34;
    str[12] = 60;
    str[13] = 62;
    str[14] = 63;
    str[15] = 58;
    str[16] = 59;

    for (size_t i = 0; i < size; i++)
    {
        cout << str[i];
    }
    

    return 0;
}
