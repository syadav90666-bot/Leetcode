class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> frq;
        for(auto x:nums){
            frq[x]++;

        }
        for(auto x:nums){
            if(frq[x]==1)
                return x;
        }
        return -1;
    }
};