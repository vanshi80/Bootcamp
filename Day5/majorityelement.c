#include<stdio.h>
// Boyre Moore Voting Algorithm
int findmajority(int arr[],int n){
    int count = 1,majority_indx = 0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[majority_indx]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            count = 1;
            majority_indx = i;
        }
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(arr[majority_indx]==arr[i]){
            count++;
        }
    }
    if(count>n/2){
        return arr[majority_indx];
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(findmajority(arr,n)==-1){
        printf("No majority element is found\n");
    }
    else{
        printf("The majority element is %d\n",findmajority(arr,n));
    }
    return 0;
}