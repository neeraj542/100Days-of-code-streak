class Solution {
public:
    string convertToBase7(int num) {
        
        //condition no.1
        if(num == 0){
            return "0";
        }

        string ans = "";

        //condition no.2
        int negative;
        if(num<0)
        {
            negative = true;
            num = abs(num);
        }

        while(num != 0){
            int mod = num % 7; //modulus niklega
            ans = ans + (char)(mod+'0');
            num = num / 7;
        }

        //condition no.3
        if(negative){
            ans.push_back('-');
        }

        reverse.(ans.begin(),ans.end());
        return ans;
    }
};