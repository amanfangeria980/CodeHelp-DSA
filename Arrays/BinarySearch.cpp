#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;   //Wrong Approach 
    int mid = start + (end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){  //move to right size
            start=mid+1;
        }
        else{   //move to left side
            end=mid-1;
        }
        // mid=(start+end)/2; //updating mid value
        mid = start + (end-start)/2;


    }
    return -1;
}

int main(){
    int arr[7]={-1,1,3,7,11,17,45};
    int s=sizeof(arr)/sizeof(int);
    int key=17;
    int index=BinarySearch(arr,s,key);
    if(index==-1){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found at Index "<<index<<" :) "<<endl;
    }

    return 0;
}