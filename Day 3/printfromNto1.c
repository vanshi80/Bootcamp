#include<stdio.h>
void printNumber(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    printNumber(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printNumber(n);
    return 0;
}