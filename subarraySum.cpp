#include <bits/stdc++.h>
using namespace std;

void subarraySum(vector<int>& A , int T){
   int S=0,E=0,sum=0;
   while(S < A.size()){
       while(E < A.size() && sum + A[E] <= T){
           sum+=A[E];
           ++E;
       }
       if(sum == T){
           cout<<S<<" "<<E-1;
           return;
       }
       sum-=A[S];
       ++S;
   }
   cout<<-1;
}


int main()
{
    vector<int> A = {1,2,3,4,5};
    int T = 6;
    subarraySum(A,T);
    return 0;
}
