#include<stdio.h>
int main(){
    int value;
    int ch;

    printf("Press: 1 for converting kg to g\n 2. for converting g to kg\n 3. for converting m to cm\n 4. for converting cm to m\n 5. for converting km to m\n 6. for converting m to km.");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Enter the value in kilograms");
                scanf("%d",&value);
                printf("The converted value is %d",value*1000);
                break;
        case 2: printf("Enter the value in grams");
                scanf("%d",&value);
                printf("The converted value is %f",(float)value/1000);
                break;
        case 3: printf("Enter the value in metres");
                scanf("%d",&value);
                printf("The converted value is %d",value*100);
                break;
        case 4: printf("Enter the value in centimetres");
                scanf("%d",&value);
                printf("The converted value is %f",(float)value/100);
                break;
        case 5: printf("Enter the value in kilometres");
                scanf("%d",&value);
                printf("The converted value is %d",value*1000);
                break;
        case 6: printf("Enter the value in metres");
                scanf("%d",&value);
                printf("The converted value is %f",(float)value/1000);
                break;
        default:printf("Make a valid choice");
    }
    return 0;
}