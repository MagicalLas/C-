// Algo_Wonho.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Prob {
public:

};
void f(int w3, int w5, int N) {
	if (w3 * 3 + w5 * 5 == N)
	{
		cout << w3 + w5;
	}
	if (w3 * 3 + w5 * 5 > N)
	{
		f(w3 - 1, w5, N);
		f(w3, w5 - 1, N);
	}
	if (w3 * 3 + w5 * 5 > N)
	{
		f(w3 + 1, w5, N);
		f(w3, w5 + 1, N);
	}
}
int main()
{
	int N = 0;
	cin >> N;
	int max = (N / 3 + 1);
	int w3, w5;
	f(0, max, N);
    return 0;
}

