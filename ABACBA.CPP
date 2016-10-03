/*
Assignment #4 Q.13:To generate the following series.
Programmer:Abhigyan Gandhi date:8/8/16
*/
# include<iostream.h>
# include<conio.h>
void main()
{
		clrscr();
		char ch='A';
		int i,j;
		for(i=1 ; i<=4 ; i++)
		{
			ch='A'+i-1;
			for(j=1 ; j<=i ; j++)
			{
				cout<<ch<<" ";
				ch--;
			}
			cout<<endl;
		}
		getch();
}
/*
A
B A
C B A
D C B A
*/