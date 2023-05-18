#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

void main()
{
	clock_t start, end;

	int N;
	int count = 0;

	cin >> N;

	start = clock() / CLOCKS_PER_SEC;

	while (N!=0 && N >= 500)
	{
		count += N / 500;
		N %= 500;
	}

	while (N != 0 && N >= 100)
	{
		count += N / 100;
		N %= 100;
	}

	while (N != 0 && N >= 50)
	{
		count += N / 50;
		N %= 50;
	}

	while (N != 0 && N >= 10)
	{
		count += N / 10;
		N %= 10;
	}

	cout << count;

	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start)/CLOCKS_PER_SEC;
}