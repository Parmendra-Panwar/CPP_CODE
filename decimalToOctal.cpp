<<<<<<< HEAD
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
    int i = n % 8;
    ans += i * mul;
    mul = mul * 10;
    n = n / 8;
  }
  cout << ans << endl;
  return 0;
}
=======
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
    int i = n % 8;
    ans += i * mul;
    mul = mul * 10;
    n = n / 8;
  }
  cout << ans << endl;
  return 0;
}
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
