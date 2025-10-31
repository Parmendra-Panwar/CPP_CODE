<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int A[5] = {1, 2, 4, 5, 4};
  int lat = A[4];

  for (int i = 5 - 2; i >= 0; i--)
  {
    A[i + 1] = A[i];
  }

  A[0] = lat;

  for (int i = 0; i < 5; i++)
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
  int A[5] = {1, 2, 4, 5, 4};
  int lat = A[4];

  for (int i = 5 - 2; i >= 0; i--)
  {
    A[i + 1] = A[i];
  }

  A[0] = lat;

  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}