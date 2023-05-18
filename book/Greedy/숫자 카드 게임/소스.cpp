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

	int N, M;

	cin >> N >> M;

	vector<int> w;
	int input;
	int min = 0;
	int temp;

	vector<vector<int>> Card;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> input;
			w.push_back(input);
		}

		temp = *min_element(w.begin(), w.end());
		if (min < temp)
		{
			min = temp;
		}

		Card.push_back(w);
		w.clear();
	}

	cout << min;


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}