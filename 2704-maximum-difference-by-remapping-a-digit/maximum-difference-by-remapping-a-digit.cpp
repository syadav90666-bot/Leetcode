class Solution {
public:
    int minMaxDifference(int num) {
         string s= to_string(num);
        string a=s;
        int idx = s.find_first_not_of('9');
        if(idx != string::npos){
            char ch = s[idx];
            replace(begin(s),end(s),ch,'9');
        }
        char ch= a[0];
        replace(begin(a),end(a),ch,'0');
        return stoi(s)-stoi(a);
    }
};