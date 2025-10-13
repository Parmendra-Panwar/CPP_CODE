#include <iostream>
#include <vector>
using namespace std;

int main (){
  vector<int> n = {1,2,3,4,5,6,8};
  int target = 7;
  int l = 0, r = n.size();
  while(l < r){
    int m = l + (r - l) / 2;
    if(n[m] < target) l = m + 1;
    else r = m;
  }
  cout << l << endl;
  return 0;
}