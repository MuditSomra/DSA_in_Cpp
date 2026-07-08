class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int digCount = 0;
        for(int x: nums){
            int m = x;
            while(x>0){
                x = x / 10;
                digCount++;
            }
            if( (digCount & 1) ==0){
                // cout<<"increasing count for "<<m<<endl;
                count++;
            }
            digCount = 0;
        }
        return count;
    }
};