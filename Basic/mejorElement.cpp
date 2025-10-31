#include <vector>
using namespace std;

int majorityElement(const vector<int> &A) {
    int n = A.size();
    int kl = 0;
    int el = A[0];
    for(int i=0; i<n; i++){
        if(A[i] == el){
            kl++;
        }else if(A[i] != el){
            kl--;
            if(kl == 0){
                el = A[i];
                kl = 1;
            }
        }
    }   
    return el;
}
