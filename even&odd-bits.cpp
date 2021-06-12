//cpp program to find no. of even and odd numbers present in given number
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,r,odd=0,even=0;
	cout<<"Enter a number:";
	cin>>n;
	int temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"The even numbers are:"<<even<<"\n";
	cout<<"The odd numbers are:"<<odd;
	return 0;
}
