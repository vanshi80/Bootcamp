#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j==0||j==n-i-1||i==n-1||i==0)
                printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}