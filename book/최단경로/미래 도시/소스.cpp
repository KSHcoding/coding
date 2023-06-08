#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int INF = int(1e9);
int graph[101][101];

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N, M;
	int v,e;
	int X, K;

	for (size_t i = 0; i < 101; i++)
	{
		for (size_t j = 0; j < 101; j++)
		{
			graph[i][j] = INF;
		}
		
	}

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)
			{
				graph[i][j] = 0;
			}
		}
	}


	for (size_t i = 0; i < M; i++)
	{
		cin >> v >> e;
		graph[v][e] = 1;
		graph[e][v] = 1;
	}

	cin >> X >> K;

	for (size_t k = 1; k <= N; k++)
	{
		for (size_t a = 1; a <= N; a++)
		{
			for (size_t b = 1; b <= N; b++)
			{
				graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
			}
		}
	}

	int result = graph[1][K] + graph[K][X];
	
	if (result >= INF)
	{
		cout << -1;
	}
	else
	{
		cout << result;
	}


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}