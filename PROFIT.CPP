# include <iostream.h>
# include <conio.h>
void main()
{
	clrscr();
	float s,b;
	cout<<"\nEnter buying price: ";
	cin>>b;
	cout<<"Enter selling price: ";
	cin>>s;
	if(s>b)
		cout<<"Profit Rs : "<<b-s;
	else if(b>s)
		cout<<"loss Rs : "<<s-b;
	else
		cout<<" No profit no loss";
	getch();
}