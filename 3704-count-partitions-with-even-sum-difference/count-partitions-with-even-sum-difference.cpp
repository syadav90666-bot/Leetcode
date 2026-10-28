class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for (int i = 0; i < n-1; i++) {
            vector<int> left(nums.begin(), nums.begin() + i+1);
            vector<int> right(nums.begin() + i + 1, nums.end());
            int leftSum = accumulate(left.begin(), left.end(), 0);
            int rightSum = accumulate(right.begin(), right.end(), 0);
            if((leftSum-rightSum)%2==0)
                count++;
        }
        return count;
    }
};