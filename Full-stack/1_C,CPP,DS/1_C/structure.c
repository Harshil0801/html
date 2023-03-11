#include<stdio.h>
#include<string.h>
struct Student
{
    int Roll;
    char Name[10];
    int m1,m2,m3,total;
    float per;
};
int main()
{
    int i;
    struct Student st[5];
    printf("Enter record ofstudents");
    for(i=0;i<2;i++)
    {
        printf("\n Enter Roll No. : ");
        scanf("%d",&st[i].Roll);
        printf("\n Enter Name : ");
        scanf("%s",&st[i].Name);
        printf("\n Enter m1 : ");
        scanf("%d",&st[i].m1);
        printf("\n Enter m2 : ");
        scanf("%d",&st[i].m2);
        printf("\n Enter m3 : ");
        scanf("%d",&st[i].m3);
    }
    printf("\n Information of Result");
    for(i=0;i<2;i++)
    {
        st[i].total=st[i].m1+st[i].m2+st[i].m3;
        st[i].per=st[i].total/3;
        printf("\n Roll : %d \n Name : %s",st[i].Roll,st[i].Name);
        printf("\n Total : %d \n Per : %f",st[i].total,st[i].per);
    }
    return 0;
}