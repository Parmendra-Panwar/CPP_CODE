#include <iostream>
#include <vector>
using namespace std;

void findKthPositive(vector<int> &arr, int k)
{
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    int missing = arr[mid] - (mid + 1);

    if (missing < k)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }

  cout << left + k << endl;
}

int main()
{
  vector<int> arr = {2, 3, 4, 7, 11, 12, 15, 21};
  int k = 9;
  findKthPositive(arr, k);
  return 0;
}
