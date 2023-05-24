#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <time.h>
using namespace std;

int maze[200][200];
int visited[200][200] = { 0, };
int xSize, ySize;
int result = 0;

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int bfs(int N, int  M, int x, int y)
{
	visited[x][y] = 1;

	queue<pair<int, int>> q;

	q.push({ x, y });

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) 
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}

			if (maze[nx][ny] == 0)
			{
				continue;
			}
			if (maze[nx][ny] == 1)
			{
				maze[nx][ny] = maze[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}

	
	return maze[N-1][M-1];
}

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	string input;
	int N, M;

	cin >> N >> M;
	ySize = N;
	xSize = M;


	for (int i = 0; i < N; i++)
	{
		cin >> input;
		for (int j = 0; j < M; j++)
		{
			maze[i][j] = input[j] - '0'; // 입력숫자가 붙어있을 때 string으로 변환해서 처리
		}

	}

	cout << bfs(N, M, 0, 0);


	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}