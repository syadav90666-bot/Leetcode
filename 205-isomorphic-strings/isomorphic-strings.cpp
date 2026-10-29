class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1,m2;
        for (int i = 0; i < s.size(); i++) {
        char a = s[i];
        char b = t[i];
        if(m1.find(a)!=m1.end()&& m1[a]!=b || m2.find(b)!=m2.end()&& m2[b]!=a)
            return false;
        m1[a]=b;
        m2[b]=a;
        }
        
        return true;
    }
};