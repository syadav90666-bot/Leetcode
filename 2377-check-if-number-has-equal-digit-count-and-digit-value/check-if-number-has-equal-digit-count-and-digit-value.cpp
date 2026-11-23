class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> frq;
        for(int i=0;i<num.size();i++){
            frq[num[i]-'0']++;

        }
        for(int i=0;i<num.size();i++){
            if(frq[i]!=num[i]-'0')
                return false;
        }
        return true;
    }
};