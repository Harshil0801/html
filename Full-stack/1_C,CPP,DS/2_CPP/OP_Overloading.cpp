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
    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator*(loc op2);
    loc operator/(loc op2);
};
// Overload + for loc.
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
loc loc::operator-(loc op2)
{
    loc temp;
    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;
    return temp;
}
loc loc::operator*(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude * longitude;
    temp.latitude = op2.latitude * latitude;
    return temp;
}
loc loc::operator/(loc op2)
{
    loc temp;
    temp.longitude = longitude / op2.longitude;
    temp.latitude = latitude / op2.latitude;
    return temp;
}
int main()
{
    loc ob1(10, 20), ob2(5, 10),ob3,ob4,ob5,ob6;
    ob1.show();
    ob2.show();

    cout << "======================";

    cout << "\nSum : ";
    ob3 = ob1 + ob2;
    ob3.show();

    cout << "\nSub : ";
    ob4 = ob1 - ob2;
    ob4.show();

    cout << "\nMul : ";
    ob5 = ob1 * ob2;
    ob5.show();

    cout << "\nDiv : ";
    ob6 = ob1 / ob2;
    ob6.show();


}
