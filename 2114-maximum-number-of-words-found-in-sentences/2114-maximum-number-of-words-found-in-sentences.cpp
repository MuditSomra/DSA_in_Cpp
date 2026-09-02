class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = INT_MIN;
        int count = 0;
        for(string s: sentences){
            count = 0;
            for(char c: s){
                if(c==' '){
                    count++;
                }
            }
            maxCount = max(count, maxCount);
        }
        return maxCount+1;
    }
};