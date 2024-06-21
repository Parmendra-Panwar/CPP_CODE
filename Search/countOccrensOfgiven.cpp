#include <iostream>
using namespace std;

int main()
{
  int n, start, end, k, mid, first = -1, last = -1;
  cin >> n;
  int m[n];
  for (int i = 0; i < n; i++)
  {
    cin >> m[i];
  }
  start = 0;
  end = n - 1;
  while (start <= end)
  {
    mid = start - (end - start) / 2;
    if (m[mid] == k)
    {
      first = mid;
      end = mid - 1;
    }
    else if (m[mid] < k)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  while (start <= end)
  {
    mid = start - (end - start) / 2;
    if (m[mid] == k)
    {
      last = mid;
      start = mid + 1;
    }
    else if (m[mid] < k)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << (last - first) + 1 << endl;
  return 0;
}