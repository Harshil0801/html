/*#include <stdio.h>
int main()
{
    char str[50];
    int i=0;

    printf("\n First string : ");
    gets(str); 
    for(i=0;str[i]!='\0';i++)
    {
    printf("%c",str[i]-32);
    }
}*/


#include <stdio.h>
int main()
{
    char str[50];
    int i=0;

    printf("\n First string : ");
    gets(str); 
    for(i=0;str[i]!='\0';i++)
    {
    printf("%c",str[i]+32);
    }
}
