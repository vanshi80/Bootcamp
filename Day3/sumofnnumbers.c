#include<stdio.h>
int sumofnumbers(int n){
    if(n<=0){
        return 0;
    }
    return n+sumofnumbers(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The sum of n natural numbers is %d\n",sumofnumbers(n));
    return 0;
}