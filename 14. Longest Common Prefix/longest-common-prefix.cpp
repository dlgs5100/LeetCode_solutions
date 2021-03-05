class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        int longestIndex = 0;
        string result = strs[0];
        for(string s : strs){
            for(int i=0; i<result.size(); i++){
                if(i >= s.size() || result[i] != s[i]){
                    result.resize(i);
                    break;
                }
            }
        }
        return result;
    }
};
