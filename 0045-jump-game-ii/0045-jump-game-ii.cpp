class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> temp(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            temp[i]= i + nums[i];
            
        }
        
        int ind = temp.size()-1;
        int count = 0;
     
        while(ind!=0){
            for(int i = 0 ; i < temp.size(); i++){
                if(temp[i]>=ind){
                    ind = i;
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};