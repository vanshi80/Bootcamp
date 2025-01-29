#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    switch (tolower(ch))
    {
    case 'a':
        printf("its a vowel");
        break;
    case 'e':
        printf("its a vowel");
        break;
    case 'i':
        printf("its a vowel");
        break;
    case 'o':
        printf("its a vowel");
        break;
    case 'u':
        printf("its a vowel");
        break;
    default:
        if (ch > 'a' && ch < 'z')
        {
            printf("its a consonant");
        }
        else
        {
            printf("Enter some alphabet");
        }
    }
    return 0;
}