//cpp program to print n numbers and their sum
#include<iostream>
using namespace std;
void PrintNtoOne(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<" ";
	PrintNtoOne(n-1);
}
void PrintOnetoN(int n,int k=1)
{
	if(n==0)
	{
		return;
	}
	cout<<k<<" ";
	PrintOnetoN(n-1,k+1);
}
int getSum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n+getSum(n-1);
}
int getSumDigits(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n%10+getSumDigits(n/10);
}
int main()
{
 	int n;
 	cout<<"Enter a number:";
 	cin>>n;
 	cout<<"From one to N : ";
 	PrintOnetoN(n);
 	cout<<endl<<"From N to one : ";
 	PrintNtoOne(n);
 	cout<<endl<<"Sum is : "<<getSum(n)<<endl;
 	cout<<"Sum of digits is : "<<getSumDigits(n);
 	return 0;
}
