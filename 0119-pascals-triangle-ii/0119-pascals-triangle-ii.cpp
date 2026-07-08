class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int> prev;
    vector<int> temp;
    vector<vector<int>> ans; 
        for(int i = 1; i <= rowIndex+1; i++){
            temp.clear();
            for(int j = 0; j < i;j++){
                // cout<<" This is i "<<i<<" with j "<<j<<endl;
                if(j==0 || j==(i-1)){
                    temp.push_back(1);
                }
                else{
                    temp.push_back((prev[j]+prev[j-1]));
                }
            }
            prev = temp;
            ans.push_back(temp);

        }
    return ans[rowIndex];
    }
};