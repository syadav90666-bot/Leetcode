class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int n=s.size();
            if(s.size()%2==0){
                int sum1=0,sum2=0;
                for(int j=0;j<n/2;j++){
                    sum1+=s[j]-'0';
                }
                for(int j=n/2;j<n;j++){
                    sum2+=s[j]-'0';
                }
            if(sum1==sum2)
                count++;
            sum1=0,sum2=0;
            }
        }
        return count;
    }
};