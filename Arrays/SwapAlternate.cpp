#include<iostream>
using namespace std;

// void SwapAlternate(int arr[],int size){
//     if(size%2==0){
//         for(int i=0;i<size;i+=2){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     else{
//         for(int i=0;i<size-1;i+=2){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }


// or

void SwapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SwapAlternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}