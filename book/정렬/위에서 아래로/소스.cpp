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

	int N;
	int input;
	vector<int> v;

	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.rbegin(), v.rend());

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i];
		cout << " ";
	}


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}