#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int d[101] = { 0, };

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, M;
	int input;
	vector<int> num;
	int temp = 0;


	cin >> N >> M;

	for (size_t i = 0; i < N; i++)
	{
		cin >> input;
		d[input] = 1;
		num.push_back(input);
	}

	for (int i = 1; i < 101; i++)
	{
		for (size_t j = 0; j < num.size(); j++)
		{
			temp = i;
			if (temp % num[j] == 0 )
			{
				d[i] = d[i - num[j]] + 1;
			}
		}
		if (0 == d[M] && i == M)
		{
			cout << -1;
			break;
		}
		if (i == M)
		{
			cout << d[i];
			break;
		}
		

	}


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}