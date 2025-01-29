#include<stdio.h>
int binarySearch(int arr[],int low,int high,int search){
    if(low>high)
    return -1;
    int mid = (low+high)/2;
    if(arr[mid]==search) return mid;
    else if(arr[mid]<search) return binarySearch(arr,mid+1,high,search);
    else if(arr[mid]>search) return binarySearch(arr,low,mid-1,search);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int search;
    printf("Enter the element to search");
    scanf("%d",&search);
    int result = binarySearch(arr,0,n-1,search);
    if(result!=-1)printf("The element is found at %d position",result+1);
    else{
        printf("The element is not found in array");
    }
    return 0;
}