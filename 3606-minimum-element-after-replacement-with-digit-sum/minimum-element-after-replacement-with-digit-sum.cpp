class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        int a;

        for (auto x : nums) {
            int sum =0;
            while (x > 0) {
                a = x % 10;
                x /= 10;
                sum += a;
            }
            ans.push_back(sum);
        }
        a= *min_element(ans.begin(), ans.end());
        return a;
    }
};