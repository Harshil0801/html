// Example :

#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public :
    int l;
    void len()
    {
        cout << " Length : ";
        cin >> l;
    }
};
class C
{
    int h;
    void height()
    {
        cout << " Height : ";
        cin >> h;
    }
};
class B:public A
{
    int b,c;
    void l_into_b()
    {
        len();
        cout << " Breadth : ";
        cin >> b;
        c = b*l;
    }
};
class D:public B,public C
{
    public:
    int res;
    void result()
    {
        l_into_b();
        height();
        res = h*c;
        cout << "\n";
        cout << endl
             << " Reselt l*b*h : " << res;
    }
};
int main()
{
    D obj;
    obj.result();
}
