#include<stdio.h>
int countdigits(int n){
    if(n==0){
        return n;
    }
    return 1+ countdigits(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("Digits count is %d\n",countdigits(n));
    return 0;
}