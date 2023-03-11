#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   printf("\n");
   printf("Enter a string : ");
   gets(str);
   strrev(str);
   printf("Reverse string : %s\n", str);
}
