# include<iostream.h>
# include<conio.h>
void main()
{
	clrscr();
	int n,a,i,b,c;
	cout<<"Enter no. of numbers in the series: ";
	cin>>n;
		cout<<"The series is: :";
	for(i=1 ; i<=n ; i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<"  ";
	}
	getch();
}