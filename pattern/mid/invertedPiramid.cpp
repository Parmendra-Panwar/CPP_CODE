<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < i; k++)
    {
      cout << "- ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << "@ ";
    }
    for (int j = 1; j < n - i; j++)
    {
      cout << "@ ";
    }
    for (int k = 0; k < i; k++)
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
    for (int k = 0; k < i; k++)
    {
      cout << "- ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << "@ ";
    }
    for (int j = 1; j < n - i; j++)
    {
      cout << "@ ";
    }
    for (int k = 0; k < i; k++)
    {
      cout << "- ";
    }
    cout << endl;
  }
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}