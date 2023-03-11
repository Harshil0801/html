#include<iostream>
using namespace std;
/*
{
    if(y==0)
    {
        Throw " \n Attempted to divide by Zero!";
        cout << " \n Attempted to divide by Zero!";
    }
    return 0;
}
*/
int main()
{
    int i=25;
    int j=5;
    float k=0;

    cout << "Before side.\n";
    try
    {
        k=i/j;
        cout << k << endl;
    }
    catch(const char*e)
    {
        cerr << e << endl;
    }
    cout << "After side.";
    return 0;
}