//Read phone number from .txt file, convet to template and write to file.

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	const int n = 50;
	int x, k, i;
	char mas[n];
	char mas1[n];
	ifstream P1("input.txt");
	ofstream P2("output.txt");

	for (i = 0; !P1.eof(); i++)
	{
		P1 >> mas;
		for (x = 0, k = 0; x<12; k++)
		{
			if ((k == 1) || (k == 5) || (k == 9) || (k == 12))
			{
				mas1[k] = '-';
			}
			else
			{
				mas1[k] = mas[x];
				x++;
			}
		}
		P2 << mas1 << endl;
	}
	P1.close();
	P2.close();
	return 0;
}