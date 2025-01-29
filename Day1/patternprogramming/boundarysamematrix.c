// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int size = 2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int min = i; //top
            if(j<min){
                min = j;  //left
            }
            if(min>size-i-1){
                min =size-i-1;  //bottom
            }
            if(min>size-j-1){
                min = size-j-1; //right
            }
            printf("%d",n-min);
        }
        printf("\n");
    }
    return 0;
}
