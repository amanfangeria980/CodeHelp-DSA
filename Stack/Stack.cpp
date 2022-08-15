#include<iostream>
using namespace std;

class Stack{
    //Properties or Data Members
    public:
    int *arr;
    int top;
    int size;
    //Constructor
    Stack(int size){
        this->size;
        this->arr=new int(size);
        this->top=-1;
    }
    //Push Operation
    void push(int element){
        if((size-top)>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack OverFlow";
        }
    }
    //Pop Operation
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(1);
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.push(2);
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.push(3);
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.push(4);
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.push(5);
    cout<<"Element at the top is now "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is Not Empty"<<endl;
    }

    st.pop();
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.pop();
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.pop();
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.pop();
    cout<<"Element at the top is now "<<st.peek()<<endl;
    st.pop();
    cout<<"Element at the top is now "<<st.peek()<<endl;
    return 0;
}