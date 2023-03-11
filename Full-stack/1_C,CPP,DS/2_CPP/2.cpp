// get-set : 
#include<iostream>
using namespace std;
class Square
{
    int n;
    public : 
    void set(int value) // Setter
    {
        n = value;
    }
    int get() // getter
    {
        return n;
    }
    int doSquare()
    {
        return n*n;
    }

};
int main()
{
    Square obj1;
    obj1.set(10);
    cout << obj1.get();
    cout << "\n Square : " << obj1.doSquare();
}
