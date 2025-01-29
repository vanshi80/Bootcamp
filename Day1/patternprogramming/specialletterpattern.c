// ABCDEFEDCBA
// ABCDE EDCBA
// ABCD   DCBA
// ABC     CBA
// AB       BA
// A         A
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a = 64;
        for(int j=0;j<n-i;j++){
            printf("%c",++a);
        }
        for(int j=0;j<2*i-1;j++){
            printf(" ");
        }
        int cond;
        if(i==0) {
            cond = n-i-1;
            --a;
        }
        else {
            cond = n-i;
        }
        for(int j=0;j<cond;j++){
            printf("%c",a--);
        }
        printf("\n");
    }
    return 0;
}