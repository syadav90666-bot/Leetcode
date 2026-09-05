class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> prifixmax(n);
        vector<int> suffixmin(n);
        prifixmax[0]=nums[0];
        for(int i=1;i<n;i++){
            prifixmax[i]=max(prifixmax[i-1],nums[i]);

        }
        suffixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmin[i]=min(suffixmin[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            int score =prifixmax[i]-suffixmin[i];
            if(score<=k)
                return i;
        }
        return -1;
    }
};