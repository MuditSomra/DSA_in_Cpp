class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int m = rounds.size();
        int r = 0;
        int i = rounds[r];
        vector<int> vis(n, 0);
        vis[i%n]++;
        while(r<m-1){
            while(i!=(rounds[r+1])%n){
                i++;
                i = i % n;
                // cout<<"increasing vis for "<<i<<endl;
                vis[i]++;
            }
            // cout<<"increasing round"<<endl;
            r++;
        }
        if(vis.empty()){
            return {};
        }
        int max_val = *max_element(vis.begin(), vis.end());
        vector<int> max_indices;
        for(int i = 0; i < vis.size(); i++){
            if(vis[i]==max_val){
                if(i==0){
                max_indices.push_back(n);
                }
                else{
                max_indices.push_back(i);
                }
            }
        }
        sort(max_indices.begin(), max_indices.end());
        return max_indices;
    }
};