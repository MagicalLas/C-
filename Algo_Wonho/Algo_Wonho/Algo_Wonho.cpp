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


/*
int arr[9][9];
int max[3] = {0,0,0};
for (size_t i = 0; i < 9; i++)
{
for (size_t j = 0; j < 9; j++)
{
scanf("%d", &arr[i][j]);
}
}


for (size_t i = 0; i < 9; i++)
{
for (size_t j = 0; j < 9; j++)
{
if (arr[i][j] > max[0]) {
max[0] = arr[i][j];
max[1] = i;
max[2] = j;
}
}
}
printf("%d\n%d %d", max[0], max[1]+1, max[2]+1);
*/
int main()
{
	int a, b, count;
	scanf("%d%d", &a, &b);
	while (true)
	{
		int ta, tb=0;
		if (ta != 1) {
			ta = a / 2;
			count++;
		}
		if (ta == b) {
			break;
		}
		if (ta == tb) {
			break;
		}
		if (tb != 1) {
			tb = b / 2;
			count++;
		}
		if (ta == tb) {
			break;
		}

	}
	printf("%d", count);
    return 0;
}

