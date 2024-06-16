#include <iostream>
using namespace std;

int main()
{
  int k;
  cin >> k;
  for (int i = 1; i <= k; i++)
  {
    for (int j = 1; j <= k - i; j++)
    {
      cout << "-" << " ";
    }
    for (int m = 1; m <= i; m++)
    {
      cout << m << " ";
    }
    cout << endl;
  }

  return 0;
}