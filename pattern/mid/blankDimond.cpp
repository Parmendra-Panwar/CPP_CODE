<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int n, row, col;
  cin >> n;
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    for (col = 1; col <= 2 * n - 2 * row; col++)
    {
      cout << "  ";
    }
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    for (col = 1; col <= 2 * n - 2 * row; col++)
    {
      cout << "  ";
    }
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
=======
#include <iostream>
using namespace std;

int main()
{
  int n, row, col;
  cin >> n;
  for (row = n; row >= 1; row--)
  {
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    for (col = 1; col <= 2 * n - 2 * row; col++)
    {
      cout << "  ";
    }
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    for (col = 1; col <= 2 * n - 2 * row; col++)
    {
      cout << "  ";
    }
    for (col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}