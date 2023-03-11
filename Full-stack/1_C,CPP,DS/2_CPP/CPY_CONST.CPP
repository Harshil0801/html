// COPY CONSTRUCTOR :

#include<iostream>
using namespace std;
class Shirt
{
    string myShirt;

    public:
    Shirt(){}
    Shirt(string Shirt)
    {
        myShirt = Shirt;
    }
    Shirt(const Shirt& sh)
    {
        myShirt = sh.myShirt;
    }
    void whichshirt()
    {
        cout<<"\n My Shirt is "<<myShirt;
    }
};
int main()
{
    Shirt hr("ZARA"),dk(hr);
    hr.whichshirt();
    dk.whichshirt();
}