                                            // Constructor Overloading :
/*
#include<iostream>
using namespace std;
class Bank
{
    int Acc_bal;
    public :
    Bank()
    {
        Acc_bal = 200;
    }
    Bank(int Open_bal)
    {
        Acc_bal = Open_bal;
    }
    void S_balance()
    {
        cout<<"\n Acc Balance : "<<Acc_bal;
    }
};
int main()
{
    Bank P1,P2(1000);
    P1.S_balance();
    P2.S_balance();
}
*/



                                            // Function Overloading :
/*
#include<iostream>
using namespace std;
class Bank
{
    int Acc_bal;
    public :
    void OpenAcc()
    {
        Acc_bal = 200;
    }
    void OpenAcc(int Open_bal)
    {
        Acc_bal = Open_bal;
    }
    void S_balance()
    {
        cout<<"\n Acc Balance : "<<Acc_bal;
    }
};
int main()
{
    Bank P1,P2;
    P1.OpenAcc();
    P2.OpenAcc(5000);

    P1.S_balance();
    P2.S_balance(5000)
}
*/



                                            // defination after declaration : 

#include<iostream>
using namespace std;
class functionover
{
    public :
    functionover();
    void sum(int,int);
    void sum(int,int,int);
    void sum(double,double);
};

functionover::functionover()
{
    cout << "\n defoult constructor \n";
}
void functionover::sum(int a, int b)
{
    cout << "\n Sum of Two value : " << a+b;
}
void functionover::sum(int a, int b, int c)
{
    cout << "\n Sum of Three value : " << a+b+c;
}
void functionover::sum(double a, double b)
{
    cout << "\n Sum of Two Double Value : " << a+b;
}

int main()
{
    functionover obj1;
    obj1.sum(12,32);
    obj1.sum(12,34,43);
    obj1.sum(3.2,3.6);
}