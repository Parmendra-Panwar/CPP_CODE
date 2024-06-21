<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter A Number (size of Arr) : ";
  cin >> n;
  int A[n];
  cout << "Enter Elements :";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (A[j] < A[j - 1])
      {
        swap(A[j], A[j - 1]);
      }
      else
      {
        break;
      }
    }
  }

  cout << "HERE'S YOUR ARRAY :" << endl;
  for (int i = 0; i < n; i++)
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
  int n;
  cout << "Enter A Number (size of Arr) : ";
  cin >> n;
  int A[n];
  cout << "Enter Elements :";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (A[j] < A[j - 1])
      {
        swap(A[j], A[j - 1]);
      }
      else
      {
        break;
      }
    }
  }

  cout << "HERE'S YOUR ARRAY :" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}