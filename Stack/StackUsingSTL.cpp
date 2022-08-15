#include<iostream>
#include<stack>
using namespace std;
//Stack Follows LIFO System (Last - In - First - Out)

// Using Stack STL
int main(){
    stack <int> s;
    s.push(5);
    s.push(3);
    cout<<"Printing top element "<<s.top()<<endl;
    s.pop();
    cout<<"Printing top element "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is Not Empty"<<endl;
    }
    cout<<"Size of the stack is "<<s.size()<<endl;
    return 0;
}