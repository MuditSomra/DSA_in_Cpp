class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int monthArAlice = stoi(arriveAlice.substr(0,2));
        int monthDpAlice = stoi(leaveAlice.substr(0,2));
        int dateArAlice = stoi(arriveAlice.substr(3));
        int dateDpAlice = stoi(leaveAlice.substr(3));
        int monthArBob = stoi(arriveBob.substr(0,2));
        int monthDpBob = stoi(leaveBob.substr(0,2));
        int dateArBob = stoi(arriveBob.substr(3));
        int dateDpBob = stoi(leaveBob.substr(3));
        vector<int> sum;
        sum.push_back(0);
        int v=0;
        for(int x: months){
            v+=x;
            sum.push_back(v);
        }
        // cout<<endl;
        // for(int x: sum){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // cout<<dateArBob<<" "<<dateArAlice<<" "<<dateDpBob<<" "<<dateDpAlice<<endl;
        // cout<<endl;
        int arrAlice = sum[monthArAlice-1]+dateArAlice;
        int arrBob = sum[monthArBob-1]+dateArBob;
        // cout<<dateArBob<<" ******* "<<sum[monthArBob-1]<<endl;
        int depAlice = sum[monthDpAlice-1]+dateDpAlice;
        // cout<<dateDpAlice<<" ####### "<<sum[monthDpAlice-1]<<endl;
        int depBob = sum[monthDpBob-1]+dateDpBob;
        // cout<<arrAlice<<" "<<arrBob<<" "<<depAlice<<" "<<depBob<<endl;
        int startOver = max(arrAlice, arrBob);
        int endOver = min(depAlice, depBob);
        // cout<<startOver<<" so and eo "<<endOver<<endl;
        if(endOver<startOver){
            return 0;
        }
        else{
            return endOver - startOver + 1;
        }
        return 0;
    }
};