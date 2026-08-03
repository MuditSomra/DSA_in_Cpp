class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int l = 0;
        int h = 0;
        int maxi = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[h]!='L'){
                if(s[h]=='A'){
                    a++;
                }
                // l++;
                h++;
                l = h;
            }
            else{
                h++;
            }
            maxi = max(maxi, h-l);
        }
        if(a<2 && maxi<3){
            return true;
        }
        return false;
    }
};