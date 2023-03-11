// Singal : 

#include<iostream>
#include<string.h>
using namespace std;
class Students
{
    int roll;
    string name;

    public :
    void read();
    void display();
};
class Result:public Students
{
    int t;
    float p;
    char div[10];
    int s1;
    int s2;
    int s3;

    public :
    void getmarks();
    void putmarks();
    void process();
    void printresult();
};
void Students::read()
{
    cout << " Enter your Roll No. : ";
    cin >> roll;
    cout << " Enter your Name : ";
    cin >> name;
}
void Students::display()
{
    cout << " Roll No. : " << roll << endl;
    cout << " Name : " << name << endl;
    cout << "\n";
}
void Result::getmarks()
{
    cout << " Enter your marks : " << endl;
    cin >> s1 >> s2 >> s3;
}
void Result::putmarks()
{
    cout << " Subject 1 : " << s1 << endl;
    cout << " Subject 2 : " << s2 << endl;
    cout << " Subject 3 : " << s3 << endl;
}
void Result::process()
{
    t = s1+s2+s3;
    p = t/3.0;
    p >= 60? strcpy(div, "Class A") : p >= 50? strcpy(div, "Class B") : strcpy(div, " Class C");
}
void Result::printresult()
{
    cout << " Total : " << t << endl;
    cout << "\n";
    cout << " Percentage : " << p << endl;
    cout << " Division : " << div << endl;
}
int main()
{
    Result x;

    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
}