#include<iostream>
using namespace std;
class Bank
{   
    int Ac_balance,value,value1;

    public :
    static int stcount;
    Bank()
    {
        Ac_balance = 0;
    }
    Bank (int n)
    {
        Ac_balance = n;
        stcount += n;
    }
    void deposit(float value)
    {
        stcount += value;
    }
    void withdrawal(float value1)
    {
        stcount -= value1;
    }
    void S_balance()
    {
        cout << "\n Bank Balance : " << stcount;  
        cout << "\n Account Balance : " << Ac_balance;
    }
    void getdata()
    {
        cout << "\n Deposit Amount : " << value;
        cout << "\n Withdrawal Amount : " << value1;
    }
    void D_time(int x)
    {
        x=value;
    }
};
int Bank :: stcount;
int main()
{
    Bank P1(2500);
    P1.deposit(3000);
    P1.withdrawal(1000);
    P1.S_balance();
    P1.getdata();
    //P1.D_time();
}