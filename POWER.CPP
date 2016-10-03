/*
Assinment #4 Q.4:To claculate power of a number.
Programmer:Abhigyan Gandhi Date:25/7/16
*/
# include<iostream.h>
# include<conio.h>
void main()
{
	clrscr();
	{
		int base,power;
		int ans=1;
		cout<<"Enter base: ";
		cin>>base;
		cout<<"Enter power: ";
		cin>>power;
		for(int i=1 ; i<=power ; i++)
			ans*=base;
		cout<<"Answer is: "<<ans;
	}
	getch();
}
/*
Enter base: 2
Enter power: 2
Answer is: 4
*/