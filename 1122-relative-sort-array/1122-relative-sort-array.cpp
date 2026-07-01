class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        vector<int>ans;
        for(int x: arr1){
            mp[x]++;
        }
        for(int x: arr2){
            for(int i = 0; i < mp[x]; i++){
                ans.push_back(x);
            }
            mp.erase(x);
        }
        for(auto it= mp.begin(); it!=mp.end(); it++){
            for(int i = 0; i < it->second; i++){
            ans.push_back(it->first);

            }
        }
        return ans;
    }
};