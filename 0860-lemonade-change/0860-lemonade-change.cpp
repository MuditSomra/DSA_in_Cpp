class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> temp(5,0);
        int val;
        int rem;
        for(int x : bills){
            val = x/5;
            rem = x - 5;
            temp[val] +=1;
            if(rem!=0){
                if(rem==15){
                    if(temp[2]!=0){
                        rem-=10;
                        temp[2]-=1;
                    }
                    while(rem!=0){
                        temp[1]--;
                        rem-=5;
                    }
                    if(temp[1]<0){
                        return false;
                    }
                }
                if(rem==5){
                    // if(temp[2]!=0){
                    //     rem-=10;
                    // }
                    while(rem!=0){
                        temp[1]--;
                        rem-=5;
                    }
                    if(temp[1]<0){
                        return false;
                    }
                }
            }


        }
        return true;
    }
};