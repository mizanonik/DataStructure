#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int myStack[100], n=100, top=-1;

void pop() {
   if(top<=-1)
        cout<<"Stack Underflow"<<endl;
   else {
        myStack[top] = 0;
        top--;
   }
}


void push(int val) {
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else {
      top++;
      myStack[top]=val;
   }
}

void push(char val) {
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else {
    if(val=='+'){
        int newVal = myStack[top - 1]+myStack[top];
        pop();
        pop();
        top++;
        myStack[top]=newVal;
    }
    else if(val=='-'){
        int newVal = myStack[top -1]-myStack[top];
        pop();
        pop();
        top++;
        myStack[top]=newVal;
    }
    else if(val=='*'){
        int newVal = myStack[top - 1]*myStack[top];
        pop();
        pop();
        top++;
        myStack[top]=newVal;
    }
    else if(val=='/'){
        int newVal = myStack[top -1]/myStack[top];
        pop();
        pop();
        top++;
        myStack[top]=newVal;
    }
    else if(val=='^'){
        int newVal = pow(myStack[top -1], myStack[top]);
        pop();
        pop();
        top++;
        myStack[top]=newVal;
    }
   }
}

int main() {
    char ch;
    int val;

    char exp[] = "35+64-*41-2^+";
    for (int i = 0; i<sizeof(exp); i++){
        if(isdigit(exp[i])){
            val = exp[i] - '0';
            push(val);
        }
        else{
            ch = exp[i];
            push(ch);
        }
    }

    cout << myStack[top];

    return 0;

}

