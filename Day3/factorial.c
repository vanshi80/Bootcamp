#include<stdio.h>
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d is the factorial for %d\n",fact(n),n);
    return 0;
}