class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        string ans;
        bool isNeg = false;
        if(num<0){
            isNeg = true;
            num = -1 * num;
        }

        while(num>0){
            ans += to_string(num%7);
            num/=7;
        }
        if(isNeg){
            ans+="-";
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};