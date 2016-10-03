/*
Assignment #2 Q.3:to translate no. of day to name of day
Programmer:Abhigyan Gandhi Date:15/7/6
*/
# incude <iostream.h>
# incude <conio.h>
void()
{
	clrscr();
	int d;
	cout<<"Enter no. of week's day(1-7): ";
	cin>>d;
	switch(d)
	{
		case 1:cout<<"Monday";
		       break;
		case 2:cout<<"Tuesday";
		       break;
		case 3:cout<<"Wednesday";
		       break;
		case 4:cout<<"Thursday";
		       break;
		case 5:cout<<"Friday";
		       break;
		case 6:cout<<"Saturday";
		       break;
		case 7:cout<<"Sunday";
		       break;
	}
	getch();
}



