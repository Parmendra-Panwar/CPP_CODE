#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = n; i >= 1; i--)
  {
    for (int k = 0; k < n - i; k++)
    {
      cout << "- ";
    }
    for (int m = 1; m <= i * 2 - 1; m++)
    {
      cout << "* ";
    }
    for (int k = 0; k < n - i; k++)
    {
      cout << "- ";
    }
    cout << endl;
  }
  return 0;
}