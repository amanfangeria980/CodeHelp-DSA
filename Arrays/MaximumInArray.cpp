#include<iostream>
using namespace std;

int Max(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}

int main(){
    int arr[5]={1,8,94,5,45};
    int s=sizeof(arr)/sizeof(int);
    int res=Max(arr,s);
    cout<<"Maximum : "<<res<<endl;

    return 0;
}