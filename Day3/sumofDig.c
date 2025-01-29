#include<stdio.h>
int sumOfDig(int n){
    if(n==0){
        return n;
    }
    return (n%10)+sumOfDig(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The sum of digits is :%d\n",sumOfDig(n));
    return 0;
}