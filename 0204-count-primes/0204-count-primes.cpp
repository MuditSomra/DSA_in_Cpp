class Solution {
public:
    int countPrimes(int n) {
        vector<int> arr(n,1);
        if(n==0 || n==1){
            return 0;
        }
        
        arr[0]=0;
        // if(n!=0){
        arr[1]=0;
        // int count = 0;
        for(int i = 2; i * i <= n; i++){

            if(arr[i]==1){
                // cout<<"Inside if with i "<<i<<endl;
                // count++;
                for(int j = i*i; j<n; j+=i){
                    
                // cout<<"making multiple of i ="<<i<<" and number j "<<j<<" zero "<<endl;
                    arr[j]=0;
                }
            }
        }
        int count = 0;
        for(int x: arr){
            count+=x;
        }
        // for(int i = 0; i < n; i++){
        //     if(arr[i]==1){
        //         // cout<<i<<" ";
        //         count++;
        //     }
        // }
        // for(int x: arr){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        return count;
    }
};