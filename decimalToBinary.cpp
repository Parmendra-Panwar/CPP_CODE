<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  // for big number we can convert int to string

  int num, num2;
  cin >> num;
  num2 = num;
  int rem, ans = 0, mul = 1;
  while (num > 0)
  {
    rem = num % 2;
    num /= 2;
    ans += rem * mul;
    mul *= 10;
  }
  cout << ans << endl;
  ans = 0, mul = 1;
  while (num2)
  {
    rem = num2 & 1;
    num2 = num2 >> 1;
    ans += rem * mul;
    mul *= 10;
  }
  cout << ans << endl;
  return 0;
=======
#include <iostream>
using namespace std;

int main()
{
  // for big number we can convert int to string

  int num, num2;
  cin >> num;
  num2 = num;
  int rem, ans = 0, mul = 1;
  while (num > 0)
  {
    rem = num % 2;
    num /= 2;
    ans += rem * mul;
    mul *= 10;
  }
  cout << ans << endl;
  ans = 0, mul = 1;
  while (num2)
  {
    rem = num2 & 1;
    num2 = num2 >> 1;
    ans += rem * mul;
    mul *= 10;
  }
  cout << ans << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}