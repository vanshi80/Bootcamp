#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    ch = tolower(ch);
    if(ch >'a' && ch<'z'){
        if(ch == 'a'|| ch== 'e'|| ch=='i'|| ch=='o'|| ch=='u'){
            printf("The character is a vowel\n");
        }else{
            printf("The character is a consonant\n");
        }
    }else{
        printf("Not an alphabet.\n");
    }
    return 0;

}