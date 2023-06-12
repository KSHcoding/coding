#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int parent[100000] = { 0, };
vector<pair<int, pair<int, int> > > edges;
int result = 0;

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
	int a, b, c;

	cin >> N >> M;

	for (size_t i = 0; i <= N; i++)
	{
		parent[i] = i;
	}

	for (size_t i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		edges.push_back({ c, {a, b} });
	}

	sort(edges.begin(), edges.end());
	int last = 0;

	for (int i = 0; i < edges.size(); i++) 
	{
		int cost = edges[i].first;
		int a = edges[i].second.first;
		int b = edges[i].second.second;

		if (_find(a) != _find(b)) { // a의 루트노드가 b의 루트노드가 아니다 (사이클 미발생) -> union 연산
			_union(a, b);
			result += cost; // 최소 신장 트리의 길이
			last = cost; // 정렬했으므로 가장 큰 코스트가 마지막에 위치함, 최소 신장트리에서 가장 큰 간선 제거해서 트리를 2개로 분리
		}
	}

	cout << result - last << '\n';

	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}