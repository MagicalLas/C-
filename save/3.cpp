// ConsoleApplication5.cpp: �ܼ� ���� ���α׷��� �������� �����մϴ�.
//

#include <stdio.h>

int map[1000][1000]={-1};

int cal(int a, int b) {
	if (a - b <= 0)
		return 1;
	if(map[a][b]>1)
		return map[a][b];
	map[a][b]= cal(b, a - b);

	return 1+ map[a][b];
}
int main()
{
	int n;
	int max=0;
	int aa;
	scanf("%d", &n);
	for (int i = n / 2; i < n; i++) {
		int t = cal(n, i);
		if (max < t) {
			max = t;
			aa = i;
		}
	}

	
	printf("%d %d %d", n, aa, n-aa);
	while (true)
	{
		int t = n;
		n = aa;
		aa = t - aa;
		if (n-aa <= 0)
			break;
		printf(" %d", n - aa);
	}
    return 0;
}

