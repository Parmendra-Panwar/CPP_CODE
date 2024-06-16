#include <iostream>
using namespace std;

int main()
{
  // can't use float
  int n;
  cin >> n;
  switch (n)
  {
  case 1:
    cout << "hi";
    break;

  case 2:
    cout << "NANA";
    break;

  default:
    cout << "PAPA";
  }
  return 0;
}