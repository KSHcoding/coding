#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int parent[100000] = { 0, };

int _find(int b)
{
	if (parent[b] == b)
	{
		return b;
	}
	return parent[b] = _find(parent[b]);
}

void _union(int a, int b)
{
	a = _find(a);
	b = _find(b);
	if (a < b)
	{
		parent[b] = a;
	}
	else
	{
		parent[a] = b;
	}
}

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, M;
	int input, a, b;
	vector<string> result;

	cin >> N >> M;

	for (size_t i = 0; i <= N; i++)
	{
		parent[i] = i;
	}

	for (size_t i = 0; i < M; i++)
	{
		cin >> input >> a >> b;
		if (input == 0)
		{
			_union(a, b);
		}
		if (input == 1)
		{
			if (_find(b) == _find(a))
			{
				result.push_back("YES");
			}
			else
			{
				result.push_back("NO");
			}
		}
	}

	for (size_t i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}



	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}