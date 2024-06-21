<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "- ";
    }
    for (int k = 1; k <= 2 * i + 1; k++)
    {
      cout << "^ ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << "- ";
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
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "- ";
    }
    for (int k = 1; k <= 2 * i + 1; k++)
    {
      cout << "^ ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << "- ";
    }
    cout << endl;
  }
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}