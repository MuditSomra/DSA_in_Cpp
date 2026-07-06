class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(),piles.end());
        // cout<<max;
        int high = max;
        int low = 1;
        int mid;
        long long sum;
        
        while(low<=high){
            sum = 0;
            mid = low + (high-low)/2;
            // cout<<" this is mid "<<mid<<endl;
            for(int x: piles){
            // cout<<" this is value added to sum "<<(ceil((double)x/mid))<<endl;

                sum += (ceil((double)x/mid));
            }
            // cout<<sum<<" sum is this "<<endl;
            // if(sum==h){
            //     return mid;
            // }
            // else 
            if(sum>h){
                // cout<<"inside else if"<<endl;
                low = mid + 1;
            }
            else{
                // cout<<"inside else "<<endl;
                high = mid - 1;
            }
        }
        // cout<<low<<endl;
        return low;
        // return -1;
    }
};