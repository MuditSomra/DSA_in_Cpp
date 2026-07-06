class Solution {
public:
    bool isPossible(vector<int>& position, int target, int n){
        int noOfBall = 1;
        int last = position[0];
        for(int i = 1; i < position.size(); i++){
            if((position[i]-last)>=target){
                noOfBall++;
                last = position[i];
            }
            
        }
        if(noOfBall>=n){
            return true;
        }
        else{
            return false;
        }
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int l = 0;
        int h = position[position.size()-1]-position[0];
        int mid;
        int max = -1;
        while(l<=h){
            mid = l + (h - l)/2;
            // cout<<mid<<" this is mid"<<endl;
            if(isPossible(position, mid, m)){
            // cout<<mid<<" this mid is possible"<<endl;

                max = mid;
                l = mid + 1;
            }
            else{
            // cout<<mid<<" this mid is not possible"<<endl;
                h = mid - 1;
            }
        }
        return max;
    }
};