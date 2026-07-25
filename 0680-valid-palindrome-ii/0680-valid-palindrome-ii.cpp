class Solution {
public:

        bool check1(string s){

        int l = 0;
        int h = s.size()-1;
        int count = 1;
        while(l<=h){
            if(s[l]==s[h]){
                l++;
                h--;
            }
            else{
                if(count==0){
                    return false;
                }
                count--;
                h--;
            }
        }
        return true;
        }
        bool check2(string s){

        int l = 0;
        int h = s.size()-1;
        int count = 1;
        while(l<=h){
            if(s[l]==s[h]){
                l++;
                h--;
            }
            else{
                if(count==0){
                    return false;
                }
                count--;
                l++;
            }
        }
        return true;
        }
    bool validPalindrome(string s) {
        bool ans1 = check1(s);
        bool ans2 = check2(s);
        if(ans1 || ans2){
            return true;
        }
        return false;

    }
};