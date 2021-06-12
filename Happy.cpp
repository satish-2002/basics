/*c++ program to find given number is HAPPY or not
EX: 19   =>1^2+9^2=82  
         =>8^2+2^2=68
         =>6^2+8^2=100
         =>1^2+0^2+0^2=1    */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
	cout<<"Enter a Number:";
	cin>>num;
	n=num;
	int r,res=0;
	while(1)
	{
	    r=num%10;
		num=num/10;
		res=res+(r*r);
		if(num==0)
		{
		    num=res;
			res=0;
			if(num>=1&&num<=9)
			{
				break;
			}
		}
	}
	if(num==1)
	{
		cout<<n<<" IS HAPPY NUMBER";
	}
	else
	{
		cout<<n<<" IS NOT A HAPPY NUMBER";
	}
	return 0;
}
