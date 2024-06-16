#include <iostream>
using namespace std;

int main()
{
  int A[5] = {1, 3, 4, 5, 6};
  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    sum += A[i];
  }
  int ans = 6 * (6 + 1) / 2;
  cout << ans - sum;
  return 0;
}