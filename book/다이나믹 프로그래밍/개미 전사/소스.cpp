#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int d[1000];

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, K;

	int num = 1;
	int temp;

	int count = 0;


	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		cin >> K;
		d[i] = K;
	}

	for (int i = 0; i < N; i++)
	{
		if (i-2 >= 0)
		{
			d[i] = d[i] + d[i - 2];
		}


	}

	cout << *max_element(d, d+N);


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}