class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        string s = "";
        for(int i=1; i<=n; i++){
            if(i % 3 == 0)
                s.append("Fizz");
            if(i % 5 == 0)
                s.append("Buzz");
            if(i % 3 != 0 && i % 5 != 0)
                s.append(to_string(i));
            result.push_back(s);
            s = "";
        }
        return result;
    }
};
