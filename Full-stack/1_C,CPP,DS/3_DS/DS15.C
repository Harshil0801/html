                                // Link-List : 
                        // Self Referential Structure :
#include<stdio.h>
struct node
{
    int n;
    char c;
    struct node *ptr;
};
void printlist(struct node *head)
{
    struct node *temp=NULL;
    temp=head;
    printf("\n\n");
    while (temp!=NULL)
    {
        printf(" %d-%c --> ", temp->n, temp->n);
        temp=temp->ptr;
    }
    printf(" NULL");
}
int main()
{
    struct node var1;
    struct node var2;
    struct node var3;
    struct node var4;
    struct node var5;
    struct node var6;
    struct node var7;
    struct node var8;
    struct node var9;

    var1.n = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.n = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var3.n = 67;
    var3.c = 'C';
    var3.ptr = NULL;

    var4.n = 68;
    var4.c = 'D';
    var4.ptr = NULL;

    var5.n = 69;
    var5.c = 'E';
    var5.ptr = NULL;

    var6.n = 70;
    var6.c = 'F';
    var6.ptr = NULL;

    var7.n = 71;
    var7.c = 'G';
    var7.ptr = NULL;

    var8.n = 72;
    var8.c = 'H';
    var8.ptr = NULL;

    var9.n = 73;
    var9.c = 'I';
    var9.ptr = NULL;

    var1.ptr = &var2;
    var2.ptr = &var3;
    var3.ptr = &var4;
    var4.ptr = &var5;
    var5.ptr = &var6;
    var6.ptr = &var7;
    var7.ptr = &var8;
    var8.ptr = &var9;

    printf("\n NODE 1 -> %d %c", var1.n, var1.n);
    printf("\n NODE 2 -> %d %c", var2.n, var2.n);
    printf("\n NODE 3 -> %d %c", var3.n, var3.n);
    printf("\n NODE 4 -> %d %c", var4.n, var4.n);
    printf("\n NODE 5 -> %d %c", var5.n, var5.n);
    printf("\n NODE 6 -> %d %c", var6.n, var6.n);
    printf("\n NODE 7 -> %d %c", var7.n, var7.n);
    printf("\n NODE 8 -> %d %c", var8.n, var8.n);
    printf("\n NODE 9 -> %d %c", var9.n, var9.n);

    printlist(&var1);
}
