#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    ch = (int)ch;
    if(ch>= 97 && ch<= 122 ){
        printf("The letter is in lowercase");
    }else if(ch >= 65 && ch<=90 ){
        printf("the letter is an uppercase letter");
    }else if((ch >= 33 && ch <= 64) || (ch >= 91 && ch<= 96) || ch>= 123&& ch<=126){
        printf("the letter is a special symbol");
    }
    else{
        printf("Not a character");
    }
    return 0;
}