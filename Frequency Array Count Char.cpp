#include <bits/stdc++.h>
using namespace std;


const int MAX_VAL = 1e6 +1 ;

int main(){
    int freq[MAX_VAL] = {};
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        freq[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] == 0){
            cout<<"Not a panagram\n";
            return 0;

        }
    }
    cout<<"panagram\n";
}
