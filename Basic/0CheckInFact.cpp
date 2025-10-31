#include <iostream>
using namespace std;

void Z_Check(int n = 5)
{
  int fiveS = 0;
  while (n >= 5)
  {
    fiveS += n / 5;
    n = n / 5;
  }
  cout << fiveS << endl;
}

int main()
{
  int n;
  cin >> n;
  Z_Check(n);
  return 0;
}