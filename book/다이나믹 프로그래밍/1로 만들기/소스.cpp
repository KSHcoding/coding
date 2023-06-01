#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int d[30001];

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int X;

	int num = 1;
	int temp;

	int count = 0;
	

	cin >> X;

	num = X;

	for (size_t i = 2; i <= X; i++)
	{

		d[i] = d[i - 1] + 1;

		if (i % 5 == 0)
		{
			d[i] = min(d[i], d[i / 5] + 1);
		}
		
		if (i % 3 == 0)
		{
			d[i] = min(d[i], d[i / 3] + 1);
		}

		if (i % 2 == 0)
		{
			d[i] = min(d[i], d[i / 2] + 1);
		}

		

	}

	cout << d[X];

	



	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}