                                                                //Bank System 

#include <iostream>
using namespace std;
class Bank 
{
private:
    int acno;
    char name[100];
    long balance;

public:
    void OpenAccount()
    {
        cout << "\t\t\t\t\t\t [ Welcome to Niyo Global Bank ]";
        cout << "\nEnter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};
int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}
int main()
{
    Bank C[5];

    int found = 0, a, ch, i;
    for (i = 0; i<5; i++) 
    {
        C[i].OpenAccount();
    }

    do 
    {
        cout << "\n\n 1:Display All \n 2:By Account No. \n 3:Deposit \n 4:Withdraw \n 5:Exit" << endl;        // display options

        cout << "\n Please input your choice: ";       // user input
        cin >> ch;

        switch (ch) 
        {
            case 1: // displaying account info
                for (i = 0; i<5; i++) 
                {
                    C[i].ShowAccount();
                }
                break;

            case 2: // searching the record
                cout << "Account Number? ";
                cin >> a;
                for (i = 0; i<5; i++) 
                {
                    found = C[i].Search(a);
                    if (found)
                    break;
                }
                if (!found)
                cout << "Record Not Found" << endl;
                break;

            case 3: // deposit operation
                cout << "Account Number To Deposit Amount? ";
                cin >> a;
                for (i = 0; i<5; i++) 
                {
                    found = C[i].Search(a);
                    if (found) {
                        C[i].Deposit();
                        break;
                    }
                }
                if (!found)
                cout << "Record Not Found" << endl;
                break;

            case 4: // withdraw operation
                cout << "Account Number To Withdraw Amount? ";
                cin >> a;
                for (i = 0; i<5; i++) 
                {
                    found = C[i].Search(a);
                    if (found) {
                        C[i].Withdrawal();
                        break;
                    }
                }
                if (!found)
                cout << "Record Not Found" << endl;
                break;

            case 5: // exit
                cout << "Have a nice day" << endl;
                break;

            default:
                cout << "Wrong Option" << endl;
        }
    } 
    while (ch != 5);
    return 0;
}