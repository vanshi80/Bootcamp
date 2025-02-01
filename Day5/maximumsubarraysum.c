#include<stdio.h>
// Kadane's algorithm
int maxSubArraySum(int arr[],int n){
    int maxSum = -2147483648;  //to pass all the tests on gfg we required this much smaller value of maxSum
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum>maxSum){
            maxSum = currSum; 
        }
        if(currSum<0){
            currSum = 0;
        }
   }
   return maxSum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum subarray sum is %d",maxSubArraySum(arr,n));
    return 0;
}