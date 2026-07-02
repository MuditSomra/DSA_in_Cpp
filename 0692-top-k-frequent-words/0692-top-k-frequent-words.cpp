class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map <string, int> mp;
        for(string s: words){
            mp[s]++;
        }
        vector<pair<string, int>> arr;
        for(auto it: mp){
            arr.push_back(it);
        }
        sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            else{

            return a.second > b.second;
            }
        });
        vector<string> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(arr[i].first);
            // cout<<it.first<<" and "<<it.second<<endl;
        }
        return ans;
    }
};