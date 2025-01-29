#include<stdio.h>
void printNumber(int n){
    if(n<=0) return;
    printNumber(n-1);
    printf("%d ",n);
}
int main(){
    int n;
    scanf("%d",&n);
    printNumber(n);
    return 0;
}