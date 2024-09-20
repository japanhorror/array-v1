#include <iostream>
using namespace std;

int main()
{
  
  const int ROW = 3;
  const int COL = 4;

  int arr[ROW][COL]{};

  cout << arr[1][1] << endl;

  arr[2][0] = 34;

  cout << arr[2][0] << endl;

  arr[1][1] = 11;
   
  arr[1][2] = 20;
  cout << arr[1][2] << endl;
  cout << arr[1][1] << endl;

}
