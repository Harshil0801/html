                                        // CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE :
                                        
                                        // 3. Multilevel :

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
class C:public B
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
int main()
{
    C objC1;
}
