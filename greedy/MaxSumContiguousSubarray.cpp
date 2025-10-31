//kadane's algorithm

#include <vector>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int maxSoFar = A[0];
    int maxEndingHere = A[0];
    
    for(int i=1; i<A.size(); i++){
        maxEndingHere = max(A[i], maxEndingHere + A[i]);
        
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    return maxSoFar;
}
