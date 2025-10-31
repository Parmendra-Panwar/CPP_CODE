#include <vector>
using namespace std;

int solve(vector<int> &A, int b) {
    int maxSum  = 0;
    int l_Max_S = 0;
    int r_Max_S = 0;
    int n = A.size();
    for(int i=0; i<b; i++){
        l_Max_S += A[i];
    }
    maxSum = l_Max_S;
    for(int i=1; i<=b; i++){
        l_Max_S -= A[b-i];
        r_Max_S += A[n-i];
        maxSum = max(maxSum, l_Max_S + r_Max_S);
    }
    
    return maxSum;
}
