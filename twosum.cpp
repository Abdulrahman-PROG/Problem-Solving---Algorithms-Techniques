#include <bits/stdc++.h>
using namespace std;

bool twosum(vector<int>& A , int T){
    int j = A.size()-1;
    for(int i = 0; i < j ; ++i){
        while(j > i && A[i] + A[j] > T){
            --j;
            if(A[i] + A[j] == T){
                return true;
            }
        }
    }
    return false;
}


int main()
{
    vector<int> A = {1,2,3,4,5};
    int T = 8;
    bool res = twosum(A,T);
    cout<<res;

    return 0;
}
