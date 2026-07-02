class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp;
        vector<vector<string>> ans;
        for(string s: strs){
            sort(s.begin(), s.end());
            temp.push_back(s);
        }
        unordered_map<string, vector<int>> mp(strs.size());
        for(int i = 0; i < temp.size(); i++){
            mp[temp[i]].push_back(i);
        }
        for(auto it= mp.begin(); it != mp.end(); it++){
            vector<string> tstr;
            for(int x: it->second){
                tstr.push_back(strs[x]);
            }
            ans.push_back(tstr);
        }




        return ans;
    }
};