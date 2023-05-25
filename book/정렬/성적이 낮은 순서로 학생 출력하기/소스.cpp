#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
	return a.second < b.second;
}

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N;
	string Name;
	int Num = 0;
	vector<pair<string, int>> v;
	pair<string, int> temp;

	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		cin >> Name >> Num;
		temp.first = Name;
		temp.second = Num;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " ";
	}


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}