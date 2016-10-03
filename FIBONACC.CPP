/* Assignment #4 Q.8:fibonacci sequence
Programmer:Abhigyan Gandhi Date:25/7/16
*/
# include<iostream.h>
# include<conio.h>
void main()
{
	clrscr();
	int a,b,i,p,n;
	cout<<"Enter how many numbers you want in series: ";
	cin>>n;
	cout<<"Enter the first no.: ";
	cin>>a;
	cout<<"Enter the second no.: ";
	cin>>b;
	cout<<"the series is: ";
	for(i=1 ; i<=n ; i++)
	{
		p=a+b;
		a=b;
		b=p;
		cout<<p<<",";
	}
	getch();
}
/*
Enter how many numbers you want in series: 10
Enter the first no.: 1
Enter the second no.: 2
the series is: 3,5,8,13,21,34,55,89,144,233,
*/