//     1
//    121
//   12321
//  1234321
// 123454321
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int k=1;
        for(int j=0;j<2*i+1;j++){
            if(j<i){
                printf("%d",k++);
            }
            else{
                printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}