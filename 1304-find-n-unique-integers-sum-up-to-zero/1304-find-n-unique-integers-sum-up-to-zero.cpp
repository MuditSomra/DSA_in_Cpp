class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        if((n&1)==0){
            for(int i = -(n/2); i<=(n/2); i++){
                if(i==0){
                    continue;
                }
                else{
                    arr.push_back(i);
                }
            }
        }
        else{
            for(int i = -(n/2); i<=(n/2); i++){
                
                    arr.push_back(i);
                
            }

        }
        return arr;

    }
};