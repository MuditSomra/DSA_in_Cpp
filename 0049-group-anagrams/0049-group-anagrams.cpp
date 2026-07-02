class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp;
        vector<vector<string>> ans;
        for(string s: strs){
            sort(s.begin(), s.end());
            temp.push_back(s);
        }
        unordered_map<string, vector<string>> mp(strs.size());
        for(int i = 0; i < temp.size(); i++){
            mp[temp[i]].push_back(strs[i]);
        }
        for(auto it= mp.begin(); it != mp.end(); it++){
          
            ans.push_back(it->second);
        }




        return ans;
    }
};