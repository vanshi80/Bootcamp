#include<stdio.h>
int maxconsecutiveones(int arr[],int n){
    int count = 0;
    int maxconscones = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>maxconscones){
                maxconscones = count;
            }
        }else{
            count = 0;
        }
    }
    return maxconscones;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum consecutive 1's in array %d\n",maxconsecutiveones(arr,n));
    return 0;
}