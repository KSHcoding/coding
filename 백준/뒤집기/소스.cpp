#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	string S;
	int result = 0;

	int count0 = 0;
	int count1 = 0;
	

	cin >> S;

	for (size_t i = 0; i < S.size(); i++)
	{
		if (S[i] == S[i + 1])
		{
			continue;
			
		}
		else
		{
			if (S[i] == '0')
			{
				count0++;
			}
			else if (S[i] == '1')
			{
				count1++;
			}
			
		}

	}

	result = min(count0, count1);


	cout << result;

	cout << endl;

}