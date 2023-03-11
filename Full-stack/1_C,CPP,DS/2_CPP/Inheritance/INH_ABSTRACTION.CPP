//Inh_Abstraction : 

#include<iostream>
using namespace std;
class Shape 
{
    protected :
    float Width;
    float Height;

    public :
    virtual float getArea()=0;
    void setWidth(int w)
    {
        Width = w;
    }
    void setHeight(int h)
    {
        Height = h;
    }
};
class Rectangle:public Shape
{O
    public :
    float getArea()
    {
        return (Width*Height);
    }
};
class Triangle:public Shape
{
    public :
    float getArea()
    {
        return ((Width*Height)/2);
    }
};
int main()
{
    Rectangle R;
    Triangle T;

    R.setWidth(5);
    R.setHeight(7);
    cout << " Total Area of Rectangle : " << R.getArea() << endl;

    T.setWidth(5);
    T.setHeight(7);
    cout << " Total Area of Triangle : " << T.getArea() << endl;
}
