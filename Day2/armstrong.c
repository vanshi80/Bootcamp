#include<stdio.h>
#include<math.h>
int main(){
    int n,newn,countdig = 0,sum=0;
    scanf("%d",&n);
    newn = n;
    while(newn!=0){
        newn/=10;
        countdig++;
    }
    printf("%d",countdig);
    newn = n;
    printf("\n%d",newn);
    while(newn!=0){
        int rem = newn%10;
        sum += pow(rem,countdig);
        printf("\n%d",sum);
        newn/=10;
    }
    printf("\n%d",sum);
    if(sum == n){
        printf("The number is Armstrong number");
    }else{
        printf("Not an armstrong number");
    }
    return 0;
}