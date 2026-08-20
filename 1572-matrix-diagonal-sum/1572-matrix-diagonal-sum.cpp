class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int sum = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(i==j || (i+j)==(c-1)){
                  
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};