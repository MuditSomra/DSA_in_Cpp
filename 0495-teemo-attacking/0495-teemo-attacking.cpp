class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int tot = 0;
        for(int i = 1; i < timeSeries.size(); i++){
            int diff = timeSeries[i]-timeSeries[i-1];
            tot += min(diff,duration);
        }
        tot+=duration;
        return tot;
    }
};