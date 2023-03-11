                                        // CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE :
                                        
                                        // 5. Hierarchical

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
class C:public A
{
    public:
    C()
    {
        cout<<"\n Constructor C. ";
    }
    ~C()
    {
        cout<<"\n Destructor C. ";
    }
};
class D:public A
{
    public:
    D()
    {
        cout<<"\n Constructor D. ";
    }
    ~D()
    {
        cout<<"\n Destructor D. ";
    }
};
int main()
{
    B objB1;
    C objC1;
    D objD1;
}
