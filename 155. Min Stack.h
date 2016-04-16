#ifndef 155__MIN_STACK_H_INCLUDED
#define 155__MIN_STACK_H_INCLUDED

class MinStack {
public:
    stack<int>minStack;
    stack<int>minNode;

    void push(int x) {
        minStack.push(x);
        if(minNode.empty()||x<=minNode.top())
            minNode.push(x);
    }

    void pop() {
        if(minStack.top()==minNode.top())
           minNode.pop();
        minStack.pop();
    }

    int top() {
        return minStack.top();
    }

    int getMin() {
        return minNode.top();
    }
};

#endif // 155__MIN_STACK_H_INCLUDED
