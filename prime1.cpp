//cpp program to check the given number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter a number:";
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			cout<<"It is not prime number";
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"It is a prime number";
		return 0;
	}
}
