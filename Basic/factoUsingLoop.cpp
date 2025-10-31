#include <iostream>
using namespace std;
int main()
{
  // point points [n];
  // point ( point.a, point.b, point.c)
  // codevita
  long double fact = 1, n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  cout << fact;
}