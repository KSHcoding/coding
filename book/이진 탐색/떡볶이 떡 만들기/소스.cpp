#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;
vector<int> temp;
vector<int> Size;
vector<int> split;
int Count = 0;
int i, mid;
int N, M;

void search(vector<int>	NV, int front, int back)
{
	mid = (front + back / 2);

	while (Count != M)
	{
		NV = temp;
		Count = 0;

		for (size_t j = 0; j < NV.size(); j++)
		{
			NV[j] = NV[j] - split.front();
			if (NV[j] <= 0)
			{
				NV[j] = 0;
			}
			Count += NV[j];
		}
		if (Count < M)
		{
			back = mid - 1;
			vector<int> _split(Size.begin(), Size.begin() + back);
			mid = (split.front() + split.back()) / 2;
			split = _split;
			continue;
		}
		if(Count == M)
		{
			cout << split.front();
			break;
		}
		else if (split.size() == 2)
		{
			NV = temp;
			Count = 0;
			for (size_t j = 0; j < NV.size(); j++)
			{
				NV[j] = NV[j] - (split.front() + 1);
				if (NV[j] <= 0)
				{
					NV[j] = 0;
				}
				Count += NV[j];
			}
			if (Count == M)
			{
				cout << split.front() + 1;
				break;
			}
		}
		else
		{
			mid = (split.front() + split.back()) / 2;
			vector<int> _split(Size.begin() + mid - 1, Size.begin() + back);
			split = _split;
			continue;
		}

	}
	
}

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int inputN, inputM;
	int front;
	int back;

	vector<int> NV;

	cin >> N >> M;

	for (i = 0; i < N; i++)
	{
		cin >> inputN;
		NV.push_back(inputN);
	}

	sort(NV.begin(), NV.end()); //10 15 17 19

	for (i = 0; i < NV.back(); i++)
	{
		Size.push_back(i+1);
		split.push_back(i + 1);
	}

	temp = NV;
	front = 0;
	back = NV.back();

	search(NV, front, back);


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}