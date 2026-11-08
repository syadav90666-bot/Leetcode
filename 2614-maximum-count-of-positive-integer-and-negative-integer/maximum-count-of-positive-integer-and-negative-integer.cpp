class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos =0;
        int neg=0;
        int maxcount =0;
        for(auto x: nums){
            
                
            if(x<0)
                neg++;
            else if(x>0) pos++;
        }
        maxcount = max(neg,pos);
        return maxcount;
    }
};