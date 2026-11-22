
#include<iostream>
using namespace std;

class stack {
    int arr[100];
    int topIndex = -1;

public:
    void push(int val) {
        arr[++topIndex] = val;
    }

    void pop() {
        topIndex--;
    }

    int top() {
        return arr[topIndex];
    }

    bool empty() {
        return topIndex == -1;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
};
