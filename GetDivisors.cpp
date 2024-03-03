#include <bits\stdc++.h>
using namespace std;

vector<int> get_divisors(int n){
    vector<int> divsors;
    for(int i = 1 ;i * i< n;i++){
        if(n % i == 0){
            divsors.push_back(i);
            if( i != n / i){
                divsors.push_back((n/i));
            }
        }
    }
    return divsors;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    auto divs = get_divisors(n);
    for(auto d : divs){
        cout<<d<<" ";
    }

    return 0;
}
