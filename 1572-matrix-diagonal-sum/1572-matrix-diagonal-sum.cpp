class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r = mat.size();
       
        int sum = 0;
        // for(int i = 0; i < r; i++){
        //     for(int j = 0; j < c; j++){
        //         if(i==j || (i+j)==(c-1)){
                  
        //             sum += mat[i][j];
        //         }
        //     }
        // }
        for(int i = 0; i < r; i++){
            sum+=mat[i][i];
            if((r-1-i)!=i){
            sum+=mat[r-1-i][i];
            }
        }
        return sum;
    }
};