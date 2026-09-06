class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int x :nums){
            st.insert(x);
        
        }
        if(st.size()==n)
            return false;
        return true;
    }
};