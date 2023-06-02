#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int d[1000] = {0,};

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N;


	cin >> N;

	d[0] = 1;
	d[1] = 3;

	for (int i = 2; i < N; i++)
	{
		d[i] = d[i-1] + d[i - 2] * 2;

	}

	cout << *max_element(d, d+N) % 796796;


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}