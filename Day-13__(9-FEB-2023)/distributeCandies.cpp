#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>candyType = {1,1,2,2,3,3};
    
    sort(candyType.begin(), candyType.end());

        int sameType = 1;
        int n = candyType.size();

        for(int i=1; i<n; i++){

            if(sameType >= n/2){
                break;
            }
            if(candyType[i] != candyType[i-1]){
                sameType++;
            }  
        }
        cout << sameType;
    return 0;
}
