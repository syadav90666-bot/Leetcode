class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        int ans =2*arr[k];
        while( i<=j){
            int mid = i+(j-i)/2;
            
            if(arr[mid]==ans && mid !=k)
                return true;
            else if(arr[mid]<ans) 
                i=mid+1;
            else j=mid-1;
        }
        }
        return false;
    }
};