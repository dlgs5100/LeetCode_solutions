class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(vector<int>::reverse_iterator it=digits.rbegin(); it!=digits.rend(); it++){
            *it += carry;
            carry = *it/10;
            *it %= 10;
        }
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
    }
};
