//try.cpp 
// created for just try to practice and used as rough page

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size = nums.size();
        int ans[size];
        for(int i=0; i<size; i++){
            ans[i] = nums[nums[i]];
        }
        vector<int> ansvector(ans, ans+size); //data transfer from array to vector
        return ansvector;
    }
};
