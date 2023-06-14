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

	int N, input;
	int X = 0;
	vector<int> v;
	int result = 0;

	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		cin >> input;
		
		v.push_back(input);
		X = *max_element(v.begin(), v.end());

		if (v.size() == X)
		{
			result++;
			v.clear();
		}
	}


	cout << result;




	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}