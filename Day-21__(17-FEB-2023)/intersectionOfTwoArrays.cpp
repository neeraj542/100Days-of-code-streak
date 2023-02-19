class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int>ans;
        int count = 0;
        for(int i=0; i<nums1.size(); i++){

            for(int j=0; j<nums2.size(); j++){

                if(nums1[i] == nums2[j]){
                    // nums2[j] = INT_MIN;
                    ans.push_back(nums1[i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};