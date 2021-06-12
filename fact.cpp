#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,fact=1,count=0;
cout<<"Enter a  number:";
cin>>n;
for(int i=2;i<=n;i++)
{
    fact=fact*i;
}
if(fact%10==0)
cout<<"Factorial is:"<<fact;
return 0;
}
