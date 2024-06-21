<<<<<<< HEAD
#include <iostream>
using namespace std;

void Z_Check(int n = 5)
{
  int fiveS = 0;
  while (n >= 5)
  {
    fiveS += n / 5;
    n = n / 5;
  }
  cout << fiveS << endl;
}

int main()
{
  int n;
  cin >> n;
  Z_Check(n);
  return 0;
=======
#include <iostream>
using namespace std;

void Z_Check(int n = 5)
{
  int fiveS = 0;
  while (n >= 5)
  {
    fiveS += n / 5;
    n = n / 5;
  }
  cout << fiveS << endl;
}

int main()
{
  int n;
  cin >> n;
  Z_Check(n);
  return 0;
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
}