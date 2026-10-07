class Solution {
public:
    int thirdMax(vector<int>& num) {
        int n=num.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(num[i]);
        }
        vector<int> nums(st.begin(),st.end());
        if(nums.size()<3)
            return *max_element(nums.begin(),nums.end());

        int max=INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        for(int x:nums){
            if(x>max){
                third=second;
                second=max;
                max=x;
            }
            else if(x>second){
                third=second;
                second=x;
            }
            else if(x>third){
                third=x;
            }
        }
            /*if(n<2)
            return max;*/
        return third;
    }
};