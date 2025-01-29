// 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int a = 65;
        for(int j=0;j<2*i+1;j++){
            if(j<i){
                printf("%c",a++);
            }else printf("%c",a--);
        }
        printf("\n");
    }
    return 0;
}