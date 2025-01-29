#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        if(i<n){
            for(int j=0;j<n-i-1;j++){
                printf(" ");
            }
            for(int j=0;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            for(int j=0;j<i-n+1;j++){
                printf(" ");
            }
            for(int k=1;k<2*n-i;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}