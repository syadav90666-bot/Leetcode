class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        unordered_set<int> s3(nums3.begin(),nums3.end());
        vector<int> ans;
        for(auto x:s1){
            if(s2.count(x)|| s3.count(x))
                ans.push_back(x);
        }
        for(auto x:s2){
            if(s3.count(x) && !s1.count(x))
                ans.push_back(x);
        }
        return ans;
    }
};