#include <bits/stdc++.h>
using namespace std;


const int MAX_VAL = 1e6 +1 ;

int main(){
    int n , freq[MAX_VAL] = {};
    cin>>n;
    vector <int> A(n);
    for(int i = 0; i < n; i++){
        cin>>A[i];
        freq[A[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(freq[A[i]] > 0){
            cout<<"Freq of "<<A[i]<<" = "<<freq[A[i]]<<endl;
            freq[A[i]] = 0 ;
        }
    }

    return 0;
}
