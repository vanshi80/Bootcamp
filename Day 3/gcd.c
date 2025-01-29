#include<stdio.h>
int gcd(int a,int b){
    if(a%b == 0){
        return b;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The gcd of %d and %d is %d\n",a,b,gcd(a,b));
    return 0;
}