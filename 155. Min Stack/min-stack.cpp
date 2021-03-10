class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    int getMin() {
        int min = INT_MAX;
        for(vector<int>::iterator it=stack.begin(); it!=stack.end(); it++)
            min = *it < min ? *it : min;
        return min;
    }
private:
    vector<int> stack;
};
​
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
