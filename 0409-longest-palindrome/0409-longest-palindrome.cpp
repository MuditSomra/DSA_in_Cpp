class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        bool isSingle = false;
        int count = 0;
        for(auto x: mp){
            if(x.second%2==0){
                count+=x.second;
            }
            else{
                isSingle = true;
                count =count + (x.second-1);
            }
            
        }
        if(isSingle){
            count++;
        }
        return count;
    }
};