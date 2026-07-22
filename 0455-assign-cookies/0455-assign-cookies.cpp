class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(), g.end());
        int l = 0; int r = 0;
        while(r<g.size() && l<s.size()){
            if(g[r]<=s[l]){
                r++;
                l++;
            }
            else{
                l++;
            }
        }
        // if(l==s.size()){
            return r;
        // }
    }
};