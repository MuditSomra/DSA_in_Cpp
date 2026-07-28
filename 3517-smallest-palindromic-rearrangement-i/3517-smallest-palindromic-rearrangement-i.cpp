class Solution {
public:
    string smallestPalindrome(string s) {
       map<char,int> mp;
       bool found = false;
       char fv;
       for(char x: s){
        mp[x]++;
       } 
       string ans = "";
       for(auto &it: mp){
            if((it.second%2)!=0){
                found = true;
                fv = it.first;
            }
            int val = it.second/2;
            for(int i = 0; i < val ; i++){
                ans+=it.first;
                it.second--;
            }
        }
       string temp = ans;
       reverse(temp.begin(), temp.end());
       if(found){
        ans += fv;
        mp[fv]--;
       }
       ans += temp;
    //    for(auto it = mp.rbegin(); it != mp.rend(); it++){
    //     // if(it->second%2!=0){
    //     //     if(it->second>2){
    //     //         while(it->second!=1){
    //     //             ans+=it->first;
    //     //             it->second--;
    //     //         }
    //     //     } 
    //     // }
    //     // else{
    //     while(it->second!=0){
    //         ans+=it->first;
    //         it->second = it->second - 1;
    //     }
    //     // }
        
    //     }
        return ans;
    }
};