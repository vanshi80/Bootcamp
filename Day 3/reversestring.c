#include<stdio.h>
#include<string.h>
void reverseString(char str[],int start,int end){
    if(start>end){
        return;
    }
        char temp = str[start];
        str[start]= str[end];
        str[end] = temp;
        reverseString(str,start+1,end-1);
}
int main(){
    char str[20];
    scanf("%s",str);
    int length = strlen(str);
    int start = 0;
    int end = length-1;
    reverseString(str,start,end);
    printf("Reverse string is %s\n",str);
    return 0;
}