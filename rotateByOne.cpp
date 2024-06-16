#include <iostream>
using namespace std;

int main()
{
  int A[5] = {1, 2, 4, 5, 4};
  int lat = A[4];

  for (int i = 5 - 2; i >= 0; i--)
  {
    A[i + 1] = A[i];
  }

  A[0] = lat;

  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}