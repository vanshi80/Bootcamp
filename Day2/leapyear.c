#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if((year%400==0) || ((year%100!=0) && (year%4==0))){
        printf("%d is a leap year",year);
    }
    else {
        printf("%d is not a leap year",year);
    }
    // we could do this through nested if else 
    // if(year%4==0){
    //     if(year%100==0){
    //         if(year%400==0){
    //             printf("leap year");
    //         }
    //         else{
    //             printf("not a leap year");
    //         }
    //     }else{
    //         printf("leap year");
    //     }
    // }
    // else{
    //     printf("Not leap year");
    // }
    // now through if else if ladder
    // if(year%400==0){
    //     printf("leap year");
    // }else if(year%100==0){
    //     printf("not a leap year");
    // }else if(year%4==0)
    // {
    //     printf("leap year");
    // }else{
    //     printf("not leap year");
    // }
    return 0;
}