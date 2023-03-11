/*
1. Define a class student with the following specification

Private members of class student
admno               integer
sname               20 character
eng. math, science  float
total               float
ctotal()            a function to calculate eng + math + science with float return type.

Public member function of class student
Takedata()          Function to accept values for admno, sname, eng, science and invoke
ctotal()            to calculate total.
Showdata()          Function to display all the data members on the screen
*/

#include<iostream>
using namespace std;
class Student
{
    int roll_no,total;
    string s_name;
    float eng, maths, science;

    public :
    void takedata()
    {
        cout << "\n Roll no. : ";
        cin >> roll_no;

        cout << "\n Student's Name : ";
        cin >> s_name;

        cout << "\n Marks of English : ";
        cin >> eng;

        cout << "\n Marks of Maths : ";
        cin >> maths;

        cout << "\n Marks of Science : ";
        cin >> science;

    }
   
    int c_total()
    {
        total=eng+maths+science;
        return total;
    }

    void showdata()
    {
        cout << " \n" << roll_no;
        cout << " \t" << s_name;
        cout << " \t" << eng;
        cout << " \t" << maths;
        cout << " \t" << science;
        cout << " \t" << total;
    }
};
int main()
{
    Student S;
    cout << "\nRollno. name\tEnglish\tMaths\tScience\tTotal";
    S.takedata();
    S.c_total();
    S.showdata();
}


