#include <iostream>
using namespace std;
int prime(int n)
{
  if (n < 2)
  {
    return false;
  }
  else
  {
    for (int i = 3; i * i < n; i += 6)
    {
      if (n % i == 0 || n % (i + 2) == 0)
      {
        return false;
      }
    }
    return true;
  }
}
int main()
{
  int n;
  cin >> n;
  cout << (prime(n) ? "Yes!" : "No!");
  return 0;
}