# include<iostream.h>
# include<conio.h>
void main()
{
	clrscr();
	int n,f,i;
	f=1;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=1 ; i<=n ; i++)
		f=f*i;
	cout<<"The factorial of the entered number is: "<<f;
	getch();
}