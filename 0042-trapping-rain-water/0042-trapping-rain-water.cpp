class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax;
        int maxVal = height[0];
        for(int x: height){
            if(x>maxVal){
            prefixMax.push_back(x);
            maxVal = x;
            }
            else{
            prefixMax.push_back(maxVal);
            }
        }
        vector<int> suffixMax(height.size());
        int maxVal2 = height[height.size()-1];
        for(int i = height.size()-1; i >=0; i--){
            if(height[i]>maxVal2){
                suffixMax[i]=(height[i]);
                maxVal2 = height[i];
            }
            else{
                suffixMax[i]=(maxVal2);
            }
        }
        // for(int x: prefixMax){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(int x: suffixMax){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int total = 0;
        for(int i = 0; i < height.size();i++){
            if(height[i]<prefixMax[i] && height[i]<suffixMax[i]){
                // cout<<"Adding to total for i "<< i<<" and min is "<<min(prefixMax[i],suffixMax[i]);
                // cout<<" value is "<<(min(prefixMax[i],suffixMax[i])- height[i])<<endl;
                total+=(min(prefixMax[i],suffixMax[i])- height[i]);
            }
        }
        return total;
    }
};