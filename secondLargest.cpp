<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int ans = -1;
  int A[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    if (A[i] > ans)
    {
      ans = A[i];
    }
  }
  int seconMax;
  for (int i = 0; i < 5; i++)
  {
    if (A[i] != ans)
    {
      seconMax = A[i];
    }
  }
  cout << seconMax << endl;
  return 0;
=======
#include <iostream>
using namespace std;

int main()
{
  int ans = -1;
  int A[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    if (A[i] > ans)
    {
      ans = A[i];
    }
  }
  int seconMax;
  for (int i = 0; i < 5; i++)
  {
    if (A[i] != ans)
    {
      seconMax = A[i];
    }
  }
  cout << seconMax << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}