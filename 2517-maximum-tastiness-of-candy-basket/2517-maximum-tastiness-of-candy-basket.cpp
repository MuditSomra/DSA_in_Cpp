class Solution {
public:

    bool isPossible(vector<int> &price, int target, int k){
        int noOfCandy = 1;
        int last = price[0];
        for(int i = 0; i < price.size(); i++){
            if((price[i]-last)>=target){
                noOfCandy++;
                last = price[i];
            }
        }
        if(noOfCandy>=k){
            return true;
        }
        else{
            return false;
        }
    }

    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int l = 0;
        int h = price[price.size()-1]-price[0];
        int m;
        int max = -1;
        while(l<=h){
            m = l + (h - l)/2;
            // cout<<m<<" this is m "<<endl;
            if(isPossible(price, m, k)){
            // cout<<m<<" this m  is possible"<<endl;
                max = m;
                l = m + 1;
            }
            else{
            // cout<<m<<" this m  is not possible"<<endl;
                h = m -1 ;
            }
        }
        return max;
    }
};