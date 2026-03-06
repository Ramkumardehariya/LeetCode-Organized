class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size() == 1 && s[0] == '1'){
            return true;
        }
        for(int i = 0; i<s.size()-1; i++){
            if(s[i] == '1' && s[i] == s[i+1]){
                return true;
            }
        }
        return false;
    }
};