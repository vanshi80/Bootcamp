#include<stdio.h>
int main(){
    int n,newn;
    scanf("%d",&n);
    newn = n;
    int new=0;
    while(newn>0){
        new = new*10+(newn%10);
        newn/=10;
    }
    if(new == n){
        printf("the number is palindrome");
    }else{
        printf("Not a palindrome");
    }
    return 0;
}