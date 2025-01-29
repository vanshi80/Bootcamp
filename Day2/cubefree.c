#include<stdio.h>
#include<math.h>
int isCubeFree(int n){
    for(int i=2;i<=cbrt(n);i++){
        if(n%(i*i*i)==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=cbrt(n);i++){
        int a3 = i*i*i;
        if(n%a3 == 0){
            int b = n/a3;
            if(isCubeFree(b)){
                printf("%d %d",i,b);
            }
        }
    }
    return 0;
}