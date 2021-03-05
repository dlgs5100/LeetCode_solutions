class Solution {
public:
    int reverse(int x) {
        long long rev_x = 0;
        while(x != 0){
            rev_x = x % 10 + rev_x * 10;
            x /= 10;
        }
        return rev_x < INT_MIN || rev_x > INT_MAX ? 0 : rev_x;
    }
};
