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

	int N, K;
	int i = 0;
	int input;
	vector<int> A;
	vector<int> B;
	int Amin, Bmax;
	int result = 0;

	cin >> N >> K;

	for (i = 0; i < N; i++)
	{
		cin >> input;
		A.push_back(input);
	}

	for (i = 0; i < N; i++)
	{
		cin >> input;
		B.push_back(input);
	}

	for (i = 0; i < K; i++)
	{
		Amin = *min_element(A.begin(), A.end());
		Bmax = *max_element(B.begin(), B.end());
		if (Amin < Bmax)
		{
			A[min_element(A.begin(), A.end()) - A.begin()] = Bmax;
			B[max_element(B.begin(), B.end()) - B.begin()] = Amin;
		}
	}

	for (i = 0;i <  A.size(); i++)
	{
		result += A[i];
	}

	cout << result;



	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}