class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>>ans;
        vector<int> temp(n);
        for(int i = 0; i < n; i++){
            temp.clear();
            for(int j = n-1; j>=0; j--){
                if(image[i][j]==0){
                temp.push_back(1);
                }
                else{
                temp.push_back(0);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};