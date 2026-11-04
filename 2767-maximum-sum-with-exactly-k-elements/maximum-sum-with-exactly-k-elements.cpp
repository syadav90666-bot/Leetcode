class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans =0;
        int max =INT_MIN;
           for(int i=0;i<nums.size();i++){
            if(max<nums[i]) max=nums[i];
           }
       for(int i=0;i<k;i++){
        ans+=max;
        max++;
       }
return ans;
    }
};