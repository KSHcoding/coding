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

	int N, K;
	int count = 0;

	cin >> N >> K;

	while (N!=1)
	{
		if (N % K != 0)
		{
			N -= 1;
			count++;
		}
		else
		{
			N /= K;
			count++;
		}
	}

	cout << count;


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}