#include<stdio.h.>
int main()
{
	int r[5]={1,2,3,4,5}, m[5]={49,36,46,45,41},p[5]={23,36,39,46,45,},c[5]={36,23,26,46,49},total[5];
	char grd[5];
	float pr[5];
		printf("______________________________________________________________________________\n");
		printf("\t\t\t\tMarksheet\n");
		printf("______________________________________________________________________________\n");
	for(int i=0;i<5;i++)
	{
	total[i]=m[i]+p[i]+c[i];
	pr[i]=total[i]*0.66;
		
		if(pr[i]<=100 && pr[i]>=90)
		grd[i]='A';

		if(pr[i]<90 && pr[i]>=70)
		grd[i]='B';

		if(pr[i]<70 && pr[i]>=50)
		grd[i]='C';

		if(pr[i]<50 && pr[i]>=33)
		grd[i]='D';

		if(pr[i]<33)
		grd[i]='F';
	}
	
	printf("Roll no. \tMaths \tPhysics \tChemistry \ttotal \tpr \tgrd ");
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d  \t\t%d \t%d \t\t%d \t%d \t%f \t%c   ",r[i],m[i],p[i],c[i],total[i],pr[i],grd[i]);
	}
	
	printf("\n______________________________________________________________________________\n");


}