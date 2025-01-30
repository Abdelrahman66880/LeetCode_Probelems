class MinStack {
public:
    //intialize two staks
    stack<int> mainStack;
    stack<int> minStack;
    MinStack() {
    }
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty() || val <= minStack.top())
        {
            minStack.push(val);
        }
    }
    
    void pop() {
        if(mainStack.empty())
        {
            throw runtime_error(\Stack Is empty\);
        }
            if(mainStack.top() == minStack.top())
            {
                minStack.pop();
            }
            mainStack.pop();
    }
    
    int top() {
        if(mainStack.empty())
        {
            throw runtime_error(\Stack Is empty\);
        }
        int top_element;

        top_element = mainStack.top();

        return top_element;
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */