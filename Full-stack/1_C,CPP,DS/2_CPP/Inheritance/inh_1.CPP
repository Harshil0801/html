                            // CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE :

                            // 1.Singal :

#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n Constructor A. ";
    }
    ~A()
    {
        cout<<"\n Destructor A. ";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"\n Constructor B. ";
    }
    ~B()
    {
        cout<<"\n Destructor B. ";
    }
};
int main()
{
    B objB1;
}


                                



                                

                                