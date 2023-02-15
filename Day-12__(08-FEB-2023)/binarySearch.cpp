// Platform Name: LeetCode
// Problem Level: 
// Problem Name: Binary Search
// Problem Link:
// Date on solved:

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int start = 0;
        int end = (n-1);
        int mid = (start + end)/2;
        
        while(start <= end){
            
            if(arr[mid] == k){
                return mid;
            }
            
            if(arr[mid] < k){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            
            mid = (start + end)/2;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
