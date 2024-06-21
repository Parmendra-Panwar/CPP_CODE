<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
  int A[6] = {5, 2, 6, 7, 8, 9};
  for (int i = 0; i < 6 - 1; i++)
  {
    int index = i;
    for (int j = i + 1; j < 6; j++)
    {
      if (A[j] < A[index])
      {
        index = j;
      }
    }
    swap(A[i], A[index]);
  }
  for (int i = 0; i < 6; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
=======
#include <iostream>
using namespace std;
int main()
{
  int A[6] = {5, 2, 6, 7, 8, 9};
  for (int i = 0; i < 6 - 1; i++)
  {
    int index = i;
    for (int j = i + 1; j < 6; j++)
    {
      if (A[j] < A[index])
      {
        index = j;
      }
    }
    swap(A[i], A[index]);
  }
  for (int i = 0; i < 6; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}