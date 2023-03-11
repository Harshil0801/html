// Hierarchical :

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
    int roll_no;
    char name[20];

    public:
    void read();
    void display();
};
class Marks :public Student
{
    public:
    int s1,s2,s3,total;
    float pr;
    char div[10];

    void getMarks();
    void putMarks();
};
class Result :public Student
{
    public:
    int c1,c2,c3,c_total;
    float c_pr;
    char c_div[10];


    void process();
    void printResult();
};
void Student :: read()
{
    cout <<"\nEnter roll no : ";
    cin >> roll_no;

    cout <<"Enter name : ";
    cin >> name;
}
void Student :: display()
{
    cout <<"\n roll no : "<< roll_no << endl;
    cout <<"student name : "<< name << endl;
}
void Marks :: getMarks()
{
    cout <<"\nmaths & physics & chemistry marks : ";
    cin >> s1 >> s2 >> s3;

    total=s1+s2+s3;
    pr=total/3.0;

    pr>60 ? strcpy(div,"First"): pr>50 ? strcpy(div,"Second"): strcpy(div,"Third");
}
void Marks :: putMarks()
{
    cout <<"\n -----science student----- \n";

    cout <<"\nsubject 1 : "<< s1 << endl;
    cout <<"subject 2 : "<< s2 << endl;
    cout <<"subject 3 : "<< s3 << endl;
    cout <<"\ntotal : "<< total << endl;
    cout <<"pr : "<< pr << endl;
    cout <<"divsion : "<< div << endl;
}
void Result :: process()
{
  cout <<"\naccount & stat & english marks : ";
    cin >> c1 >> c2 >> c3;

    c_total=c1+c2+c3;
    c_pr=c_total/3.0;

    c_pr>60 ? strcpy(c_div,"First"): c_pr>50 ? strcpy(c_div,"Second"): strcpy(c_div,"Third");
}
void Result :: printResult()
{
    cout <<"\n -----commerce student----- \n";

    cout <<"\nsubject 1 : "<< c1 << endl;
    cout <<"subject 2 : "<< c2 << endl;
    cout <<"subject 3 : "<< c3 << endl;
    cout <<"\ntotal : "<< c_total << endl;
    cout <<"pr : "<< c_pr << endl;
    cout <<"divsion : "<< c_div << endl;
}
int main()
{
    Marks m;
    Result r;

    m.read();
    m.getMarks();
    r.process();
    m.display();
    m.putMarks();
    r.printResult();
}