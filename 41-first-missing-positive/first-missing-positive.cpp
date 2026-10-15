class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> frq(n+1);
        for(int i:nums){
            if(i>0 && i<=n)
                frq[i]=1;
        }
        for(int i=1;i<=n;i++){
            if(frq[i]==0)
                return i;
        }
        return n+1;
    }
};