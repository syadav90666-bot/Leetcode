class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int idx;
        int count =0;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
                idx=i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]*2<=max) count++;
        }
        if(count==n-1)
            return idx;
        return -1;
    }
};