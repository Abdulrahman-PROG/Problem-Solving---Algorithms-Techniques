#include <bits\stdc++.h>
using namespace std;

vector<pair<int,int>> factorize(int n){
    vector<pair<int,int>> factors;
    for(int i = 2; i * i <n;++i){
        int pow =0;
        while(n % i == 0){
            ++pow;
            n/=i;
        }
        if(pow>0){
            factors.emplace_back(i,pow);
        }
    }
    if(n!=1){
        factors.emplace_back(n,1);
    }
    return factors;

}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    auto factors = factorize(n);
    for(auto d : factors){
        cout<<d.first<<" power of "<<d.second<<endl;
    }
    return 0;
}
