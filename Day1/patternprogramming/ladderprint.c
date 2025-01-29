// *
// **
// ***
//    *
//    **
//    ***
//       *
//       **
//       ***
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n*i;k++){
                printf(" ");
            }
            for(int k=0;k<j+1;k++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}