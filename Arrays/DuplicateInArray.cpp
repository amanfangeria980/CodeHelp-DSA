// Problem Link: https://bit.ly/3dm6bdZ

/* int findDuplicate(vector<int> &arr) 
{
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return(sum-(n*(n-1)/2));
	
} */

// Logic applied here is sum of array elements-sum of natural nos.

/* 
int findDuplicate(vector<int> &arr) 
{
    int res=0;
    for(int i=0;i<arr.size();i++){
        res=(res^arr[i]^i);
    }
    return res;
}
*/

//In this solution the logic is,

/* Reason for xor with “i”:-

 

      for first loop:-     for(int i=0;i<arr.size();i++)

                             ans =ans^arr[I];

      “ans” will contain all the elements except for the duplicate           because that cancelled out

 

     for second loop:-    for(int i=1;i<arr.size();i++)

                        ans =ans^i;

    as “ans” from first case contains 1 to (n-1) except one integer in this range  by doing xor of this “ans” with 1 to (n-1) will cancel out all the integers in “ans” but one that was missing in this range will remain and that is  our answer for this problem */