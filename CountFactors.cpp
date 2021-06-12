//cpp program to find factors of a given number
#include<bits/stdc++.h>
#include<iostream> 
using namespace std;
int main()
{
      int n;
      cout<<"Enter a number:";
      cin>>n;
	  cout<<"The factors of "<<n<< ": ";
      cout<<1<<" ";
      for(int i=2;i*i<=n;i++)
      {
           if(n%i==0)
          {
                cout<<i<<" "<<n/i<<" ";
          }
      }
     cout<<n;
     return 0;
}
