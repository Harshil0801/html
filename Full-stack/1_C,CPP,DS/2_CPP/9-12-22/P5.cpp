/*
5. Define a class BOOK with the following specifications :

Private members (of the class BOOK are)
BOOK NO                    integer type
BOOKTITLE                  20 characters
PRICE                      float (price per copy)
TOTAL_COST()               A function to calculate the total cost for N number of copies where N
is passed to the function as argument.

Public members  (of the class BOOK are)
INPUT()                   function to read BOOK_NO. BOOK TITLE, PRICE
PURCHASE()                function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user.
*/


#include<iostream>
using namespace std;
class Book
{
	int BOOKNO;
	char BOOKTITLE[20];
	float PRICE;

	public : 
	void INPUT()
	{
		cout<<"\n Enter Book Number : ";
		cin>>BOOKNO;
		cout<<"\n Enter Book Title : ";
		cin>>BOOKTITLE;
		cout<<"\n Enter price per copy : ";
		cin>>PRICE;
	}

	void TOTAL_COST(int N)
	{
		float tcost;
		tcost=PRICE*N;
		cout<<tcost;
	}

	void PURCHASE()
	{
		int n;
		cout<<"\n Enter number of copies to purchase : ";
		cin>>n;
		cout<<"\n Total cost is : ";
		TOTAL_COST(n);
	}
};
int main()
{
	Book B1;
	B1.INPUT();
	B1.PURCHASE();
}