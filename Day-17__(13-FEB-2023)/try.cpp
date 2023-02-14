#include <iostream>
using namespace std;

int main() {

	    int n;
	    cin >> n;
	    
	    int arr[n];
	    int count = 0;
	    
	    for(int i=0; i<n; i++){
	        
	        if(arr[i+1]==arr[i]){
	            count++;
	        }
	        
	    }
	    
	    if(count==n){
	        cout << "0" << endl;
	    }
	   // }else{
	   //     cout << (n-count) << endl;
	   // }
	return 0;
}
