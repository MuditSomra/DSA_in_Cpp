class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i = 0; i < nums.size()-k; i++)
        // int i = -1;
        // int j = -1;
        // int n = nums.size()-2;
        // int n2 = nums.size();
        // if(nums.size()==1){
        //     return false;
        // }
        // // if(nums.size()<=k){
        // //     return false;
        // // }
        // // cout<<"Radhe Radhe "<<i<<" and "<<(i<(nums.size()-1))<<endl;
        // // cout<<"Radhe Radhe "<<i<<" and "<<(i<n)<<endl;
        // while(i<=(n)){
        // // cout<<"Radhe Radhe while"<<endl;
        //     i++;
        //     j = i+1;
        //     // cout<<i<<" i and j "<<j<<endl;
        //     while(abs(i-j)<=k && j < n2){
        //     // cout<<i<<" inside whele for "<<j<<endl;
        //     // cout<<nums[i]<<" inside whele for val "<<nums[j]<<endl;
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //         else{
        //             j++;
        //         }
        //     }

        // }
        // return false;
        int n = nums.size();
        unordered_map<int,int> map;
        
        for(int i = 0; i < n; i++){
            if(map.count(nums[i])){
                if(abs(i-map[nums[i]])<=k){
                    return true;
                }
                map[nums[i]] = i;
            }
                else{
                    map[nums[i]] = i;
                }
        }
        return false;

    }
};