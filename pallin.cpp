//cpp program to fing given number is pallin or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,res=0;
	cout<<"Enter a number:";
	cin>>n;
	int temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
	}
	if(res==temp)
	{
		cout<<"It is a PALLIN number";
	}
	else
	{
		cout<<"it is NOT A PALLIN number";
	}
	return 0;
}
