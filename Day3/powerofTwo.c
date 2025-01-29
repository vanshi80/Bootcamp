#include<stdio.h>
int powerOfTwo(int n){
    if(n==0){
        return 1;
    }
    return 2* powerOfTwo(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("%d is the power of 2 raised to %d",1/(powerOfTwo(n)),n);

    }else{
        printf("%d is the power of 2 raised to %d",powerOfTwo(n),n);
    }
    return 0;
}