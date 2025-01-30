#include<stdio.h>
void countfrequencies(int arr[],int n){
    if(n==0){
        return ;
    }
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            printf("%d element is found %d times\n",arr[i-1],count);
            count =1;
        }
    }
    printf("%d appears %d times\n", arr[n - 1], count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    countfrequencies(arr,n);
    return 0;
}
