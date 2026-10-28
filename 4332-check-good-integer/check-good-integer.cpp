class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum =0;
        int squar =0;
        while(n>0){
            int a= n%10;
            sum +=a;
            squar +=a*a;
            n=n/10;
        }
        if(squar-sum>=50)
            return true;
        return false;
    }
};