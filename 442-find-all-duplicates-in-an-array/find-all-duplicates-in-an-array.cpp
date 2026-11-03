class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> frq;
        vector<int> ans;
        for(auto x:nums)
            frq[x]++;
        for(int i=1;i<=nums.size();i++){
            if(frq[i]==2)
            ans.push_back(i);
        }
    return ans;
    }
};