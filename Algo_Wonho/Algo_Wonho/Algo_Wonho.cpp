// Algo_Wonho.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Prob {
public:

	void 부분합() {
		int result = -99999;
		int n, tmp = 0, input = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &input);
			tmp += input;
			if (result < tmp) {
				result = tmp;
			}
			if (tmp < 0)
				tmp = 0;

		}
		printf("%d", result);
	}
};


int map[1000][1000];
int map_[1000][1000]={  -1 };
int n, m, result=0;

void douw(int x, int y) {
	if (x == n && y == m) {
		result++;
	}
	if (map_[x][y] == 100) {
		//result++;
	}
	if(map[x+1][y]<map[x][y])
	{
		douw(x + 1, y);
	}
	if (map[x - 1][y]<map[x][y])
	{
		douw(x - 1, y);
	}
	if (map[x][y+1]<map[x][y])
	{
		douw(x, y+1);
	}
	if (map[x][y-1]<map[x][y])
	{
		douw(x, y-1);
	}

};

int main()
{
	scanf("%d%d",&n,&m);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			scanf("%d",&map[i][j]);
		}
	}
	douw(0, 0);
	printf("%d", result);
    return 0;
}

