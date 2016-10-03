/*
Assignment #4 Q.3:To compare and print biggest number
Programmer:Abhigyan Gandhi Date:25/7/16
*/
# include<iostream.h>
# include<conio.h>
void main()
{
	clrscr();
	int n,no,big=0 ;
	cout<<"Enter total no. of numbers to be compared:\t ";
	cin>>n;
	for(int i=1 ; i<=n ; i++)
	 {
			cout<<"Enter a number:\t ";
			cin>>no;
			if(big<no)
				big=no;
	 }
		cout<<"The biggest number is: "<<big;
	 getch();
}
/*
Enter total no. of numbers to be compared:       5
Enter a number:  1
Enter a number:  2
Enter a number:  3
Enter a number:  4
Enter a number:  5
The biggest number is: 5
*/