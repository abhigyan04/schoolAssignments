# include<iostream.h>
# include<conio.h>
# include<math.h>
void main()
{
	clrscr();
	float sum=0;
	int i,n,x,f,j;
	cout<<"Enter the no. of terms in the series: ";
	cin>>n;
	cout<<"Enter the value of x: ";
	cin>>x;
	for(i=1 ; i<=n ; i++)
	{
		f=1;
		for(j=1 ; j<=i ; j++)
			f=f*j;
		sum=sum+pow(x,i)/f;
	}
	cout<<"The sum of the series is: "<<sum;
	getch();
}
/*
Enter the no. of terms in the series: 2
Enter the value of x: 1
The sum of the series is: 1.5
*/