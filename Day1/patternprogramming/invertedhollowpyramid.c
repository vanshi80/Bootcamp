#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            if(k==0||i==n-1||k==n-i-1||i==0)
                printf("* ");
            else printf("  ");
        }

        printf("\n");
    }
    return 0;
}