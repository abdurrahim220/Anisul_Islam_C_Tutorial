#include<stdio.h>
int main()
{
    // char lower;
    // printf("Enter any lowercase letter : ");
    // scanf("%c",&lower);//a=97

    // printf("Ther uppercase letter : %c\n",lower-32);



    char upper ;
    printf("\nEnter any uppercase letter : ");

    scanf("%c",&upper);

    printf("The lowercase : %c\n",upper+32);

    return 0;
}