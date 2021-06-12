//cpp program to check whether given number is PRIME or not 
#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
bool checkprime(int num) 
{
	if(num==1)
	{
		return false;
	}
	if(num==2 || num==3)
	{
		return true;
	}
	if(num%2==0 || num%3==0) 
	{
		return false;
	}
	for(int i=5;i*i<=num;i+=6) 
	{
		if(num%i==0 || num%(i+2)==0) 
		{ 
			return false; 
		}
	} 	
	return true;
} 
int main() 
{ 
	int num;
	cout<<"Enter the number to check prime or not: ";
	cin>>num;
	if(checkprime(num))
	cout<<num<<" IS A PRIME";
	else
	cout<<num<<" IS NOT A PRIME";
}

