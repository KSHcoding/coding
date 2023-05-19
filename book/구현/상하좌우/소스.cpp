#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

void main()
{
	clock_t start, end;

	start = clock() / CLOCKS_PER_SEC;

	int N;
	int x = 1, y = 1;
	char Move;

	std::cin >> N;

	do 
	{
		std::cin >> Move;

		switch (Move)
		{
		case 'L':
			if (y > 1 && y <= N)
			{
				y -= 1;
			}
			break;
		case 'R':
			if (y >= 1 && y < N)
			{
				y += 1;
			}
			break;
		case 'U':
			if (x > 1 && x <= N)
			{
				x -= 1;
			}
			break;
		case 'D':
			if (x >= 1 && x < N)
			{
				x += 1;
			}
		default:
			break;
		}


	} while (getc(stdin) == ' '); // 입력이 끝날 때 탈출 (숙지 할 것)

	std::cout << x <<' '<< y;


	std::cout << std::endl;
	end = clock() / CLOCKS_PER_SEC;
	std::cout << "수행시간 : " << ((double)end - start) / CLOCKS_PER_SEC;
}
