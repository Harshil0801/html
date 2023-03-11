                                        // CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE :
                                        
                                        // 4. Hybrid :

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
class C 
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
class D:public B, public C
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
    D objD1;
}
