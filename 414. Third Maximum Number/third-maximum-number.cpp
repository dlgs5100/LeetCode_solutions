class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN, secondMax = LLONG_MIN, thirdMax = LLONG_MIN;
        for (int n : nums) {
            if (n > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = n;
            }
            else if (n > secondMax && n < firstMax) {
                thirdMax = secondMax;
                secondMax = n;
            }
            else if (n > thirdMax && n < secondMax)
                thirdMax = n;
        }
        return thirdMax == LLONG_MIN ? firstMax : thirdMax;
    }
};
