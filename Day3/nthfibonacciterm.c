#include<stdio.h>
int fib(int n){
    if(n==0||n==1) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The %d term of fibonacci series is:%d ",n,fib(n));
    return 0;
}