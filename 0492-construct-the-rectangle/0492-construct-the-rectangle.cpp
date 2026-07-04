class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mx = 1;
        for(int i = 1; i * i <=area; i++){
            if(area%i==0){
                mx = i;
            }
        }
        
        return {max(mx, area/mx),min(mx,area/mx) };
    }
};