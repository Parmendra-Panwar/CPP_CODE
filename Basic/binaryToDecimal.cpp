#include <iostream>
using namespace std;

int main()
{
  // for big number we can use string insted int
  int n;
  cin >> n;
  int ans = 0, mul = 1;
  while (n)
  {
    int i = n % 10;
    ans += i * mul;
    mul = mul * 2;
    n = n / 10;
  }
  cout << ans << endl;
  return 0;
}