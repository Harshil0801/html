/*
3. Define a class TEST in C++ with following description:

Private Members
TestCode                of type integer
Description             of type string
NoCandidate             of type integer
CenterReqd              (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)

Public Members:
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres.
- A function DISPTEST() to allow user to view the content of all the data members
*/


#include<iostream>
using namespace std;
class Test
{
    int testcode, nocan, n;
    char des[100];

    public :
    void schedule()
    {
    cout<<"Enter test Code : ";
    cin>>testcode;
    cout<<"Enter description : ";
    cin>>des;
    cout<<"Enter Number Candidate : ";
    cin>>nocan;
    cout<<"=================================";
    } 

    int cal()
    {
        if(nocan%100==0)
        {
            n = nocan/100;
        }
        else
        {
            n = nocan/100+1;
        }
    }

    void disptest()
    {
    cout<<"\n Test code is \t\t"<<testcode;
    cout<<"\n Description is \t"<<des;
    cout<<"\n Number of Candidate \t"<<nocan;
    cout<<"\n Number of Center \t"<<n;
    }
};
int main()
{
    Test T1;
    T1.schedule();
    T1.cal();
    T1.disptest();
}