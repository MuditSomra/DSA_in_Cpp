/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int h = INT_MAX;
        int l = 1;

        // cout<<guess(n)<<endl;
        int m;
        int val;
        while(l<=h){
            m = l+(h-l)/2;
            val = guess(m);
            if(val==0){
                return m;
            }
            else if(val<0){
                h = m -1 ;
            }
            else{
                l = m + 1;
            }

        }
        
          return -1;
    }     
};