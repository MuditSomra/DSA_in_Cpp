class Solution {
public:
    int findDivisor(int num){
        
        vector<int> ans;
        int sum = 0;
        for(int i = 2; i * i < num; i++){
            if(num % i==0){
                ans.push_back(i);
                cout<<i<<" ";
                sum += i;
                if(num/i!=i){
                    ans.push_back(num/i);
                    cout<<(num/i)<<" ";
                    sum+=(num/i);
                }
            }
        }
        return sum;
    }
    bool checkPerfectNumber(int num) {
        if(num==1){
            return false;
        }
        int sum = findDivisor(num);
        sum+=1;
        if(sum==num){
            return true;
        }
        return false;
    }
};