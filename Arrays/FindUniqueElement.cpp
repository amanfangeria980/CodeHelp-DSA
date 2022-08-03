// Problem Link: https://bit.ly/3y01Zdu (CodeStudio)

// O(N^2) Brute Force Approach

/*
int findUnique(int *arr, int size)
{
        for(int i=0;i<size;i++){
            int c=0;
            for(int j=0;j<size;j++){
                if(arr[j]==arr[i]){
                    c++;
                }
            }
            if(c==1){
                return arr[i];
            }
        }
    return -1;
}
*/

//O(n) - XOR Approach (Effective)  
//if two operands are same it returns 0 and if they are same they return 1
// int findUnique(int *arr, int size)
// {
//     int res;
//     for(int i=0;i<size;i++){
//         res^=arr[i];
//     }
//     return res;
// }
