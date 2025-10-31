<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
  int arr[500] = {1, 2, 3, 4, 5};
  int start = 0, end = 4;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
=======
#include <iostream>
using namespace std;

int main()
{
  int arr[500] = {1, 2, 3, 4, 5};
  int start = 0, end = 4;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}