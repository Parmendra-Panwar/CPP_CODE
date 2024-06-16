#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter A Number :" << endl;
  cin >> n;
  int target;
  cout << "ENTER ELEMENT THAT YOU WANT TO FIND" << endl;
  int nums[n];
  cout << "ENTER THE ELEMENTS :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  cout << endl;

  int mid;
  int sta = 0;
  int end = nums.size() - 1;
  int first = -1;
  int last = -1;

  while (sta <= end)
  {
    mid = sta + (end - sta) / 2;
    if (nums[mid] == target)
    {
      first = mid;
      end = mid - 1;
    }
    else if (nums[mid] < target)
    {
      sta = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  sta = 0, end = nums.size() - 1;
  while (sta <= end)
  {
    mid = sta + (end - sta) / 2;
    if (nums[mid] == target)
    {
      last = mid;
      sta = mid + 1;
    }
    else if (nums[mid] < target)
    {
      sta = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  vector<int> Ans(2);
  Ans[0] = first;
  Ans[1] = last;

  cout << Ans[0] << " " << Ans[1];
  return 0;
}