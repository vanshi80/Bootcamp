// 123454321
//  1234321
//   12321
//    121
//     1
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        int k=1;
        for(int j=0;j<2*n-2*i-1;j++){
            if(j<n-i-1){
                printf("%d",k++);
            }else 
            {
            printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}