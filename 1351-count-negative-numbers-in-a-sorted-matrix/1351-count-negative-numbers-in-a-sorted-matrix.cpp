class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int cow = grid[0].size();
        int count = 0;
        for(int r = 0; r < row; r++){
            for(int c = cow-1; c>=0; c-- ){
                if(grid[r][c]<0){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};