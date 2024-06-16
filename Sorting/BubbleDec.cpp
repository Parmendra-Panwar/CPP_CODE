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
  for (int i = n - 2; i >= 0; i--)
  {
    bool swaping = 0;
    for (int j = 0; j <= i; j++)
    {
      if (A[j + 1] > A[j])
      {
        swap(A[j], A[j + 1]);
        swaping = 1;
      }
    }
    /*if (swaping)
    {
      break;
    }*/
  }
  cout << "HERE'S YOUR ARRAY :" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}