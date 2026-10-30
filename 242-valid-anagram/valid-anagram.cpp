class Solution {
public:
    bool isAnagram(string s, string t) {
       /* sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        return false;*/
        if(s.size()!=t.size())
            return false;
        int frq[26]={};
        for(int i=0;i<s.size();i++){
            frq[s[i]-'a']++;
            frq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(frq[i]!=0)
                return false;
        }
        return true;
    }
};