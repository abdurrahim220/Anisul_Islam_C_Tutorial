#include<stdio.h>
int main()
{
    int num = 10;
    int num2 = 20;
    printf("Number ares %d, %d\n",num,num2);
    //printf("Number2 is %d\n",num2);
    
    float num3 = 10.4;
    double num4 =13.324;
    char ch = 'a';

    printf("num3 = %f\n",num3);
    printf("num4 = %lf\n",num4);
    printf("Ch = %c",ch);

    int in;
    printf("Input Number = ");
    scanf("%d",&in);
    printf("You have pressed = %d",in);

    return 0;
}