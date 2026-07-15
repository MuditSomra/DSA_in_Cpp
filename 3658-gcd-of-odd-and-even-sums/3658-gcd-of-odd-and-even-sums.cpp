class Solution {
public:
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int sum1 = -1;
        int sumTot1=0;
        int sum2 = 0;
        int sumTot2 = 0;
        for(int i = 0; i < n ;i++){
            sum1+=2;
            sum2+=2;
            sumTot1+= sum1;
            sumTot2 += sum2;
        }
        // cout<<sum1<<" sum1 and sum2 "<<sum2<<endl;
        return gcd(sumTot1, sumTot2);
    }
};