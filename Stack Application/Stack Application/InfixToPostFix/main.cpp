#include <iostream>
using namespace std;
#include "mySTL/stack.h"
#include <string>

int precedence(char op){
    if (op == '+' || op == '-'){
       return 1;
    }
    if(op == '*' || op == '/' || op == '%'){
       return 2;
    }
    return 0;
}


string infixToPostfix(const string& infix) {
    Stack<char> stack;
    string postfix;

    for (char ch : infix){

        if(isalnum(ch)) {
            postfix = postfix + ch;
        }

        else if (ch == '('){
            stack.push(ch);
        }
        else if (ch == ')'){
            while (!stack.isEmpty() && stack.top() != '(') {
                postfix = postfix + stack.top();
                stack.pop();
            }
            stack.pop();
        }

else {
        while(!stack.isEmpty() && precedence(stack.top()) >= precedence(ch)){
                postfix = postfix + stack.top();
                stack.pop();
            }
            stack.push(ch);
        }
    }
    while(!stack.isEmpty()){
        postfix =postfix + stack.top();
        stack.pop();
    }
    return postfix;
}

int main(){
    string infix = "2*3/(2-1)+5*3";
    string postfix = infixToPostfix(infix);
    cout << "Infix conversion: " << infix << endl;
    cout << "Postfix conversion: " << postfix << endl;
    return 0;
}

