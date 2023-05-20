#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <time.h>
using namespace std;

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	string input;
	int count=0;

	multimap<char, int> Board;

	char x = 0;
	int y = 0;
	int size = 8;

	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			Board.insert({ i + 'a', j });
		}
	}

	cin >> input;

	x = input[0];
	y = input[1] - '0';

	int temp;
	char R;
	char L;
	int U;
	int D;

	for (multimap<char, int>::iterator iter = Board.begin(); iter != Board.end(); iter++) 
	{
		if (iter->first == x) //R
		{
			temp = x;
			x += 2;
			R = x;
			x = temp;

			if (iter->second == y && R <= 'h') //RD
			{
				temp = y;
				y += 1;
				D = y;
				y = temp;

				if (D <= size)
				{
					count++;
				}

			}
			if (iter->second == y && R <= 'h') //RU
			{
				temp = y;
				y -= 1;
				U = y;
				y = temp;

				if (U >= 1)
				{
					count++;
				}
			}
		}
		else
		{
			continue;
		}
		if (iter->first == x) //L
		{
			temp = x;
			x -= 2;
			L = x;
			x = temp;

			if (iter->second == y && L >= 'a') //LD
			{
				temp = y;
				y += 1;
				D = y;
				y = temp;

				if (D <= size)
				{
					count++;
				}
				
			}
			if (iter->second == y && L >= 'a') //LU
			{
				temp = y;
				y -= 1;
				U = y;
				y = temp;

				if (U >= 1)
				{
					count++;
				}
			}
		}
		else
		{
			continue;
		}
		if (iter->second == y) //U
		{
			temp = y;
			y -= 2;
			U = y;
			y = temp;

			if (iter->first == x && U >= 1) //UR
			{
				temp = x;
				x += 1;
				R = x;
				x = temp;

				if (R <= 'h')
				{
					count++;
				}

			}
			if (iter->first == x && U >= 1) //UL
			{
				temp = x;
				x -= 1;
				L = x;
				x = temp;

				if(L >= 'a')
				{
					count++;
				}
			}
		}
		else
		{
			continue;
		}
		if (iter->second == y) //D
		{
			temp = y;
			y += 2;
			D = y;
			y = temp;

			if (iter->first == x && D <= 8) //DR
			{
				temp = x;
				x += 1;
				R = x;
				x = temp;

				if (R <= 'h')
				{
					count++;
				}

			}
			if (iter->first == x && D <= 8) //DL
			{
				temp = x;
				x -= 1;
				L = x;
				x = temp;

				if (L >= 'a')
				{
					count++;
				}
			}
		}
		else
		{
			continue;
		}

		if (iter->first == x && iter->second == y)
		{
			break;
		}
	}

	

	cout << count;



	cout << endl;
	end = clock() / CLOCKS_PER_SEC;
	cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}