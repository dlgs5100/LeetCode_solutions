class Solution {
public:
    bool isAnagram(string s, string t) {
        int len_s = s.size(), len_t = t.size();
        if(len_s != len_t)
            return false;
        set<char> set_char;
        for(char c : s)
            set_char.insert(c);
        for(set<char>::iterator it=set_char.begin(); it!=set_char.end(); it++){
            if(count(s.begin(), s.end(), *it) != count(t.begin(), t.end(), *it))
                return false;
        }
        return true;
    }
};
