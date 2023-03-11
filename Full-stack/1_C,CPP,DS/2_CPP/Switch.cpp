#include<iostream>
using namespace std;
int main()
{
    int ch;
    int a=10, b=5;
    cout<<"\n If you want sum press 1..";
    cout<<"\n If you want sub press 2..";
    cout<<"\n If you want mul press 3..";
    cout<<"\n If you want div press 4..";
    cout<<"\n If you want Exit press 5..";

    int i=0;
    while(i<3)
    {
    cout<<"\n Enter Your choice...";
    cin>>ch;

    switch(ch)
    {
        case 1:
        cout<<"\n sum : "<< a + b;
        break;

        case 2:
        cout<<"\n sub : "<< a - b;
        break;

        case 3:
        cout<<"\n mul : "<< a * b;
        break;

        case 4:
        cout<<"\n div : "<< a / b;
        break;    
    }
    i++;
    }
    
}
    
