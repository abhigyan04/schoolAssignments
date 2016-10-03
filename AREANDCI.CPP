/*Assignment #1 Q.5:to exchange values of two variables
Programmer:Abhigyan gandhi Date:27/6/16
*/
# include<iostream.h>
# include <conio.h>
void main()
{
	clrscr();
	float a,c,b,h,r ;
	cout<<"Enter base and height of a triangle: ";
	cin>>b>>h ;
	a=1*b*h/2 ;
	cout<<"\nThe area of the triangle is: "<<a ;
	cout<<"\nEnter radius of a circle: ";
	cin>>r ;
	c=2*r*22/7 ;
	cout<<"\nThe circumference of the circle is: "<<c ;
	getch();
}
/*
Enter base and height of a triangle: 3 4

The area of the triangle is: 6
Enter radius of a circle: 2

The circumference of the circle is: 12.571428
*/