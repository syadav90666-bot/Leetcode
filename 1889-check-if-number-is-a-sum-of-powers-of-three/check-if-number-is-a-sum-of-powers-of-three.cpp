class Solution {
public:
    bool checkPowersOfThree(int n) {
       /* long long sum1 =0;
        long long sum2 =0;
        for(int i=0;i<n;i++){
            if(i%2!=0){
                sum1 +=pow(3,i);
                if(sum1==n || sum2==n)
                return true;
            }
            else {
                sum2+=pow(3,i);
            if(sum1==n || sum2==n)
                return true;
            }
        }*/
        while(n>0){
            if(n%3==2)
                return false;
            n/=3;
        }
        return true;
    }
};