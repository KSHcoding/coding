#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int count = 0;
    
    for(int i =0; i< n; i++)
    {
        count++;
        for(int j =0; j< count; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}
