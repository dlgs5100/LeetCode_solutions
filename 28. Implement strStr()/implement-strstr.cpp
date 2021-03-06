class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
            return 0;
        for(int i=0; i<haystack.size(); i++){
            if(haystack.size()-i < needle.size())
                break;
            if(needle.compare(haystack.substr(i,needle.size()))== 0)
                return i;
        }
        return -1;
    }
};
