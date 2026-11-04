class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans =0;
        int max =INT_MIN;
           int m = *max_element(nums.begin(),nums.end());
        while(k--){
           
            ans+=m;
            m++;
            
        }
return ans;
    }
};