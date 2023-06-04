#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>
using namespace std;

int ice[1000][1000];
int visited[1000][1000] = { 0, };
int xSize, ySize;
int result = 0;

bool dfs(int i, int j, int ice[][1000])
{
	if (ice[i][j] == 0 && visited[i][j] != 1)
	{
		visited[i][j] = 1;

		if (i>0)
		{
			dfs(i - 1, j, ice);
		}
		if (j>0)
		{
			dfs(i, j - 1, ice);
		}
		if (j+1 < xSize)
		{
			dfs(i, j + 1, ice);
		}
		if (i+1 < ySize)
		{
			dfs(i + 1, j, ice);
		}

		return true;

	}
	else
	{
		return false;
	}

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
			ice[i][j] = input[j] - '0'; // 입력숫자가 붙어있을 때 string으로 변환해서 처리
		}

	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (dfs(i, j, ice))
			{
				result += 1;
			}
			
		}
	}

	cout << result;





	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}