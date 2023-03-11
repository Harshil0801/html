#include<iostream>
using namespace std;
class Result
{
    int rollno, sub1, sub2, sub3;
    float total, per, stotal;
    char Grd;
    
    public:
    Result(int n,int n1,int n2,int n3)
    {
        rollno=n;
        sub1=n1;
        sub2=n2;
        sub3=n3;
    }
    void cal()
    {
        total=sub1+sub2+sub3;
        stotal=total/150;
        per=stotal*100;
    }
    char setGrd()
    {
        if(per<=100.00 && per>=90.00)
            {Grd = 'A';}
        if(Grd<90.00 && per>=75.00)
            {Grd = 'B';}
        if(per<75.00 && per>=55.00)
            {Grd = 'D';}
        if(per<55.00 && per>=33.00)
            {Grd = 'E';}
        if(per<33.00 && per>=0.00)
            {Grd = 'F';}
            return Grd;
    }
    void printData()
    {
        cout<<" \n"<<rollno;
        cout<<" \t"<<sub1;
        cout<<" \t"<<sub2;
        cout<<" \t"<<sub3;
        cout<<" \t"<<total;
        cout<<" \t"<<per;
        cout<<" \t"<<setGrd();
    }
};
int main()
{
    Result first(1,45,47,41), sec(2,49,37,27);
    cout<<"\nRollno. sub1\tsub2\tsub3\ttotal\tper\t\tGrd";
    first.cal();
    first.printData();
    sec.cal();
    sec.printData();
}