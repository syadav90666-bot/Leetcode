class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> frq;
        vector<int> ans;
        for(auto x:nums )
            frq[x]++;
        for(int i=1;i<=n;i++){
            if(frq[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};