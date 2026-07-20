class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>>ans;
        vector<int> temp;
        for(int i = 0; i < c; i++){
            temp.clear();
            for(int j = 0; j < r; j++){
                // swap(matrix[i][j],matrix[j][i]);
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};