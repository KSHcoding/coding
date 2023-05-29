#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;
vector<string> result;

void search(vector<int> NV, int j, int k)
{
	if (k == 0)
	{
		if (NV[k] == j)
		{
			result.push_back("yes");
			return;
		}
		else
		{
			result.push_back("no");
			return;
		}
	}
	if (NV.size() == 2)
	{
		for (size_t i = 0; i < 2; i++)
		{
			if (NV[i] == j)
			{
				result.push_back("yes");
				return;
			}
		}
		result.push_back("no");
		return;

	}
	if (NV[k/2] > j)
	{
		vector<int> split(NV.begin(), NV.begin() + k/2 + 1);
		search(split, j, split.size());
	}
	if (NV[k / 2] < j)
	{
		vector<int> split(NV.begin() + k/2, NV.begin() + k);
		search(split, j, split.size());
	}
	if (NV[k / 2] == j)
	{
		result.push_back("yes");
		return;
	}

	return;

}

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, M;
	int i;
	int inputN, inputM;
	int temp;

	vector<int> NV, MV;

	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin >> inputN;
		NV.push_back(inputN);
	}

	sort(NV.begin(), NV.end()); //2 3 7 8 9

	cin >> M;

	for (i = 0; i < M; i++)
	{
		cin >> inputM;
		MV.push_back(inputM);
	}

	sort(MV.begin(), MV.end());

	for (i = 0; i < M; i++)
	{
		search(NV, MV[i], NV.size());
	}

	for (i = 0; i < M; i++)
	{
		cout << result[i]<<" ";
	}

	



	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}