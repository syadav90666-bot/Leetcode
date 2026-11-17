class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<even.size();i++){
        
            ans[2*i]=even[i];
            
        }
        for(int i=0;i<odd.size();i++){
        
            ans[2*i+1]=odd[i];
            
        }
        return ans;
        
    }
};