class Solution {
public:
    string frequencySort(string s) {
        // transform(s.begin(), s.end(), s.begin(), ::tolower);
       map<int, vector<char>> mp;
       unordered_map<char,int> mptemp;
    //    vector<int> freq(52);
       for(char c: s){
        mptemp[c]++;
        }
        
       for(auto it = mptemp.begin(); it!=mptemp.end(); it++){
      
            mp[it->second].push_back(it->first);
         }
        
       
    //    sort(freq.begin(), freq.end());

       string ans = "";
       for(auto it = mp.rbegin(); it != mp.rend(); it++){
        while(it->second.size()>0){
            for(int i = 0; i < it->first; i++ ){
                cout<<"radhe radhe"<<endl;
                ans+=it->second.front();
                // it->second = it->second - 1;
            }
            it->second.erase(it->second.begin());

        }
       }
    //    reverse(ans.begin(), ans.end());
       return ans;
    }
};