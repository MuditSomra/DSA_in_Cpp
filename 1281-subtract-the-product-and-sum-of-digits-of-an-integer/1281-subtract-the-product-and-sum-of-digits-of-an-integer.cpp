class Solution {
public:
    int subtractProductAndSum(int n) {
        int dig;
        int prod = 1;
        int sum = 0;
        while(n>0){
            dig = n % 10;
            n = n / 10;
            prod *= dig;
            sum += dig;
        }
        return prod - sum;
    }
};