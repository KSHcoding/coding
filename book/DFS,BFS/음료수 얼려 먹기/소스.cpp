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

	int count = 0;

	int N, M;
	int A, B, d;

	vector<vector<int>> map;
	vector<int> v;

	int map2[2][2] = {(1,2),(3,4)};

	int terrain;

	cin >> N >> M;

	cin >> A >> B >> d;

	for (int i=0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> terrain;
			v.push_back(terrain);
		}
		map.push_back(v);
		v.clear();
	}



	for (int i=0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}




	cout << count;



	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}