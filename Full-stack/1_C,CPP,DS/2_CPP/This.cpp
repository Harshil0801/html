// -> refere to currrnt object :

#include<iostream>
using namespace std;
class This
{
    int a,b;
    
    public :
    void set_ab(int, int);
    void get_ab();
};
void This::set_ab(int a, int b)
{
    this->a = a;
    this->b = b;
} 
void This::get_ab()
{
    cout<<"\n a : "<<a;
    cout<<"\n b : "<<b;
}
int main()
{
    This T1,T2;
    T1.set_ab(10,20);
    T2.set_ab(100,200);
    T1.get_ab();
    cout<<"\n ========";
    T2.get_ab();
}