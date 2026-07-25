class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        if(mp.size()<3){
            // cout<<"inside if "<<endl;
            auto it = prev(mp.end());
            return it->first;
        }
        else{
            // cout<<"inside else "<<endl;
            auto it1 = mp.end();
            it1--;
            for(int i = 0; i < 2; i++){
                it1--;
            }
            // auto it = prev(mp.end());
            return it1->first;

        }
    }
};