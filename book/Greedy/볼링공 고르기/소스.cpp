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

	int N, M, K, input;
	int result = 0;
	int temp = 0;

	cin >> N >> M;

	vector<int> list;

	for (size_t i = 0; i < N; i++)
	{
		cin >> input;
		list.push_back(input);
	}

	for (size_t i = 0; i < N; i++)
	{
		temp = list[i];
		for (size_t j = i + 1; j < N; j++)
		{
			if (temp != list[j])
			{
				result++;
			}
		}
	}



	cout << result;




	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}