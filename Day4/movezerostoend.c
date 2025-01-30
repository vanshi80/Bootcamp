#include<stdio.h>
void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
void moveZerosToEnd(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(&arr[i],&arr[count]);
            count++;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    moveZerosToEnd(arr,n);
    // zeros moved to end
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}