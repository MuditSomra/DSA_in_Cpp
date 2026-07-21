class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int prevp = 1;
        int prev = 2;
        int curr;
        for(int i = 3; i <=n ; i++){
            curr = prevp + prev;
            prevp = prev;
            prev = curr;
        }
        return prev;
     
      
     
        // return climbStairs(n-1) + climbStairs(n-2);
    }
};