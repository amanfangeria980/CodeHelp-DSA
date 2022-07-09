#include<iostream>
using namespace std;

int Min(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}

int main(){
    int arr[5]={1,-1,94,5,45};
    int s=sizeof(arr)/sizeof(int);
    int res=Min(arr,s);
    cout<<"Minimum : "<<res<<endl;

    return 0;
}