class Solution {
public:
    /*int findpivot(vector<int>& nums,int l,int r){
        while(l<r){
       while(l<r && nums[l]==nums[l+1])
            l++;
        while(l<r && nums[r]==nums[r-1])
            r--;
        int mid = l+(r-l)/2;
            if(nums[mid]>nums[r])
                l=mid+1;
            else if(nums[mid] < nums[r])
                r = mid;
            
        }
        return r;
    }
    bool binarysearch(vector<int>& nums,int l,int r,int& target){
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return true;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
            return false;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot =findpivot(nums,0,n-1);
        
        if(binarysearch(nums,0,pivot-1,target))
            return true;
        return binarysearch(nums,pivot,n-1,target);

    }*/
    bool search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) return true;
        if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
            l++; r--;                          
        } else if (nums[l] <= nums[mid]) {     // left half sorted
            if (nums[l] <= target && target < nums[mid]) r = mid - 1;
            else l = mid + 1;
        } else {                               // right half sorted
            if (nums[mid] < target && target <= nums[r]) l = mid + 1;
            else r = mid - 1;
        }
    }
    return false;
}
};