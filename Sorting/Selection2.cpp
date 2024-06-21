<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter A Number Less Then 9999: ";
  cin >> n;
  int A[10000];
  cout << "Enter Elements That You Want To SORT: ";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = n - 1; i >= 1; i--)
  {
    int index = i;
    for (int j = 0; j < i; j++)
    {
      if (A[j] > A[index])
      {
        index = j;
      }
    }
    swap(A[i], A[index]);
    for (int i = 0; i < n; i++)
    {
      cout << A[i] << " ";
    }
    cout << endl;
  }
  /*for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }*/
  cout << endl;
  return 0;
=======
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter A Number Less Then 9999: ";
  cin >> n;
  int A[10000];
  cout << "Enter Elements That You Want To SORT: ";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = n - 1; i >= 1; i--)
  {
    int index = i;
    for (int j = 0; j < i; j++)
    {
      if (A[j] > A[index])
      {
        index = j;
      }
    }
    swap(A[i], A[index]);
    for (int i = 0; i < n; i++)
    {
      cout << A[i] << " ";
    }
    cout << endl;
  }
  /*for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }*/
  cout << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}