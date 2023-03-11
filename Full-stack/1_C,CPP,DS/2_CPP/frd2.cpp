#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

    public:
    loc()
    {
    }
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    friend loc operator+(loc, loc);
    friend loc operator-(loc, loc);
    friend loc operator*(loc, loc);
    friend loc operator/(loc, loc);
    friend loc operator++(loc);
    friend loc operator--(loc);
};
    
loc operator+(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + op1.longitude;
    temp.latitude = op2.latitude + op1.latitude;
    return temp;
}
loc operator-(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op1.longitude - op2.longitude;
    temp.latitude = op1.latitude - op2.latitude;
    return temp;
}
loc operator*(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op2.longitude * op1.longitude;
    temp.latitude = op2.latitude * op1.latitude;
    return temp;
}
loc operator/(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op1.longitude / op2.longitude;
    temp.latitude = op1.latitude / op2.latitude;
    return temp;
}
loc operator++(loc op1)
{
    loc temp;
    temp.longitude = ++op1.longitude;
    temp.latitude = ++op1.latitude;
    return temp;
}
loc operator--(loc op1)
{
    loc temp;
    temp.longitude = --op1.longitude;
    temp.latitude = --op1.latitude;
    return temp;
}

int main()
{
    loc ob1(10, 20), ob2(5, 10),ob3,ob4,ob5,ob6,ob7,ob8;
    ob1.show();
    ob2.show();

    cout << "======================";

    cout << "\nSum : ";
    ob3 = ob1 + ob2;
    ob3.show();

    cout << "Sub : ";
    ob4 = ob1 - ob2;
    ob4.show();

    cout << "Mul : ";
    ob5 = ob1 * ob2;
    ob5.show();

    cout << "Div : ";
    ob6 = ob1 / ob2;
    ob6.show();

    cout << "======================";

    cout << "\nincrement : ";
    ob7 = ++ob1;
    ob7.show();

    cout << "\ndecrement : ";
    ob8 = --ob1;
    ob8.show();


}
