#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int m[5] = { 1,8,27,64,125 };
	int tmp = 0;
	for (int i = 0, j = 4; i < j; ++i, --j) {
		tmp = m[i]; m[i] = m[j]; m[j] = tmp;
	}
	for (int i = 0; i < 5; ++i) {
		cout << m[i] << ' ';
	}
    return 0;
}

