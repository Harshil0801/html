// Polymorphism :

#include<iostream>
using namespace std;
class Base
{
    public :
    virtual void display()
    {
        cout << " Base is invoked." << endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout << " Base is Derived." << endl;
    }
};
int main()
{
    Base *p,b;
    Derived d;
    p=&b;
    p->display();
    p=&d;
    p->display();
}