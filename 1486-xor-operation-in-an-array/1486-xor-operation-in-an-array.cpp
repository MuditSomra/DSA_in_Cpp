class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        
        for(int i = start+2,  j = 0; j < n-1 ;i+=2, j++){
            
          
            ans ^= i;
        }
        return ans;
    }
};