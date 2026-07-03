class Solution {
public:
    int val(vector<vector<int>>& matrix, int ind){
        int r = matrix.size();
        int c = matrix[0].size();
        int ar = ind/c;
        int ac = ind%c;
        return matrix[ar][ac];

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int l = 0;
        int h = (r*c)-1;
        int m;
        while(l<=h){
            m = l+(h-l)/2;
            if(val(matrix, m)==target){
                return true;
            }
            else if(val(matrix, m)>target){
                h = m -1 ;
            }
            else{
                l = m + 1;
            }
        }
        return false;
    }
};