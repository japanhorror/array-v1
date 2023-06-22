#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	const int ROW = 3;
	const int COL = 4;

	int arr[ROW][COL]{};

	cout << arr[1][1] << endl;

	arr[2][0] = 321322;

	cout << arr[2][0] << endl;

	arr[1][1] = 22;
	 
	arr[1][2] = 32;
	cout << arr[1][2] << endl;
	cout << arr[1][1] << endl;

	int a;
	a = 0;
}