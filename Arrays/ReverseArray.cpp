#include<iostream>
using namespace std;

int ReverseArr(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int PrintArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arrEven[6]={1,8,94,5,45,-1};
    int arrOdd[5]={1,8,94,5,45};
    int sE=sizeof(arrEven)/sizeof(int);
    int sO=sizeof(arrOdd)/sizeof(int);
    cout<<"Array Before Reversing: "<<endl;
    PrintArr(arrEven,sE);
    PrintArr(arrOdd,sO);
    ReverseArr(arrEven,sE);
    ReverseArr(arrOdd,sO);
    cout<<"Array After Reversing: "<<endl;
    PrintArr(arrEven,sE);
    PrintArr(arrOdd,sO);
    return 0;
}