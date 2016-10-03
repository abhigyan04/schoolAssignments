/*
Assignment #1 Q.6:To convert days to years and weeks
Programmer:Abhigyan Gandhi Date:30/6/16
*/
# include<iostream.h>
# include <conio.h>
void main()
{
	clrscr();
	float d,y,w ;
	cout<<"Enter no.of days: ";
	cin>>d ;
	y=d/365 ;
	w=d/7 ;
	cout<<"\nNo. of years: "<<y ;
	cout<<"\nNo. of weeks: "<<w ;
	getch();
}
/*
Enter no.of days: 30

No. of years: 0.082192
No. of weeks: 4.285714
*/