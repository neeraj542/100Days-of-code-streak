#include<bits/stdc++.h>
using namespace std;
//commemt

int main(){
    string s = "tour";
    // string s;
    // for(int i=0; i<s.length(); i++){
    //     cin >> s[i];
    // }

    for(int i=0; i<s.length(); i++){
        
        if(i%2 != 0){
            s[i] = '.';
        }
    }

    for(int i=0; i<s.length(); i++){
        cout << s[i];
    }
    return 0;
}
