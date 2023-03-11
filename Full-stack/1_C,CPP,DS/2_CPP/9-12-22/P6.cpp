/*
6. Define a class REPORT with the following specification:

Private members :
adno            4 digit admission number
name            20 characters
marks           an array of 5 floating point values
average         average marks obtained
GETAVG() a function to compute the average obtained in five subject

Public members:
READINFO()          function to accept values for adno, name, marks. Invoke the function
GETAVG()
DISPLAYINFO()       function to display all data members of a report on the screen.
You should give function definitions.
*/


#include<iostream>
using namespace std;
class Report 
{
    char adno[5],name[21];
    float marks[5],average;

    public :
    void GETAVG() 
    {
        for (int i=0; i<5; i++) 
        {
            average += marks[i]/5;
            //average1 = marks[i]/5;
        }
        
    }
    void READINFO() 
    {
        cout << "Enter an admission number: ";
        cin.getline(adno, 5);
        cout << "Enter a name: ";
        cin.getline(name, 21);


        for (int i=0; i<5; i++) 
        {
            cout << "Enter " << i+1 << "th mark: ";
            cin >> marks[i];
        }
        GETAVG();
    }

    void DISPLAYINFO() 
    {
        cout << "\nAdmisson number: " << adno;
        cout << "\nName: " << name;
        cout << "\nMarks obtained:";
        for (int i=0; i<5; ++i) 
        {
            cout << marks[i] << " ";
        }
        cout << "Average marks: " << average;
    }
};
int main() 
{
    Report R;
    R.READINFO();
    cout << "\n";
    R.DISPLAYINFO();
}
