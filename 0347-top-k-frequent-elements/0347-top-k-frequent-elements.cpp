class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> mp;
       for(int x: nums){
        mp[x]++;
       }
       vector<vector<int>> temp(nums.size()+1);
       for(auto it: mp){
        temp[it.second].push_back(it.first);
       }
       vector<int> ans;
       for(int i = temp.size()-1; i >=0 && k>0; i--){
             
                if(temp[i].size()!=0){
                    for(int x: temp[i]){
                
                    ans.push_back(x);
                    k--;
                }

            }
       }
    //            int max;
    //    int maxVal;
    //    vector<int> ans;
    //   for(int i = 0; i < k ; i++){
    //     max = -1;
    //    for(auto it: mp){
    //     if(it.second>=max){
    //         max = it.second;
    //         maxVal = it.first;
    //     }
    //    }
    //    ans.push_back(maxVal);
    //    mp.erase(maxVal);
    //   }

      
       
       return ans;
        
        
    }
};