#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	string S;
	int result = 0;

	cin >> S;

	for (size_t i = 0; i < S.size() - 1; i++)
	{
		if (i == 0)
		{
			result = S[i] - '0';
		}
		result = max(S[i+1] - '0' + result, (S[i+1] - '0') * result);
	}

	cout << result;




	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}