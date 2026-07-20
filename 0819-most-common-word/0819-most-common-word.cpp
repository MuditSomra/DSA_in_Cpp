class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
            for(char &c: paragraph){
                if(isalpha(c)){

                c = tolower(c);
                }
                else{
                    c = ' ';
                }
            }
      
        vector<string> words;
        stringstream ss(paragraph);
        string temp;
      
        map<string, int> mp;
        while(ss>>temp){
            words.push_back(temp);
            mp[temp]++;
        }
        for(string s: banned){
            mp[s]=0;
        }
        int maxNum = -1;
        string maxString;
        for(auto it: mp){
            if(maxNum<it.second){
                maxNum = it.second;
                maxString = it.first;
            }
        }
        return maxString;

    }
};