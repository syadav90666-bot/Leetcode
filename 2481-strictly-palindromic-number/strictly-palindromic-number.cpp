class Solution {
public:
int binary(int n, int base){
    int ans = 0;
    int orginal =n;
    long long p = 1;
    while(n > 0){
        int rem = n % base;
        ans += rem * p;
        p *= 10;
        n /= base;
    }
    return orginal == ans;
}
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            if(!binary(n,i)) return false;
        }
        return true;
        
    }
};