#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int comp1(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}


int main()
{
	srand(time(0));
	int m[10], count1 = 0, u = 0, count2 = 0;
	for (int i = 0; i < 10; ++i) {
		m[i] = rand() % 317 +2 ;
	}
	u = m[0];
	qsort(m,10,sizeof(int),comp1);
	for (int i = 0; i < 9; ++i) {
		count2 += 1;
		if (count2 > count1) {
			count1 = count2;
			u = m[i];
		}
		if (m[i] != m[i + 1]) { count2 = 0; }
	}
	for (int i = 0; i < 10; ++i) {
		cout << m[i] << ' ';
	}cout << endl;
	cout << u<<" in array "<<count1 <<" times"<< endl;
}

