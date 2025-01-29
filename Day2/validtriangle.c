#include<stdio.h>
int main(){
    int a1,a2,a3;
    int s1,s2,s3;
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    if(a1+a2+a3 == 180){
        if((s1+s2>s3)||(s2+s3>s1)||(s1+s3>s1)){
            printf("Triangle is a valid triangle");
        }else{
            printf("Not a valid triangle");
        }
    }
    else{
        printf("not a valid triangle");
    }
    return 0;
}