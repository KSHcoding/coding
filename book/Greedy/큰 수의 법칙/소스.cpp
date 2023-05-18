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

	int N,M,K;

	cin >> N >> M >> K;

	vector<int> v;
	int vindex;
	int count = 0;
	int i, max1 ,max2;
	
	for (i = 0; i < N; i++)
	{
		cin >> vindex;
		v.push_back(vindex);
	}

	sort(v.begin(), v.end());

	max1 = v.back();
	v.pop_back();
	max2 = v.back();
	v.pop_back();

	for (i = 0; i < M; i ++)
	{
		if (i % (K+1) != 0)
		{
			count += max1;
		}
		else
		{
			count += max2;
		}
		
	}

	cout << count;

	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}