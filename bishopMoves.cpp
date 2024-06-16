#include <iostream>
using namespace std;

int main()
{
  int a, b, ans = 0;
  cin >> a >> b;
  ans += min(8 - a, 8 - b);
  ans += min(a - 1, b - 1);
  ans += min(abs(1 - a), 8 - b);
  ans += min(8 - a, abs(1 - b));
  cout << ans << endl;
  return 0;
}