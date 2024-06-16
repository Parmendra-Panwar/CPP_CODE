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
    for (char name = 'A'; name <= 'A' + i - 1; name++)
    {
      cout << name << " ";
    }
    cout << endl;
  }

  return 0;
}