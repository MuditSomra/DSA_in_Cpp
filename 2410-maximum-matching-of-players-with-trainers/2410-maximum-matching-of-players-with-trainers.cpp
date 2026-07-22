class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int l = 0; int h = 0;
        while(l<players.size() && h<trainers.size()){
            if(players[l]<=trainers[h]){
                l++;
                h++;
            }
            else{
                h++;
            }
        }
        return l;
    }
};