class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int size = nums.size(); //size will be even
        //array contains same weight of +ive and -ive numbers.
        
        vector<int> result(nums.size());
        int evenPos=0; //starting index with +ive number
        int oddPos=1;   //obviously ending with -ive number
        for(int i=0; i<nums.size(); i++){

            if(nums[i]>0){
                result[evenPos] = nums[i];    //storing +ives in even positions
                evenPos = evenPos + 2;
            }else{
                result[oddPos] = nums[i];    //storing -ives in odd positions
                oddPos = oddPos + 2;
            }
        }
        return result;
        
    }
};