/*
2. Define a class batsman with the following specifications:

Private members:
bcode                   4 digits code number
bname                   20 characters
innings, notout, runs   integer type
batavg                  it is calculated according to the formula –
                        batavg =runs/(innings-notout)
calcavg()               Function to compute batavg

Public members:
readdata()                 Function to accept value from bcode, name, innings, notout and
invoke the function
calcavg()                  to calculate.
displaydata()              Function to display the data members on the screen.
*/

#include<iostream>
using namespace std;
class Batsman
{
	int B_code;
	char B_name[20];
	int innings,notout,runs;
	int Bat_avg;

	public :
	void readdata()
	{
	cout<<"Enter Batsman's Code : ";
	cin>> B_code;
	cout<<"Enter Batsman's Name : ";
	cin>> B_name;
	cout<<"Enter Batsman's Innings : ";
	cin>>innings;
    cout<<"Enter Batsman's Not Out Time : ";
    cin>>notout;
    cout<<"Enter Batsman's Runs : ";
    cin>>runs;
    cout<<"=================================";
	}

	void calcavg()
	{
		Bat_avg=runs/(innings-notout);
	}

	void displaydata()
	{
	cout << "\nBatsman code " << B_code;
    cout << "\nBatsman name " << B_name;
    cout << "\nInnings " << innings;
	cout << "\nNot out " << notout;
    cout << "\nBatsman Runs " << runs;
    cout << "\nBatting Average " << Bat_avg;	
	}
};
int main()
{
	Batsman B1;
	B1.readdata();
	B1.displaydata();
}