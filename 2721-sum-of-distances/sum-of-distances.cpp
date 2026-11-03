class Solution {
public:
typedef long long ll;
    vector<ll> distance(vector<int>& nums) {
        int n=nums.size();
        vector<ll> ans(n,0);
        unordered_map<int, ll>indexcount;
        unordered_map<int, ll>indexsum;
        for(int i=0;i<n;i++){
            ll frq =indexcount[nums[i]];
            ll sum = indexsum[nums[i]];
            ans[i] = frq*i - sum;
            indexcount[nums[i]]+=1;
            indexsum[nums[i]]+=i;
            
        }
        indexcount.clear();
        indexsum.clear();
        for(int i=n-1;i>=0;i--){
            ll frq = indexcount[nums[i]];
            ll sum = indexsum[nums[i]];
            ans[i] += sum-frq*i;
            indexcount[nums[i]]+=1;
            indexsum[nums[i]]+=i;
        }
        return ans;
    }
};