#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i; j++)
    {
      cout << "- ";
    }
    for (int k = 1; k <= 2 * i + 1; k++)
    {
      cout << "O ";
    }
    for (int j = 1; j < n - i; j++)
    {
      cout << "- ";
    }
    cout << endl;
  }

  for (int i = 1; i < n; i++)
  {
    for (int k = 0; k < i; k++)
    {
      cout << "- ";
    }
    for (int j = 1; j < 2 * n - 2 * i; j++)
    {
      cout << "O ";
    }
    for (int k = 0; k < i; k++)
    {
      cout << "- ";
    }
    cout << endl;
  }

  return 0;
}