#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

int list[1000000] = { 0, };

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, input;
	int result = 0;
	int temp;

	cin >> N;
	vector<int> coin;

	list[0] = 1;

	for (size_t i = 0; i < N; i++)
	{
		cin >> input;
		coin.push_back(input);
		list[input] = 1;
	}

	for (size_t i = 0; i < N; i++)
	{
		temp = coin[i];

		for (size_t k = 0; k < N - 1; k++)
		{
			if (i + 1 + k < N)
			{
				temp += coin[i + 1 + k];
				list[temp] = 1;
			}
			else
			{
				break;
			}
			
		}
		
		
	}



	for (result = 0; result < sizeof(list)/ sizeof(int); result++)
	{
		if (list[result] == 0)
		{
			break;
		}
	}

	cout << result;




	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}