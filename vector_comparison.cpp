//Do several vector operations and compare V1 with V2.

#include "pch.h"
#include <iostream>
#include "vector.h"

int main()
{
	std::cout << "Hello World!\n";
	vector V1, V2, V3, V4;

	V1.setall(1, 2, 4);
	V2.setall(2, 3, 3);

	V3 = V1 + V2;
	V4 = V1 * V2;
	V1.print();
	V2.print();
	V3.print();
	V4.print();
	if (V1 < V2)
		cout << "V1<V2";
	else
		cout << "V1>V2";
}