class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> ans;
        for(auto x:nums){
            if(x<pivot)
                ans.push_back(x);
            
        }
        for(int x:nums){
            if(x==pivot)
                ans.push_back(x);
        }
        for(auto i:nums){
            if(i>pivot)
                ans.push_back(i);
        }
        return ans;
    }
};