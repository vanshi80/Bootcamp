// *****
//   ****
//     ***
//       **
//         *
//       **
//     ***
//   ****
// *****
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        if(i<n){
        for(int j=0;j<2*i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("*");
        }
        }else{
            for(int j=0;j<3*n-2*i+1;j++){
                printf(" ");
            }
            for(int k=0;k<i-n+2;k++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}