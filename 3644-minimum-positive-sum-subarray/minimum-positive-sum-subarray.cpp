
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int k) {

        int n = nums.size();
        int ans = INT_MAX;

        for(int len = l; len <= k; len++) {

            int sum = 0;

            for(int i = 0; i < len; i++) {
                sum += nums[i];
            }

            if(sum > 0)
                ans = min(ans, sum);

            for(int i = len; i < n; i++) {

                sum += nums[i];
                sum -= nums[i-len];

                if(sum > 0)
                    ans = min(ans, sum);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
