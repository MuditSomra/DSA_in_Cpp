class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string sub = "";
        if(n1<n2){
            for(int i = 0; i < (n2-n1); i++){
                sub+="0";
            }
            num1 = sub+num1;
            n1 = n2;
        }
        else{
            for(int i = 0; i < (n1-n2); i++){
                sub+="0";
            }
            num2 = sub+num2;
            n2 = n1;
        }
        int carry = 0;
        string ans = "";
        for(int i = n1-1; i >=0; i--){
            int sum = (num1[i]-'0')+(num2[i]-'0') + carry;
            carry = 0;
            if(sum>9){
                carry = sum/10;
                sum = sum % 10;
            }
            ans += to_string(sum);
        }
        if(carry!=0){
            ans += to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};