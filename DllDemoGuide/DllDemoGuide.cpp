#include "..\\MyFirstDll\MyFirstDll.h"
#pragma comment(lib, "..\\Debug\\MyFirstDll.lib")

#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 2;
	cout << Add(a, b) << endl;

	getchar();
	return 0;
}