/*
Assignment #4 Q.13:To generate the following series.
Programmer:Abhigyan Gandhi date:8/8/16
*/
# include<iostream.h>
# include<conio.h>
# include<iomanip.h>
void main()
{
	clrscr();
	int a=2,i,j,p=30;
	for(i=1 ; i<=6 ; i++)
	{
		a=2;
		cout<<setw(p)<<"";

		for(j=1 ; j<=2*i-1 ; j++)
		{
			cout<<setw(4)<<a;
			a+=2;
		}
		p-=4;
		cout<<endl;
	}
	getch();
}
/*
				 2
			     2   4   6
			 2   4   6   8  10
		     2   4   6   8  10  12  14
		 2   4   6   8  10  12  14  16  18
	     2   4   6   8  10  12  14  16  18  20  22
*/