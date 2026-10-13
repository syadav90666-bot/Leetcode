class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;
        for(auto x:nums){
            if(x%2==0)
                ans.push_back(0);
            else ans.push_back(1);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};