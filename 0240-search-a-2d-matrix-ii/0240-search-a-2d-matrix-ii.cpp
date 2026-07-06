class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int cr = 0;
        int cc = c-1;
        while(cr<r && cc>=0){
            if(matrix[cr][cc]==target){
                return true;
            }
            else if(matrix[cr][cc]<target){
                cr++;
            }
            else{
                cc--;
            }
        }
        return false;
    }
};