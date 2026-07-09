class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int left = 0;
        int right = 0;
        int maxWindow = 0;
        for( int i = 0 ; i < s.size(); i++){
            int c = s[i];
            if(++mp[c] == 2){
                while(mp[c]!=1){
                    int ch = s[left];
                    mp[ch]--;
                    left++;
                } 
            }
            right++;
            int diff = right - left;
            maxWindow = max(diff, maxWindow);
        }
        return maxWindow;
        
    }
};