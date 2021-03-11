class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> table;
        while(1){
            int sum=0;
            while(n){
                sum += pow(n%10,2);
                n/=10;
            }
            if(sum == 1)
                return true;
            else if(table.find(sum) != table.end())
                return false;
            table.insert(sum);
            n=sum;
        }   
        return false;
    }
};
