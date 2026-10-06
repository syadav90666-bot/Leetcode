class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> frq;
        for(int x:nums){
            frq[x]++;
        }
        for(int i: nums){
            if(frq[i]==2){
                ans.push_back(i);
                frq[i]=0;
            }
        }
        return ans;

    }
};