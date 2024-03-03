#include <bits\stdc++.h>
using namespace std;


bool isPrime(int n){
    for(int i = 2;i*i < n; i++){
        if(n%i == 0) return false;
    }
    return n>1;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<(isPrime(n) ? "Prime" : "notPrime");

    return 0;
}
