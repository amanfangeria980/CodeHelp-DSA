#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[7]={1,3,7,11,17,45,-1};
    int s=sizeof(arr)/sizeof(int);
    int key=-1;
    int index=LinearSearch(arr,s,key);
    if(index==-1){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found at Index "<<index<<" :) "<<endl;
    }

    return 0;
}