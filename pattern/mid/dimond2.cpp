<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= n - i - 1; j++)
    {
      cout << "-";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = n; i > 1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int k = 1; k < i; k++)
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
  int n;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= n - i - 1; j++)
    {
      cout << "-";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = n; i > 1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int k = 1; k < i; k++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}