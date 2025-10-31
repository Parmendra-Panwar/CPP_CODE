#include <iostream>
using namespace std;

void fibo(int n)
{
  int last = 0, pre = 1, curr;
  cout << last << " " << pre << " ";
  for (int i = 1; i < n - 1; i++)
  {
    curr = last + pre;
    cout << curr << " ";
    last = pre;
    pre = curr;
  }
}

int main()
{
  int n;
  cin >> n;
  fibo(n);

  return 0;
}