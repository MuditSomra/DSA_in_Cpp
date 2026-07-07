class Solution {
public:
    bool isUgly(int n) {
        vector<int>factor = {2,3,5};
        if(n==0){
            return false;
        }
        for(int x: factor){
            // cout<<" working for factor "<<x<<" and n "<<n<<endl;
            if(n==1){
                return true;
                // break;
            }
            while(n%x==0){
                // cout<<" inside while with n "<<n<<" and x = "<<x<<endl;
                n = n/x;
            }
        }
        if(n==1){
            return true;
        }
        return false;
    }
};