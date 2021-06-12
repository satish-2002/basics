//cpp program to find given no. is strongly even or strongly odd
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,odd=0,even=0,dig_count=0;
	cout<<"Enter a number:";
	cin>>n;
	int temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		dig_count++;
		if(r%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	if(dig_count==even)
	{
		cout<<"It is strong even number.";
	}
	else if(dig_count==odd)
	{
		cout<<"It is strong odd number.";
	}
	else
	{
		cout<<"Mixed number";
	}
	return 0;
}
