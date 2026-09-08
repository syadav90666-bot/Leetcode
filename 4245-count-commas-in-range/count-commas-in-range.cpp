class Solution {
public:
    int countCommas(int n) {
        long long ans=0;
        if(n >= 1000)
            ans +=n-1000+1;
        if(n > 100000)
            ans +=n-100000+1;
       // if(n >= 1000)
          //  ans +=n-1000+1;
        return ans;
    }
};