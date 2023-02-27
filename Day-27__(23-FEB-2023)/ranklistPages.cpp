#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int x,a;
	    cin>>x;
	    a=x/25;
	    if(x%25==0)
	    {
	        cout<<a<<endl;
	    }
	    else
	    {
	        cout<<a+1<<endl;
	    }
	   
	    
	}
	return 0;
}