#include<stdio.h>
int main()
{
  char lower,upper;
  //printf("Enter any lowercase letter : ");

  //scanf("%c",&lower);

  printf("Enter any Uppercase Letter : ");

  scanf("%c",&upper);

  lower = tolower(upper);

  //upper = toupper(lower);  

  //printf("Uppercase letter = %c",upper);

  printf("Lowercase Letter : %c",lower);

  return 0;
}