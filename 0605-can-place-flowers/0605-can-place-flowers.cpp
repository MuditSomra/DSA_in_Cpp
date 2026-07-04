class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = -1;
        int h = 0;
        while(h<flowerbed.size()){
            if(flowerbed[h]==0){
                h++;
                // cout<<" in if with h "<<h<<endl;
            }
            else{
                // cout<<"in else with h "<<h<<" and l "<<l<<endl;
                int diff = h - l;
              
                if(l==0){
                    n = n - ( diff / 2);
                }
                else{
                    n = n - (diff-1)/2;
                }
                h++;
                l=h;
                // cout<<" this is n after updation "<<n<<endl;
            }
        }
        int diff = h - l;
                if(flowerbed[h-1]==0)
                {
                    n = n - ( diff / 2);
                }
                else{
                    n = n - (diff-1)/2;
                }
        // cout<<n<<" this is n"<<endl;
        if(n<=0){
            return true;
        }
        return false;
    }
};