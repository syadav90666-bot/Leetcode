class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int maxel= *max_element(nums.begin(),nums.end());
        int ans=0;
        for(auto x: nums){
            ans+=abs(maxel-x);
        }
        return ans;
    }
};