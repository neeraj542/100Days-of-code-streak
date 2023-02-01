class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size = nums.size();
        int ans[size];
        for(int i=0; i<size; i++){
            ans[i] = nums[nums[i]];
        }
        vector<int> ansvector(ans, ans+size);
        return ansvector;
    }
};