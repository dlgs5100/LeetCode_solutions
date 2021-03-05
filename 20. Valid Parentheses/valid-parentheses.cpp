class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> map{{')','('},{']','['},{'}','{'}};
        stack<char> stack_p;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{')
                stack_p.push(c);
            else{
                if(stack_p.size() == 0 || stack_p.top() != map[c])
                    return false;
                else
                    stack_p.pop();
            }
        }
        return stack_p.empty() ? true : false;
    }
};
