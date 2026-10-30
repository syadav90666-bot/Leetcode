class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
       // woring to creat because remainder and count not proper count  unordered_map<int,int> mp;
       vector<int> mp(k,0);
        for(auto n:arr){
            // this is not handle negative remainder int rem = n%k;
            int rem =(n%k + k)%k;
            mp[rem]++;
        }
        if(mp[0]%2!=0)
            return false;
        for(int i=1;i<=k/2;i++){
           // int require = k-i;
            if(mp[i]!=mp[k-i])
                return false;
        }
        return true;
    }
};