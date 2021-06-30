//Finds the largest number out of three arrays

#include "stdafx.h"
#include <iostream>
#include "ctime"
using namespace std;

void mas(int*,int*);
int e = 0;
int*sb, *m;
int main()
{
	srand(time(0));
	int A[3], B[3], C[3], Q[3],o,k;
	mas(A, Q);
	e++;
	mas(B, Q);
	e++;
	mas(C, Q);
	cout << "Largest " << *sb << ", array №" << (*m + 1) << endl << endl;
	system("pause");
    return 0;
}
void mas(int*t,int*w)
{
	int i, j=0, k,o=0;
	for (i = 0; i < 3; i++)
		t[i] = rand() % 10;
	for (i = 0; i<3; i++)
		cout << *(t + i) << endl;
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		if (j < (*(t + i)))
		{
			j = *(t + i);
			k = i;
		}
	} 
	cout << "Largest " << j << ", position " << (k+1) << endl << endl;
	w[e] = j;
	for (i=0;i<3;i++)
	{
		if (o < (*(w + i)))
		{
			o = *(w + i);
			k = i;
		}
	}
	sb = &o;
	m = &k;
}