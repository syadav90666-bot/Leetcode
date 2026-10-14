class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char , int> a;
        unordered_map<char,int> b;
        for(auto i:s){
            if(i=='a'||i=='e' || i=='i' || i=='o' || i=='u')
                a[i]++;
            else
                b[i]++;
        }
        int maxa=0,maxb=0;
        for(auto it:a){
            maxa=max(maxa,it.second);}
        for(auto it:b){
            maxb=max(maxb,it.second);}
        return maxa+maxb;
    }
};