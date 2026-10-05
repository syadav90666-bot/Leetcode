class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int a=0;
        for(auto x: nums){
            if(x%3!=0){
                if(x>3)
                    a++;
                else
                    a++;
            }
        }
        return a;
    }
};