class Solution {
public:
    int minimumPushes(string word) {
        vector<int> mp(26,0);
        for(char &ch:word){
            mp[ch-'a']++;
        }
        int ans=0;
        sort(mp.begin(),mp.end(),greater<int>());
        for(int i=0;i<26;i++){
            int frq =mp[i];
            int press = i/8+1;
            ans += frq*press;
        }
        return ans;
    }
};