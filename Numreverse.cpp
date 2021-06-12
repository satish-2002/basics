//cpp program to print reverse of given number
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,res=0;
	cout<<"Enter a number:";
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
	}
	cout<<"The reverse number is:"<<res;
	return 0;
	
}
