#include<stdio.h>
#include<math.h>
int main(){
    int n,flag =0;
    scanf("%d",&n);
    if(n<=1){
        flag =1;
    }
    else if(n==2){
        flag =0;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n% i==0){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0) printf("prime number");
    else printf("not a prime number");
    return 0;
}